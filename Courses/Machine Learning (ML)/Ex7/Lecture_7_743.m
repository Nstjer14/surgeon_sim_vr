%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Group ID : 743
% Members : Frederik Falk, Oliver Gyldenberg Hjermitslev, Atanas Nikolov,
% Nicklas Haagh Christensen, Niclas Hjorth Stjernholm
% Date : 18-10-17
% Lecture: 7 Support Vector Machines
% Dependencies: Netlab /LIBSVM / Visual Studio 2017 with C/C++ SDK's as Matlab compiler.
% Uses Matlab's MEX files to compile C/C++ files.
% Matlab version: 2017a
% Functionality: Uses support vector machines to train a classifier for the
% three classes 0, 1, and 2, and classifies test data.
% Requires the "make" file to be "build" before matlab is able to utilize
% the functions created in the C/C++ files.
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

% Load data from .mat file:
load mnist_all

% Reduce data set:
training_data = double([train0; train1; train2]);

training_labels = double([zeros(length(train0(:,1)),1);...
 ones(length(train1(:,1)),1);...
 2*ones(length(train2(:,1)),1) ]);

training_data = training_data./255;

%cost = 1 (parameter C), epsilon tolerance criterion0.6, cache size 500 MB
svmstruct = svmtrain(training_labels,training_data,'-c 1 -e 0.6 -m 500');

test_data = double([test0; test1; test2]);
test_labels = double([zeros(length(test0(:,1)),1);...
 ones(length(test1(:,1)),1);...
 2*ones(length(test2(:,1)),1) ]);

test_data = test_data./255;

[predict_label_L, accuracy_L, dec_values_L] = svmpredict(test_labels, test_data, svmstruct);