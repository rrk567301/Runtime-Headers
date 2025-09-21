@class PGGraphLocationSubcontinentNodeCollection, MARelation;

@interface PGGraphLocationSubcontinentNode : PGGraphNamedLocationNode

@property (class, readonly) MARelation *momentInSubcontinent;

@property (readonly, nonatomic) PGGraphLocationSubcontinentNodeCollection *collection;

+ (id)filter;
+ (id)addressOfSubcontinent;
+ (id)countryOfSubcontinent;

- (unsigned long long)featureType;
- (id)label;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (Class)collectionClass;

@end
