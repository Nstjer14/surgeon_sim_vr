clc;
clear;
close all;

load dataset1_G_noisy

%% Exercise 1 (a) 

figure('Name', 'Training data')
plot(trn_x(:,1), trn_x(:,2), '.r', trn_y(:,1),trn_y(:,2),'.y')
legend('Training X', 'Training Y')


%Construct Gaussian Mixture Model 

gaussMM = gmm(2,1,'full');

options = foptions;

%Training the algorithm by using EM
mixX = gmmem(gaussMM, trn_x, options);
mixY = gmmem(gaussMM, trn_y, options);


%Likelihood functions for x and y class for all test data set
% identical to the posterior probablities since the prior are identical for
% both distrubutions

evalX = gauss(mixX.centres, mixX.covars, tst_xy);
evalY = gauss(mixY.centres, mixY.covars, tst_xy);

%Classifying data:

numX = 0;
numY = 0;

misclass = 0; 
for i=1:length(evalX)
    if evalX(i) < evalY(i) %If the probability that it belongs to class X is lower that class Y
        label(i) = 1;       %Then the label on i becomes 1
        numY = numY+1;      %and we add to the counter
        sortedY(numY,:) = tst_xy(i,:); %We save this dataset 
        if tst_xy_class(i) == 1      %Tests if it has been classified correctly
            misclass=misclass+1;
        end
    else
        label(i) = 2;       %same stuff as above just if it belongs in class X
        numX = numX+1;      
        sortedX(numX,:) = tst_xy(i,:);
        if tst_xy_class(i) == 2
            misclass = misclass + 1;
        end
    end
end


%Then we plot data
figure('Name', '1a) Test data', 'NumberTitle', 'off')
plot(sortedX(:,1), sortedX(:,2), '.r',...
    sortedY(:,1), sortedY(:,2),'.y')


%Accuracy

acc = 1-misclass/length(tst_xy_class(:,1));
fprintf('a) Accuracy = %f\n', acc);        


% (b) classify instances in tst_xy_126 by assuming a uniform prior over the space of hypotheses, 
% and use the corresponding label file tst_xy_126_class to calculate the accuracy;
%Basically the same as before with new data set and assuming uniform prior
%(meaning we do not multiply with anything when calculating the probability
%of x belonging to class X or Y) 
evalX_b = gauss(mixX.centres, mixX.covars, tst_xy_126);
evalY_b = gauss(mixY.centres, mixY.covars, tst_xy_126);

numX_b = 0;
numY_b = 0;
misclass_b = 0;

for ii=1:length(evalX_b)
 if evalX_b(ii) < evalY_b(ii)
    label_b(ii) = 1;
    numY_b = numY_b+1;
    sortedY_b(numY,:) = tst_xy(ii,:);
        if tst_xy_126_class(ii) == 1
            misclass_b = misclass_b + 1;
        end
 else
    label_b(ii) = 2;
    numX_b = numX_b +1;
    sortedX_b(numX,:) = tst_xy(ii,:);
    if tst_xy_126_class(ii) == 2
        misclass_b = misclass_b + 1;
    end
 end
end

figure('Name', '1b) Test Data')
plot(sortedX_b(:,1), sortedX_b(:,2),'.r',...
    sortedY_b(:,1), sortedY_b(:,2),'.y')

acc_b = 1-misclass_b/length(tst_xy_126_class(:,1));
fprintf('b) Accuracy = %f\n', acc_b);


%(c) classify instances in tst_xy_126 by assuming a prior probability of 0.9 for Class x and 0.1 for Class y, and use the corresponding label file tst_xy_126_class to calculate the accuracy; compare the results with those of (b).
%Again, same task just multiply evalX and evalY with 0.9 and 0.1
%accordingly.

evalX_c = 0.9*gauss(mixX.centres, mixX.covars, tst_xy_126);
evalY_c = 0.1*gauss(mixY.centres, mixY.covars, tst_xy_126);

numX_c = 0;
numY_c = 0;
misclass_c = 0;

for ii=1:length(evalX_c)
 if evalX_c(ii) < evalY_c(ii)
    label_c(ii) = 1;
    numY_c = numY_c+1;
    sortedY_c(numY,:) = tst_xy(ii,:);
        if tst_xy_126_class(ii) == 1
            misclass_c = misclass_c + 1;
        end
 else
    label_c(ii) = 2;
    numX_c = numX_c +1;
    sortedX_c(numX,:) = tst_xy(ii,:);
    if tst_xy_126_class(ii) == 2
        misclass_c = misclass_c + 1;
    end
 end
end

figure('Name', '1c) Test Data')
plot(sortedX_c(:,1), sortedX_c(:,2),'.r',...
    sortedY_c(:,1), sortedY_c(:,2),'.y')

acc_c = 1-misclass_c/length(tst_xy_126_class(:,1));
fprintf('c) Accuracy = %f\n', acc_c);


% We can see that the accuracy is higher when calculating with a prior
% probability of 0.9 for class X and 0.1 for class Y. 