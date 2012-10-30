## Copyright (C) 2010-2011 VZLU Prague
##
## This file is part of Octave.
##
## Octave is free software; you can redistribute it and/or modify it
## under the terms of the GNU General Public License as published by
## the Free Software Foundation; either version 3 of the License, or (at
## your option) any later version.
##
## Octave is distributed in the hope that it will be useful, but
## WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
## General Public License for more details.
##
## You should have received a copy of the GNU General Public License
## along with Octave; see the file COPYING.  If not, see
## <http://www.gnu.org/licenses/>.

## -*- texinfo -*-
## @deftypefn {Function File} {[@var{info}, @var{err}, @var{msg}] =} fstat (fid)
## This function has been deprecated.  Use stat instead.
## @end deftypefn

## Deprecated in version 3.4

function [info, err, msg] = fstat (fid)
  persistent warned = false;
  if (! warned)
    warned = true;
    warning ("Octave:deprecated-function",
             "fstat is obsolete and will be removed from a future version of Octave, please use stat instead");
  endif

  [info, err, msg] = stat (fid);
endfunction