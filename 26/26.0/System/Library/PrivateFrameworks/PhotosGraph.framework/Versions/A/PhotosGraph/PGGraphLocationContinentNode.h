@class PGGraphLocationContinentNodeCollection, MARelation;

@interface PGGraphLocationContinentNode : PGGraphNamedLocationNode

@property (class, readonly) MARelation *momentInContinent;

@property (readonly, nonatomic) PGGraphLocationContinentNodeCollection *collection;

+ (id)filter;
+ (id)addressOfContinent;
+ (id)subcontinentOfContinent;

- (unsigned long long)featureType;
- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (Class)collectionClass;

@end
