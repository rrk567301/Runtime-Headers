@interface SKGGraphSpecification : MAGraphSpecification

- (void)enumerateNodeClassesUsingBlock:(id /* block */)a0;
- (void)enumerateEdgeClassesUsingBlock:(id /* block */)a0;
- (Class)nodeClassWithLabel:(id)a0 domain:(unsigned short)a1;
- (id)init;
- (Class)edgeClassWithLabel:(id)a0 domain:(unsigned short)a1;

@end
