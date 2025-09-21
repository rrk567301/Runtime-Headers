@interface PGGraphPropertylessEdge : PGGraphOptimizedEdge

- (id)propertyDictionary;
- (BOOL)hasProperties:(id)a0;
- (BOOL)hasProperties;
- (void)checkConsistencyOfProperties:(id)a0 withExtraPropertyKeys:(id)a1;

@end
