@interface HMDHouseholdMetricsRequestContributor : HMDHouseholdDataLogEventContributor

+ (id)contributorWithoutCounters;

- (void)populateHouseholdMetricLogEvent:(id)a0 forHomeWithUUID:(id)a1 associatedToDate:(id)a2;
- (void)coalesceHouseholdDataLogEvent:(id)a0 fromSourceEvent:(id)a1;
- (void)deserializeHouseholdMetricsLogEvent:(id)a0 fromSerializedMetric:(id)a1;
- (void)contributeHouseholdMetricLogEvent:(id)a0 toSerializedMetric:(id)a1;
- (void)contributeHouseholdMetricsLogEvent:(id)a0 toCoreAnalyticsEvent:(id)a1;
- (id)initWithCountersManager:(id)a0 dateProvider:(id)a1;
- (void)incrementRequestCountForHomeUUID:(id)a0 date:(id)a1;

@end
