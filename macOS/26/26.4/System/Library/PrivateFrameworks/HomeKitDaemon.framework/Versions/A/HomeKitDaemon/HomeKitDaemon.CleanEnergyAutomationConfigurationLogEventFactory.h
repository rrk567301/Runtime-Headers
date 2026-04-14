@interface HomeKitDaemon.CleanEnergyAutomationConfigurationLogEventFactory : HMFObject <HMDHouseholdDistributedMetricsLogEventFactory, HMMLogEventObserver> {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ countersManager;
    void /* unknown type, empty encoding */ logEventDispatcher;
}

- (void).cxx_destruct;
- (id)init;
- (void)observeEvent:(id)a0;
- (id)coalescedLogEventsFromLogEvents:(id)a0 homeUUID:(id)a1;
- (void)deleteCountersAfterDate:(id)a0;
- (void)deleteCountersBeforeDate:(id)a0;
- (id)logEventsFromDictionary:(id)a0;
- (id)logEventsPopulatedForHomeWithUUID:(id)a0 associatedWithDate:(id)a1;
- (id)serializeLogEvents:(id)a0;

@end
