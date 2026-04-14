@class HMDEventCountersManager;

@interface HMDLogEventReachabilityEventsAnalyzer : HMDLogEventAnalyzer <HMDAggregationAnalysisEventContributing>

@property (readonly, nonatomic) HMDEventCountersManager *eventCountersManager;

+ (id)managedEventCounterRequestGroups;

- (void)observeEvent:(id)a0;
- (void)_handleCameraRecordingReachabilityLogEvent:(id)a0;
- (void)_handleReachabiltiyAddRemoveEvent:(id)a0;
- (void)populateAggregationAnalysisLogEvent:(id)a0 forDate:(id)a1;
- (void)resetAggregationAnalysisContext;
- (void).cxx_destruct;
- (id)initWithEventCountersManager:(id)a0;
- (void)_handleRemoteDeviceReachabilityChangedLogEvent:(id)a0;

@end
