@interface PGGraphSpecification : MAGraphSpecification

- (id)init;
- (id)nodeClassByDomainAndLabel;
- (id)nodeClassByDomain;
- (id)edgeClassByDomainAndLabel;
- (id)edgeClassByDomain;
- (Class)nodeClassWithLabel:(id)a0 domain:(unsigned short)a1;
- (void)enumerateNodeClassesUsingBlock:(id /* block */)a0;
- (Class)edgeClassWithLabel:(id)a0 domain:(unsigned short)a1;
- (void)enumerateEdgeClassesUsingBlock:(id /* block */)a0;

@end
