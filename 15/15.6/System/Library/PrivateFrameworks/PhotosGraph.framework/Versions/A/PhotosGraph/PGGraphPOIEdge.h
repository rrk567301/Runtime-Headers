@class MAEdgeFilter;

@interface PGGraphPOIEdge : PGGraphOptimizedEdge

@property (class, readonly) MAEdgeFilter *filterImproved;
@property (class, readonly) MAEdgeFilter *filterSpecial;

@property (readonly) double confidence;
@property (readonly, nonatomic) unsigned char poiIsImproved : 2;
@property (readonly, nonatomic) unsigned char poiIsSpecial : 2;

+ (id)filter;
+ (id)filterAboveConfidence:(double)a0;
+ (id)filterAboveConfidence:(double)a0 hasLegacyWeights:(char)a1;
+ (void)setConfidence:(double)a0 onEdgeForIdentifier:(unsigned long long)a1 inGraph:(id)a2;
+ (void)setPOIIsImproved:(char)a0 onEdgeForIdentifier:(unsigned long long)a1 inGraph:(id)a2;

- (unsigned short)domain;
- (id)label;
- (char)hasProperties:(id)a0;
- (id)edgeDescription;
- (id)initFromMomentNode:(id)a0 toPOINode:(id)a1 confidence:(double)a2 poiIsImproved:(char)a3 poiIsSpecial:(char)a4;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)propertyDictionary;

@end
