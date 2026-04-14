@interface HDHeartRateDataAggregator : HDDataAggregator

- (id)initWithDataCollectionManager:(id)a0;
- (id)configurationForCollector:(id)a0;
- (void)setConfiguration:(id)a0;
- (void)workoutManagerStateChanged:(id)a0;
- (void)dataCollector:(id)a0 didCollectSensorData:(id)a1 device:(id)a2 options:(unsigned long long)a3;
- (void)dealloc;
- (id)objectType;

@end
