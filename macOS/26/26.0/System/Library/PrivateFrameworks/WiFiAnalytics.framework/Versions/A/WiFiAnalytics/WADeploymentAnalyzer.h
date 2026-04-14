@class WAPersistentContainer, WADeploymentAnalyzerDefaults;

@interface WADeploymentAnalyzer : NSObject

@property (retain, nonatomic) WADeploymentAnalyzerDefaults *defaults;
@property (retain, nonatomic) WAPersistentContainer *persistentContainer;

- (id)initWithPersistentContainer:(id)a0;
- (id)init;
- (id)initWithDefaults:(id)a0;
- (void).cxx_destruct;
- (short)_analyzeResultsForCongestion:(id)a0 withMetric:(id)a1;
- (short)_analyzeResultsForCoverage:(id)a0 withMetric:(id)a1;
- (unsigned long long)_fetchIneligibleNetworkCount;
- (id)_fetchUsageForNetworks:(id)a0 timeSpan:(unsigned long long)a1 withError:(id *)a2;
- (void)_updateCongestionIfNeededForNetwork:(id)a0 newCongestion:(short)a1 pastWeekUsage:(id)a2;
- (void)_updateCoverageIfNeededForNetwork:(id)a0 newCoverage:(short)a1 pastWeekUsage:(id)a2;
- (BOOL)_verifyMinStayAtGoodCoverageForSSID:(id)a0 pastWeekUsage:(id)a1;
- (BOOL)_verifyMinStayAtLowCongestionForSSID:(id)a0 pastWeekUsage:(id)a1;
- (BOOL)updateHomeNetworksForDeploymentIssuesWithReason:(id)a0 withError:(id *)a1;
- (BOOL)updateNetworksForCoverageIssues:(id)a0 withReason:(id)a1 withError:(id *)a2;

@end
