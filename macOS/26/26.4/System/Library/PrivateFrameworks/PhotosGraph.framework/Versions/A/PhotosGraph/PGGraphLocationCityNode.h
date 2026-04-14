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

- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)label;
- (unsigned long long)featureType;
- (Class)collectionClass;
- (BOOL)supportsNameShortening;

@end
