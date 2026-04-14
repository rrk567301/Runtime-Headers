@interface HealthDaemon.HDSwimmingDataCollector : NSObject <HDDataCollector, HealthDaemon.HDSwimmingObserver> {
    void /* unknown type, empty encoding */ profile;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ aggregators;
    void /* unknown type, empty encoding */ quantityTypes;
}

- (id)identifierForDataAggregator:(id)a0;
- (id)init;
- (void)beginCollectionForDataAggregator:(id)a0 lastPersistedSensorDatum:(id)a1;
- (id)sourceForDataAggregator:(id)a0;
- (void)dataAggregator:(id)a0 requestsCollectionThroughDate:(id)a1 completion:(id /* block */)a2;
- (Class)sensorDatumClassForAggregator:(id)a0;
- (void)dataAggregator:(id)a0 wantsCollectionWithConfiguration:(id)a1;
- (void).cxx_destruct;
- (void)historicalSwimmingDataDidUpdate:(id)a0 reference:(id)a1;
- (void)onDemandSwimmingDataDidUpdate:(id)a0;

@end
