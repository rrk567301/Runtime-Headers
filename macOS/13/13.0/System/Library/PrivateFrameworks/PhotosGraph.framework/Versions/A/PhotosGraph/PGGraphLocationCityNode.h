@class PGGraphLocationCityNodeCollection, MARelation;

@interface PGGraphLocationCityNode : PGGraphNamedLocationNode

@property (class, readonly) MARelation *momentInCity;
@property (class, readonly) MARelation *addressOfCity;

@property (readonly, nonatomic) PGGraphLocationCityNodeCollection *collection;

+ (id)filter;
+ (id)countryOfCity;
+ (id)stateOfCity;
+ (id)countyOfCity;

- (id)label;
- (unsigned long long)featureType;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (Class)collectionClass;

@end
