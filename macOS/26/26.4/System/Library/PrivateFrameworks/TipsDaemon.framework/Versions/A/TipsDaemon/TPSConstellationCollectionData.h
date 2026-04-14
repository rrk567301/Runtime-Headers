@class NSArray, NSDictionary;

@interface TPSConstellationCollectionData : NSObject {
    void /* function */ availableCollectionSections;
    void /* function */ collectionDeliveryInfoMap;
    void /* function */ collectionIdToCollectionLabelMap;
    void /* function */ collectionMap;
    void /* function */ collections;
    void /* function */ collectionSections;
}

@property (nonatomic, copy) NSArray *availableCollectionSections;
@property (nonatomic, copy) NSDictionary *collectionDeliveryInfoMap;
@property (nonatomic, copy) NSDictionary *collectionIdToCollectionLabelMap;
@property (nonatomic, copy) NSDictionary *collectionMap;
@property (nonatomic, copy) NSArray *collections;
@property (nonatomic, copy) NSArray *collectionSections;

- (void).cxx_destruct;
- (id)init;

@end
