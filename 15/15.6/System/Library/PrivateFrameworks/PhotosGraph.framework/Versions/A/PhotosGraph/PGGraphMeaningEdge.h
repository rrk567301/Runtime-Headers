@class MAEdgeFilter, NSString;

@interface PGGraphMeaningEdge : PGGraphOptimizedEdge

@property (class, readonly) MAEdgeFilter *reliableFilter;
@property (class, readonly) MAEdgeFilter *highPrecisionFilter;

@property (readonly) double confidence;
@property (readonly) char isReliable;
@property (readonly) unsigned char isHighPrecision : 2;
@property (readonly) NSString *meaningLabel;

+ (unsigned short)domain;
+ (id)filter;
+ (id)label;
+ (id)propertyDictionaryWithConfidence:(double)a0 isHighPrecision:(char)a1;

- (unsigned short)domain;
- (id)label;
- (char)hasProperties:(id)a0;
- (id)edgeDescription;
- (id)initFromMomentNode:(id)a0 toMeaningNode:(id)a1 confidence:(double)a2 isHighPrecision:(char)a3;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)propertyDictionary;

@end
