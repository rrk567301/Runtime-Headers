@class MAEdgeFilter;

@interface PGGraphPartOfDayEdge : PGGraphOptimizedEdge

@property (class, readonly, nonatomic) MAEdgeFilter *significantFilter;

@property (readonly) double ratio;

+ (id)filter;
+ (id)significantFilterWithLegacyWeights:(char)a0;

- (unsigned short)domain;
- (id)label;
- (char)hasProperties:(id)a0;
- (id)edgeDescription;
- (id)initFromMomentNode:(id)a0 toPartOfDayNode:(id)a1 ratio:(double)a2;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)propertyDictionary;

@end
