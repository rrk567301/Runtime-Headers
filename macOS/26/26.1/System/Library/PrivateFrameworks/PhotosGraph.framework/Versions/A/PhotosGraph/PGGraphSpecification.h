@interface PGGraphSpecification : MAGraphSpecification

- (id)edgeClassByDomain;
- (id)edgeClassByDomainAndLabel;
- (Class)edgeClassWithLabel:(id)a0 domain:(unsigned short)a1;
- (Class)nodeClassWithLabel:(id)a0 domain:(unsigned short)a1;
- (id)nodeClassByDomain;
- (void)enumerateEdgeClassesUsingBlock:(id /* block */)a0;
- (id)nodeClassByDomainAndLabel;
- (void)enumerateNodeClassesUsingBlock:(id /* block */)a0;
- (id)init;

@end
