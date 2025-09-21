@class HKQuantityType;
@protocol HDDataCollectionForwarder;

@interface HDActiveQuantityDataAggregator : HDActiveDataAggregator {
    id<HDDataCollectionForwarder> _dataForwarder;
}

@property (readonly, copy, nonatomic) HKQuantityType *quantityType;

- (Class)sensorDatumClass;
- (id)additionalMetadataForCollector:(id)a0;
- (id)initForQuantityType:(id)a0 dataCollectionManager:(id)a1;
- (id)description;
- (id)objectType;
- (id)aggregateForState:(id)a0 collector:(id)a1 device:(id)a2 requestedAggregationDate:(id)a3 mode:(long long)a4 options:(unsigned long long)a5 error:(id *)a6;
- (void).cxx_destruct;

@end
