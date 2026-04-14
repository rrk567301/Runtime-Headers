@interface HomeKitDaemon.HouseholdFalsePositiveArrivalPredictionExcessiveDurationLogEventFactory : HMFObject <HMDHouseholdDistributedMetricsLogEventFactory> {
    void /* unknown type, empty encoding */ analyzer;
}

- (id)init;
- (void).cxx_destruct;
- (id)coalescedLogEventsFromLogEvents:(id)a0 homeUUID:(id)a1;
- (void)deleteCountersAfterDate:(id)a0;
- (void)deleteCountersBeforeDate:(id)a0;
- (id)logEventsFromDictionary:(id)a0;
- (id)logEventsPopulatedForHomeWithUUID:(id)a0 associatedWithDate:(id)a1;
- (id)serializeLogEvents:(id)a0;

@end
