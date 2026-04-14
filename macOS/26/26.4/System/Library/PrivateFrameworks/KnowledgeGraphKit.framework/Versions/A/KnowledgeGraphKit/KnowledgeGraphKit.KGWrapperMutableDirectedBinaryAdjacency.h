@interface KnowledgeGraphKit.KGWrapperMutableDirectedBinaryAdjacency : KnowledgeGraphKit.KGWrapperDirectedBinaryAdjacency

- (void)formUnionWith:(id)a0;
- (void)subtract:(id)a0;
- (void)insertSource:(unsigned long long)a0 target:(unsigned long long)a1;
- (void)setTargets:(id)a0 forSource:(unsigned long long)a1;
- (void)removeSource:(unsigned long long)a0 target:(unsigned long long)a1;
- (id)init;
- (void)removeTargetsForSource:(unsigned long long)a0;

@end
