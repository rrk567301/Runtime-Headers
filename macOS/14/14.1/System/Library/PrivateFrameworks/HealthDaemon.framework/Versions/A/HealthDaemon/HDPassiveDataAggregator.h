@interface HDPassiveDataAggregator : HDDataAggregator

- (void)dataCollector:(id)a0 didCollectSensorData:(id)a1 device:(id)a2;
- (id)dataObjectsFromSensorDatum:(id)a0 error:(id *)a1;
- (Class)sensorDatumClass;

@end
