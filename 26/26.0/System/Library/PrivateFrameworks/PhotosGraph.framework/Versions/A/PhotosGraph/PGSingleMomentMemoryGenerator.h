@interface PGSingleMomentMemoryGenerator : PGMemoryGenerator

- (id)generatePotentialMemoriesForProcessingWindow:(id)a0 graph:(id)a1 progressBlock:(id /* block */)a2;
- (id)relevantFeederForTriggeredMemory:(id)a0 inGraph:(id)a1 allowGuestAsset:(BOOL)a2 progressReporter:(id)a3;
- (id)titleGeneratorForTriggeredMemory:(id)a0 withKeyAsset:(id)a1 curatedAssets:(id)a2 extendedCuratedAssets:(id)a3 titleGenerationContext:(id)a4 inGraph:(id)a5;

@end
