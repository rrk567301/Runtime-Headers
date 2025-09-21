@class NSCountedSet;

@interface WADeploymentIssuesMetric : NSObject

@property (retain, nonatomic) NSCountedSet *issues;
@property (retain, nonatomic) NSCountedSet *networks;
@property (nonatomic) unsigned long long eligibleNetworkCount;
@property (nonatomic) unsigned long long ineligibleNetworkCount;
@property (nonatomic) unsigned long long secondsSinceLastRun;

- (id)init;
- (void)submit;
- (void).cxx_destruct;
- (void)addIssue:(id)a0;
- (id)coreAnalyticsRepresentation;
- (unsigned long long)countForIssueType:(unsigned long long)a0;
- (unsigned long long)highCongestionCount;
- (unsigned long long)percentageForIssueType:(unsigned long long)a0;
- (unsigned long long)poorCoverageCount;
- (unsigned long long)recommendationCount;
- (unsigned long long)recommendationPercentage;

@end
