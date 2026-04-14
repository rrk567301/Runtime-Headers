@class PGGraphLocationDistrictNodeCollection;

@interface PGGraphLocationDistrictNode : PGGraphNamedLocationNode

@property (readonly, nonatomic) PGGraphLocationDistrictNodeCollection *collection;

+ (id)filter;

- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)label;
- (unsigned long long)featureType;

@end
