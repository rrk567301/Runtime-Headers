@interface PGGraphPropertylessNode : PGGraphOptimizedNode

- (BOOL)hasProperties;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (void)checkConsistencyOfProperties:(id)a0 withExtraPropertyKeys:(id)a1;

@end
