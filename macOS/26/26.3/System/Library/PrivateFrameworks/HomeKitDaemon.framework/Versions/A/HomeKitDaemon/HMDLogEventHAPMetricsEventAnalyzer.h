@class HMDEventCountersManager;

@interface HMDLogEventHAPMetricsEventAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing>

@property (readonly) HMDEventCountersManager *eventCountersManager;

+ (id)managedEventCounterRequestGroups;

- (void)observeEvent:(id)a0;
- (void)populateAggregationAnalysisLogEvent:(id)a0 forDate:(id)a1;
- (void)resetAggregationAnalysisContext;
- (void).cxx_destruct;
- (id)initWithEventCountersManager:(id)a0;

@end
