@class PGFeaturedTimePeriodMemoryConfiguration, PGMemoryMomentRequirements;

@interface PGSeasonMemoryGenerator : PGOverTimeMemoryGenerator {
    char _requireSceneProcessingMeetsThresholdOverTime;
    char _requireFaceProcessingMeetsThresholdOverTime;
    PGFeaturedTimePeriodMemoryConfiguration *_featuredSeasonConfiguration;
    PGMemoryMomentRequirements *_momentRequirements;
}

+ (void)enumerateMomentNodesBySeasonInYearFromMomentNodes:(id)a0 loggingConnection:(id)a1 usingBlock:(id /* block */)a2;

- (void).cxx_destruct;
- (unsigned long long)durationForCuration;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)featuredSeasonConfiguration;
- (id)initWithMemoryGenerationContext:(id)a0;
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)a0 inGraph:(id)a1;
- (unsigned long long)memoryCategory;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)a0;
- (id)momentRequirements;
- (char)requireFaceProcessingMeetsThresholdOverTime;
- (char)requireSceneProcessingMeetsThresholdOverTime;
- (void)setRequireFaceProcessingMeetsThresholdOverTime:(char)a0;
- (void)setRequireSceneProcessingMeetsThresholdOverTime:(char)a0;
- (id)titleGeneratorForTriggeredMemory:(id)a0 withKeyAsset:(id)a1 curatedAssets:(id)a2 extendedCuratedAssets:(id)a3 titleGenerationContext:(id)a4 inGraph:(id)a5;

@end
