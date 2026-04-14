@interface PGGraphSpecification : MAGraphSpecification

- (id)nodeClassByDomainAndLabel;
- (id)edgeClassByDomain;
- (id)edgeClassByDomainAndLabel;
- (void)enumerateNodeClassesUsingBlock:(id /* block */)a0;
- (void)enumerateEdgeClassesUsingBlock:(id /* block */)a0;
- (Class)nodeClassWithLabel:(id)a0 domain:(unsigned short)a1;
- (id)init;
- (id)nodeClassByDomain;
- (Class)edgeClassWithLabel:(id)a0 domain:(unsigned short)a1;

@end
