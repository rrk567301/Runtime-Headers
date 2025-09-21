@class NSDate;

@interface PGPastSupersetMemoryGenerator : PGFeaturedMemoryGenerator

@property (retain, nonatomic) NSDate *localDate;

- (void).cxx_destruct;
- (void)_enumeratePotentialMemoriesForProcessingWindow:(id)a0 graph:(id)a1 progressBlock:(id /* block */)a2 usingBlock:(id /* block */)a3;
- (id)chapterTitleGeneratorForTriggeredMemory:(id)a0 curatedAssets:(id)a1 extendedCuratedAssets:(id)a2 titleGenerationContext:(id)a3 inGraph:(id)a4;
- (id)curationOptionsWithRequiredAssetUUIDs:(id)a0 eligibleAssetUUIDs:(id)a1 triggeredMemory:(id)a2;
- (void)generateMoodForEnrichedMemory:(id)a0 extendedCuratedAssets:(id)a1 configuration:(id)a2 inGraph:(id)a3;
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)a0 inGraph:(id)a1;
- (id)relevantCurationFeederForTriggeredMemory:(id)a0 relevantFeeder:(id)a1 inGraph:(id)a2 allowGuestAsset:(BOOL)a3 progressReporter:(id)a4;
- (id)relevantFeederForTriggeredMemory:(id)a0 inGraph:(id)a1 allowGuestAsset:(BOOL)a2 progressReporter:(id)a3;
- (id)titleGeneratorForTriggeredMemory:(id)a0 withKeyAsset:(id)a1 curatedAssets:(id)a2 extendedCuratedAssets:(id)a3 titleGenerationContext:(id)a4 inGraph:(id)a5;

@end
