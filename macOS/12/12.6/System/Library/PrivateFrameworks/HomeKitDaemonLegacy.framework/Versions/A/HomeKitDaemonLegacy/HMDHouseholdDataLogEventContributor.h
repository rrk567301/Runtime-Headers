@class NSString, HMDMetricsDateProvider, HMDEventCountersManager;

@interface HMDHouseholdDataLogEventContributor : HMDLogEventAnalyzer <HMDHouseholdDataLogEventContributing>

@property (readonly, nonatomic) NSString *householdGroupName;
@property (readonly, nonatomic) HMDEventCountersManager *countersManager;
@property (readonly, nonatomic) HMDMetricsDateProvider *dateProvider;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)populateHouseholdMetricLogEvent:(id)a0 forHomeWithUUID:(id)a1 associatedToDate:(id)a2;
- (void)startCoalescingHouseholdDataLogEvent:(id)a0;
- (void)coalesceHouseholdDataLogEvent:(id)a0 fromSourceEvent:(id)a1;
- (void)finishCoalescingHouseholdDataLogEvent:(id)a0;
- (void)deserializeHouseholdMetricsLogEvent:(id)a0 fromSerializedMetric:(id)a1;
- (void)contributeHouseholdMetricLogEvent:(id)a0 toSerializedMetric:(id)a1;
- (void)contributeHouseholdMetricsLogEvent:(id)a0 toCoreAnalyticsEvent:(id)a1;
- (id)initWithHouseholdGroupName:(id)a0 countersManager:(id)a1 dateProvider:(id)a2;
- (id)householdGroupForHomeWithUUID:(id)a0 associatedWithDate:(id)a1;
- (void)deleteCountersBeforeDate:(id)a0;
- (void)deleteCountersAfterDate:(id)a0;
- (id)householdGroupForLogEvent:(id)a0;

@end
