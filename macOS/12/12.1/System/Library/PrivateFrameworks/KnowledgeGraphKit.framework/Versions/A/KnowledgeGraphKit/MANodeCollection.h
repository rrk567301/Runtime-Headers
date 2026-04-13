@interface MANodeCollection : MAElementCollection

+ (id)nodesMatchingFilter:(id)a0 inGraph:(id)a1;
+ (id)nodesRelatedToNodes:(id)a0 withRelation:(id)a1;
+ (id)targetNodesOfEdges:(id)a0;
+ (id)sourceNodesOfEdges:(id)a0;
+ (id)nodesOfEdges:(id)a0;

- (id)debugDescription;
- (id)initWithNode:(id)a0;
- (BOOL)containsNode:(id)a0;
- (void)enumerateNodesUsingBlock:(id /* block */)a0;
- (id)anyNode;
- (void)enumerateStringPropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateUnsignedIntegerPropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (id)randomNode;
- (void)enumerateDoublePropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateIntegerPropertyValuesForKey:(id)a0 withBlock:(id /* block */)a1;
- (void)_enumerateUsingBlock:(id /* block */)a0;

@end
