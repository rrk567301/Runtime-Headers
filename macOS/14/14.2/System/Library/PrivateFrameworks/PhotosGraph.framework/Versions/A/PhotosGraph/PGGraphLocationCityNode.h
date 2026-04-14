@class PGGraphLocationCityNodeCollection, MARelation;

@interface PGGraphLocationCityNode : PGGraphNamedLocationNode

@property (class, readonly) MARelation *momentInCity;
@property (class, readonly) MARelation *addressOfCity;

@property (readonly, nonatomic) PGGraphLocationCityNodeCollection *collection;

+ (id)filter;
+ (id)countryOfCity;
+ (id)countyOfCity;
+ (id)stateOfCity;

- (id)label;
- (unsigned long long)featureType;
- (Class)collectionClass;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (BOOL)supportsNameShortening;

@end
