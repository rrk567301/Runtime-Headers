@class HMDEventCountersManager;

@interface HMDLogEventHAPMetricsEventAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing>

@property (readonly) HMDEventCountersManager *eventCountersManager;

+ (id)managedEventCounterRequestGroups;

- (id)initWithEventCountersManager:(id)a0;
- (void)populateAggregationAnalysisLogEvent:(id)a0 forDate:(id)a1;
- (void).cxx_destruct;
- (void)resetAggregationAnalysisContext;
- (void)observeEvent:(id)a0;

@end
