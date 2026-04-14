@interface PGGraphMemoryContainsAssetsFromEdge : PGGraphPropertylessEdge

+ (id)filter;

- (unsigned short)domain;
- (id)label;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;
- (id)initFromMemoryNode:(id)a0 toMomentSourceNode:(id)a1;

@end
