@class HMDEventCountersManager;

@interface HMDLogEventElectionEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing>

@property (readonly, nonatomic) HMDEventCountersManager *eventCountersManager;

+ (id)managedEventCounterRequestGroups;

- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)populateAggregationAnalysisLogEvent:(id)a0;
- (void)resetAggregationAnalysisContext;
- (id)initWithEventCountersManager:(id)a0;

@end
