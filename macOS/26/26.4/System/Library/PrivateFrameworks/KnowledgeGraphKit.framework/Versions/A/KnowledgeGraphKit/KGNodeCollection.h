@interface KGNodeCollection : KGElementCollection

- (void)enumerateElementsWithBatchSize:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateIdentifiersSortedByIntegerPropertyForName:(id)a0 ascending:(BOOL)a1 usingBlock:(id /* block */)a2;
- (id)allObjects;
- (void)enumerateIdentifiersSortedByStringPropertyForName:(id)a0 ascending:(BOOL)a1 usingBlock:(id /* block */)a2;
- (void)enumeratePropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateIdentifiersSortedByUnsignedIntegerPropertyForName:(id)a0 ascending:(BOOL)a1 usingBlock:(id /* block */)a2;
- (void)enumerateOrderedNodes:(id)a0 withBatchSize:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)enumerateNodesSortedByFloatPropertyForName:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateNodesSortedByStringPropertyForName:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateNodesSortedByIntegerPropertyForName:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateIdentifiersSortedByDoublePropertyForName:(id)a0 ascending:(BOOL)a1 usingBlock:(id /* block */)a2;
- (void)enumerateNodesUsingBlock:(id /* block */)a0;

@end
