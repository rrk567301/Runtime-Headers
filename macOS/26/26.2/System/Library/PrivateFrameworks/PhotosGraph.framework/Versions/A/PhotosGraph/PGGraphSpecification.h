@interface PGGraphSpecification : MAGraphSpecification

- (Class)nodeClassWithLabel:(id)a0 domain:(unsigned short)a1;
- (void)enumerateEdgeClassesUsingBlock:(id /* block */)a0;
- (id)edgeClassByDomainAndLabel;
- (id)nodeClassByDomainAndLabel;
- (id)nodeClassByDomain;
- (id)edgeClassByDomain;
- (Class)edgeClassWithLabel:(id)a0 domain:(unsigned short)a1;
- (id)init;
- (void)enumerateNodeClassesUsingBlock:(id /* block */)a0;

@end
