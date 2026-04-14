@interface KnowledgeGraphKit.KGWrapperMutableDirectedBinaryAdjacency : KnowledgeGraphKit.KGWrapperDirectedBinaryAdjacency

- (id)init;
- (void)setTargets:(id)a0 forSource:(unsigned long long)a1;
- (void)insertSource:(unsigned long long)a0 target:(unsigned long long)a1;
- (void)subtract:(id)a0;
- (void)removeSource:(unsigned long long)a0 target:(unsigned long long)a1;
- (void)formUnionWith:(id)a0;
- (void)removeTargetsForSource:(unsigned long long)a0;

@end
