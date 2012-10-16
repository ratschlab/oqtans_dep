function start_proc(fname, rm_flag)
% start_proc(fname)
  
global THIS_IS_A_RPROC_PROCESS  
THIS_IS_A_RPROC_PROCESS=1 ;

%unix('sync') ;

engine = determine_engine() 
if isequal(engine, 'matlab'),
  pause('off')
end ;

if nargin<2, rm_flag = 1 ; end ;

%addpath(['/fml/ag-raetsch/share/software/matlab_tools/rproc']) ;
load(fname, 'ProcName', 'P1', 'dirctry', 'options') ;
cd(dirctry) ;

disp([ '"' ProcName '" on "' hostname '" started (in ' dirctry '; from ' fname ')']) ;

clo = clock ;
fprintf('### job started %s  %i:%i\n', date, clo(4), clo(5));

if isfield(options, 'rmpaths'),
  for i=1:length(options.rmpaths),
    fprintf('removing path %s\n', options.rmpaths{i}) ;
    rmpath(options.rmpaths{i}) ;
  end ;
end ;

if isfield(options, 'addpaths'),
  for i=1:length(options.addpaths),
    try
      fprintf('adding path %s\n', options.addpaths{i}) ;
      addpath(options.addpaths{i}) ;
    catch
      warning(sprintf('failed to add path %s\n', options.addpaths{i})) ;
    end ;
  end ;
end ;

if isfield(options, 'rm_flag'),
  rm_flag = options.rm_flag ;
end ;

retval1=[] ;
retval2=[] ;
err=[] ;
try
  disp('trying two return arguments') ;
  [retval1,retval2]=feval(ProcName, P1) ;
catch
  disp('failed')
  err=lasterror ;

  if equal(err.identifier,'MATLAB:TooManyOutputs') || ...
        equal(err.identifier,'MATLAB:LS:TooManyOutputArguments') || ...
        (isfield(err, 'message') && length(err.message)>=48 && equal(err.message(1:48), 'error: element number 2 undefined in return list'))
    err = [] ;
    try
      disp('trying one return arguments') ;
      [retval1]=feval(ProcName, P1) ;
      retval2=[] ;
    catch
      err=lasterror ;
      if equal(err.identifier,'MATLAB:TooManyOutputs')  || ... 
            equal(err.identifier,'MATLAB:LS:TooManyOutputArguments') || ...
            (isfield(err, 'message') && length(err.message)>=48 && equal(err.message(1:48), 'error: element number 1 undefined in return list'))
        err=[] ;
        try
          disp('trying without return arguments') ;
          feval(ProcName, P1) ;
        catch
          err=lasterror ;
        end ;
      end ;
    end 
  else
    disp(err.message);
    disp(err.identifier);
    for i=1:length(err.stack)
      disp(sprintf('  In %s>%s at %u',err.stack(i).file, err.stack(i).name, err.stack(i).line));
    end
  end 
end 

if isempty(err) %|| equal(err.identifier, 'MATLAB:TooManyOutputs') || equal(err.identifier,'MATLAB:LS:TooManyOutputArguments') || ...
  %(isfield(err, 'message') && length(err.message)>=48 && equal(err.message(1:48), 'error: element number 2 undefined in return list')) || ...
  %    (isfield(err, 'message') && length(err.message)>=48 && equal(err.message(1:48), 'error: element number 1 undefined in return list'))
  disp(['saving results to ' fname(1:end-4) '_result.mat']) ;
  save([fname(1:end-4) '_result.mat'], 'retval1', 'retval2', '-v7') ;
end ;
  
if ~isempty(err) %&& ~equal(err.identifier, 'MATLAB:TooManyOutputs') && ...
      %~equal(err.identifier,'MATLAB:LS:TooManyOutputArguments') && ...
      %~equal(err.identifier,'RPROC:rerun')
  warning(['execution of ' ProcName ' failed']) ;
  err.identifier
  err.message
  for i=1:length(err.stack)
    disp(sprintf('  In %s>%s at %u',err.stack(i).file, err.stack(i).name, err.stack(i).line));
  end
  P1
  
  global MATLAB_RETURN_VALUE
  MATLAB_RETURN_VALUE = -1 ;
  rm_flag = 0 ;
end ;

% if we rerun, then we should not cleanup
if ~isempty(err) && equal(err.identifier,'RPROC:rerun')
  warning('job is marked for rerunning. exiting without finished computations');
  global MATLAB_RETURN_VALUE
  MATLAB_RETURN_VALUE % should be 99
else
  if rm_flag,
    unix(['rm -rf ' fname]) ; % mat file
    unix(['rm -rf ' fname(1:end-2)]) ; % m file ;-)
  end ;
end ;  

clo = clock ;
fprintf('### job finished %s  %i:%i\n', date, clo(4), clo(5));

%unix('sync') ;

%exit ;
