@class PGGraphLocationSubcontinentNodeCollection, MARelation;

@interface PGGraphLocationSubcontinentNode : PGGraphNamedLocationNode

@property (class, readonly) MARelation *momentInSubcontinent;

@property (readonly, nonatomic) PGGraphLocationSubcontinentNodeCollection *collection;

+ (id)filter;
+ (id)addressOfSubcontinent;
+ (id)countryOfSubcontinent;

- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)label;
- (unsigned long long)featureType;
- (Class)collectionClass;

@end
