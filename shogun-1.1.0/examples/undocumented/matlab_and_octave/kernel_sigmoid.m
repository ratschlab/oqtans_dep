size_cache=10;

addpath('tools');
fm_train_real=load_matrix('../data/fm_train_real.dat');
fm_test_real=load_matrix('../data/fm_test_real.dat');

% sigmoid
disp('Sigmoid');

gamma=1.2;
coef0=1.3;

sg('set_kernel', 'SIGMOID', 'REAL', size_cache, gamma, coef0);

sg('set_features', 'TRAIN', fm_train_real);
km=sg('get_kernel_matrix', 'TRAIN');

sg('set_features', 'TEST', fm_test_real);
km=sg('get_kernel_matrix', 'TEST');
