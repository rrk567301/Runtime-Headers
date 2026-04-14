@interface PGGraphSpecification : MAGraphSpecification

- (id)nodeClassByDomain;
- (id)nodeClassByDomainAndLabel;
- (id)init;
- (void)enumerateNodeClassesUsingBlock:(id /* block */)a0;
- (id)edgeClassByDomain;
- (id)edgeClassByDomainAndLabel;
- (Class)nodeClassWithLabel:(id)a0 domain:(unsigned short)a1;
- (void)enumerateEdgeClassesUsingBlock:(id /* block */)a0;
- (Class)edgeClassWithLabel:(id)a0 domain:(unsigned short)a1;

@end
