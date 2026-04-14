@interface PGGraphPartOfWeekEdge : PGGraphPropertylessEdge

+ (id)filter;

- (unsigned short)domain;
- (id)label;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;
- (id)initFromMomentNode:(id)a0 toPartOfWeekNode:(id)a1;

@end
