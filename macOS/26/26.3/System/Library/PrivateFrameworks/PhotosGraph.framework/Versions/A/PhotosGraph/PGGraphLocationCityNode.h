@class PGGraphLocationCityNodeCollection, MARelation;

@interface PGGraphLocationCityNode : PGGraphNamedLocationNode

@property (class, readonly) MARelation *momentInCity;
@property (class, readonly) MARelation *addressOfCity;
@property (class, readonly) MARelation *districtOfCity;
@property (class, readonly) MARelation *countyOfCity;
@property (class, readonly) MARelation *stateOfCity;
@property (class, readonly) MARelation *countryOfCity;

@property (readonly, nonatomic) PGGraphLocationCityNodeCollection *collection;

+ (id)filter;

- (unsigned long long)featureType;
- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (Class)collectionClass;
- (BOOL)supportsNameShortening;

@end
