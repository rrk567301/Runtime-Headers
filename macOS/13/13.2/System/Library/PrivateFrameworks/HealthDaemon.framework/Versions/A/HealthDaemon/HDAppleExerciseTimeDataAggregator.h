@interface HDAppleExerciseTimeDataAggregator : HDPassiveDataAggregator

- (id)objectType;
- (Class)sensorDatumClass;
- (id)dataObjectsFromSensorDatum:(id)a0 error:(id *)a1;

@end
