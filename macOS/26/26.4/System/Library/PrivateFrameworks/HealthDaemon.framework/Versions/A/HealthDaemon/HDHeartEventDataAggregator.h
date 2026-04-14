@interface HDHeartEventDataAggregator : HDPassiveDataAggregator

- (id)dataObjectsFromSensorDatum:(id)a0 error:(id *)a1;
- (Class)sensorDatumClass;
- (id)objectType;
- (id)_categoryType;
- (BOOL)didPersistObjects:(id)a0 lastDatum:(id)a1 collector:(id)a2 error:(id *)a3;

@end
