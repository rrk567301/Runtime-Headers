@interface HDAppleExerciseTimeDataAggregator : HDPassiveDataAggregator

- (Class)sensorDatumClass;
- (id)dataObjectsFromSensorDatum:(id)a0 error:(id *)a1;
- (id)objectType;

@end
