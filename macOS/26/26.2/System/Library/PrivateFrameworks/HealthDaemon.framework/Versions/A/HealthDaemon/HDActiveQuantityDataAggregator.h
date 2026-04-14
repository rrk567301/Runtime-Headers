@class HKQuantityType;
@protocol HDDataCollectionForwarder;

@interface HDActiveQuantityDataAggregator : HDActiveDataAggregator {
    id<HDDataCollectionForwarder> _dataForwarder;
}

@property (readonly, copy, nonatomic) HKQuantityType *quantityType;

- (id)objectType;
- (Class)sensorDatumClass;
- (void).cxx_destruct;
- (id)description;
- (id)initForQuantityType:(id)a0 dataCollectionManager:(id)a1;
- (id)additionalMetadataForCollector:(id)a0;
- (id)aggregateForState:(id)a0 collector:(id)a1 device:(id)a2 requestedAggregationDate:(id)a3 mode:(long long)a4 options:(unsigned long long)a5 error:(id *)a6;

@end
