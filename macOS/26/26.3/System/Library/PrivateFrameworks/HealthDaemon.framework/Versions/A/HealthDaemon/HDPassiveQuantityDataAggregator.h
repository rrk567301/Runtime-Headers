@class HKQuantityType;

@interface HDPassiveQuantityDataAggregator : HDPassiveDataAggregator

@property (readonly, copy, nonatomic) HKQuantityType *quantityType;

- (Class)sensorDatumClass;
- (id)initForQuantityType:(id)a0 dataCollectionManager:(id)a1;
- (id)objectType;
- (void).cxx_destruct;
- (id)dataObjectsFromSensorDatum:(id)a0 error:(id *)a1;

@end
