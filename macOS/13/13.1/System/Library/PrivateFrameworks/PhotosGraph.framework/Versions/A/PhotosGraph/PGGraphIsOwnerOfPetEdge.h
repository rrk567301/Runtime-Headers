@interface PGGraphIsOwnerOfPetEdge : PGGraphPropertylessEdge

+ (id)filter;

- (unsigned short)domain;
- (id)label;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;
- (id)initFromPersonNode:(id)a0 toPetNode:(id)a1;

@end
