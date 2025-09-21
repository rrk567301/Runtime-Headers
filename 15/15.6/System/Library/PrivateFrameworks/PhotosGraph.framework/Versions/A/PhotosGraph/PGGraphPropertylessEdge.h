@interface PGGraphPropertylessEdge : PGGraphOptimizedEdge

- (char)hasProperties;
- (char)hasProperties:(id)a0;
- (void)checkConsistencyOfProperties:(id)a0 withExtraPropertyKeys:(id)a1;
- (id)propertyDictionary;

@end
