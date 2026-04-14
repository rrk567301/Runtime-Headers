@interface PGGraphSpecification : MAGraphSpecification

- (id)edgeClassByDomainAndLabel;
- (id)init;
- (Class)nodeClassWithLabel:(id)a0 domain:(unsigned short)a1;
- (id)nodeClassByDomainAndLabel;
- (void)enumerateNodeClassesUsingBlock:(id /* block */)a0;
- (Class)edgeClassWithLabel:(id)a0 domain:(unsigned short)a1;
- (void)enumerateEdgeClassesUsingBlock:(id /* block */)a0;
- (id)nodeClassByDomain;
- (id)edgeClassByDomain;

@end
