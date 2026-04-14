@class HMDEventCounterGroup, HMDTimeBasedFlagsManager;

@interface HMDLogEventUserActivityAnalyzer : HMDHouseholdDataLogEventContributor <HMDAggregationAnalysisEventContributing>

@property (readonly, nonatomic) HMDEventCounterGroup *counterGroup;
@property (readonly, nonatomic) HMDTimeBasedFlagsManager *flagsManager;

+ (id)managedEventCounterRequestGroups;

- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)populateHouseholdMetricLogEvent:(id)a0 forHomeWithUUID:(id)a1 associatedToDate:(id)a2;
- (void)coalesceHouseholdDataLogEvent:(id)a0 fromSourceEvent:(id)a1;
- (void)finishCoalescingHouseholdDataLogEvent:(id)a0;
- (void)deserializeHouseholdMetricsLogEvent:(id)a0 fromSerializedMetric:(id)a1;
- (void)contributeHouseholdMetricLogEvent:(id)a0 toSerializedMetric:(id)a1;
- (void)contributeHouseholdMetricsLogEvent:(id)a0 toCoreAnalyticsEvent:(id)a1;
- (void)populateAggregationAnalysisLogEvent:(id)a0;
- (void)resetAggregationAnalysisContext;
- (void)_handleReadWriteLogEvent:(id)a0;
- (void)_handleAccessoryPairingLogEvent:(id)a0;
- (void)_handleAddActionSetLogEvent:(id)a0;
- (void)_handleAddTriggerLogEvent:(id)a0;
- (void)_handleActionSetRunLogEvent:(id)a0;
- (void)_handleCameraStreamLogEvent:(id)a0;
- (void)_handleCameraClipRequestLogEvent:(id)a0;
- (void)_markUserActivityEventForEventName:(id)a0 logEvent:(id)a1;
- (BOOL)_isUserSource:(unsigned long long)a0;
- (BOOL)_isTriggerSource:(unsigned long long)a0;
- (id)initWithEventCountersManager:(id)a0 flagsManager:(id)a1 dateProvider:(id)a2;

@end
