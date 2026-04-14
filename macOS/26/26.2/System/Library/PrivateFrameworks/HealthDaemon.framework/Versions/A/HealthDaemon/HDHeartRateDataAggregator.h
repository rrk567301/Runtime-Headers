@protocol HDDataCollectionForwarder;

@interface HDHeartRateDataAggregator : HDDataAggregator {
    id<HDDataCollectionForwarder> _dataForwarder;
}

- (id)objectType;
- (void)dataCollector:(id)a0 didCollectSensorData:(id)a1 device:(id)a2 options:(unsigned long long)a3;
- (id)initWithDataCollectionManager:(id)a0;
- (void).cxx_destruct;
- (void)workoutManagerStateChanged:(id)a0;
- (id)configurationForCollector:(id)a0;
- (void)setConfiguration:(id)a0;
- (void)dealloc;

@end
