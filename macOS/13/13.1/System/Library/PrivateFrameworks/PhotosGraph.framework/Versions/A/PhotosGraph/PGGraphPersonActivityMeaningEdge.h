@interface PGGraphPersonActivityMeaningEdge : PGGraphPropertylessEdge

+ (id)filter;

- (unsigned short)domain;
- (id)label;
- (id)edgeDescription;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;
- (id)meaningLabel;
- (id)initFromMomentNode:(id)a0 toPersonActivityMeaningNode:(id)a1;

@end
