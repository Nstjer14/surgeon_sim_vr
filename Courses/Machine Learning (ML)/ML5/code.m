clear all;
close all;

load 2D3classes.mat
plot(trn5(:,1),trn5(:,2),'.r',trn6(:,1),trn6(:,2),'.b',trn8(:,1), trn8(:,2),'.g'); %Plotting the training data

trainingdata = double([trn5;trn6;trn8]); %combining all the data into one file 
X = trainingdata(:,1:2);
[n,p] = size(X);
rng(3); % For reproducibility

figure();
plot(trainingdata(:,1), trainingdata(:,2), '.b') %the figure without any classessssssssssss

%Settings for the gaussian: 
k = 3; 
Sigma = {'diagonal','full'}; % What elipses we want
nSigma = numel(Sigma);
SharedCovariance = {true,false};
SCtext = {'true','false'};
nSC = numel(SharedCovariance);


d = 500; % amount of  iterations 
x1 = linspace(min(X(:,1)) - 2,max(X(:,1)) + 2,d);
x2 = linspace(min(X(:,2)) - 2,max(X(:,2)) + 2,d);
[x1grid,x2grid] = meshgrid(x1,x2);
X0 = [x1grid(:) x2grid(:)];
threshold = sqrt(chi2inv(0.99,2));
options = statset('MaxIter',1000); % Increase number of iterations

figure;
c = 1;
%For all settings above:
for i = 1:nSigma;
    for j = 1:nSC;
        gmfit = fitgmdist(X,k,'CovarianceType',Sigma{i},...
            'SharedCovariance',SharedCovariance{j},'Options',options); %fit gaussian mixture model to the data with the set settings
        clusterX = cluster(gmfit,X); %cluster the data
        mahalDist = mahal(gmfit,X0); %Mahalanobis distance 
        subplot(2,2,c);
        h1 = gscatter(X(:,1),X(:,2),clusterX);
        hold on;
            for m = 1:k;
                idx = mahalDist(:,m)<=threshold;
                Color = h1(m).Color*0.75 + -0.5*(h1(m).Color - 1);
                h2 = plot(X0(idx,1),X0(idx,2),'.','Color',Color,'MarkerSize',1);
                uistack(h2,'bottom');
            end
        plot(gmfit.mu(:,1),gmfit.mu(:,2),'kx','LineWidth',2,'MarkerSize',10) %plot everything
        title(sprintf('Sigma is %s, SharedCovariance = %s',...
            Sigma{i},SCtext{j}),'FontSize',8)
        legend(h1,{'1','2','3'});
        hold off
        c = c + 1;
    end
end