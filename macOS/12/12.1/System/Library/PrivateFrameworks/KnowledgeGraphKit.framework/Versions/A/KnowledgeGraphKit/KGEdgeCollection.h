@interface KGEdgeCollection : KGElementCollection

- (id)allObjects;
- (void)enumerateEdgesUsingBlock:(id /* block */)a0;
- (void)enumerateStringPropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateUnsignedIntegerPropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateDoublePropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateIntegerPropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateElementsWithBatchSize:(unsigned long long)a0 usingBlock:(id /* block */)a1;

@end
