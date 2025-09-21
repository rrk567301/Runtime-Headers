@class HMDEventCountersManager;

@interface HMDLogEventAccessoryFirmwareUpdateEventAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing>

@property (readonly, nonatomic) HMDEventCountersManager *eventCountersManager;

+ (id)managedEventCounterRequestGroups;

- (void)resetAggregationAnalysisContext;
- (id)initWithEventCountersManager:(id)a0;
- (void)populateAggregationAnalysisLogEvent:(id)a0 forDate:(id)a1;
- (void)observeEvent:(id)a0;
- (void).cxx_destruct;

@end
