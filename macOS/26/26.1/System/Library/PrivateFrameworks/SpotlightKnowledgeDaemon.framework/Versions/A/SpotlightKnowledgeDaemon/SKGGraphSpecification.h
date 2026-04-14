@interface SKGGraphSpecification : MAGraphSpecification

- (Class)edgeClassWithLabel:(id)a0 domain:(unsigned short)a1;
- (Class)nodeClassWithLabel:(id)a0 domain:(unsigned short)a1;
- (void)enumerateEdgeClassesUsingBlock:(id /* block */)a0;
- (void)enumerateNodeClassesUsingBlock:(id /* block */)a0;
- (id)init;

@end
