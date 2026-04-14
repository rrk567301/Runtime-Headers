@class HKQuantityType;

@interface HDPassiveQuantityDataAggregator : HDPassiveDataAggregator

@property (readonly, copy, nonatomic) HKQuantityType *quantityType;

- (id)dataObjectsFromSensorDatum:(id)a0 error:(id *)a1;
- (Class)sensorDatumClass;
- (id)initForQuantityType:(id)a0 dataCollectionManager:(id)a1;
- (void).cxx_destruct;
- (id)objectType;

@end
