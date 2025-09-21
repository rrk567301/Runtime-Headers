@protocol HDDataCollectionForwarder;

@interface HDHeartRateDataAggregator : HDDataAggregator {
    id<HDDataCollectionForwarder> _dataForwarder;
}

- (void)dealloc;
- (void)setConfiguration:(id)a0;
- (void)workoutManagerStateChanged:(id)a0;
- (id)initWithDataCollectionManager:(id)a0;
- (id)objectType;
- (id)configurationForCollector:(id)a0;
- (void)dataCollector:(id)a0 didCollectSensorData:(id)a1 device:(id)a2 options:(unsigned long long)a3;
- (void).cxx_destruct;

@end
