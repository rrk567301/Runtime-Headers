@class HMDEventCountersManager;

@interface HMDLogEventHAPMetricsEventAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing>

@property (readonly) HMDEventCountersManager *eventCountersManager;

+ (id)managedEventCounterRequestGroups;

- (void)resetAggregationAnalysisContext;
- (id)initWithEventCountersManager:(id)a0;
- (void)populateAggregationAnalysisLogEvent:(id)a0 forDate:(id)a1;
- (void)observeEvent:(id)a0;
- (void).cxx_destruct;

@end
