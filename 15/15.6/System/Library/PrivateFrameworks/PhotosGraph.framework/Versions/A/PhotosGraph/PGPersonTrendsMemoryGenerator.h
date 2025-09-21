@class PGMemoryMomentRequirements;

@interface PGPersonTrendsMemoryGenerator : PGTrendsMemoryGenerator {
    char _requireFaceProcessingMeetsThresholdOverTime;
    char _intersectRelevantAssetsForFeatures;
    PGMemoryMomentRequirements *_momentRequirements;
}

- (void).cxx_destruct;
- (id)childOnlyPersonTrends;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithMemoryGenerationContext:(id)a0 configurations:(id)a1;
- (char)intersectRelevantAssetsForFeatures;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)a0;
- (id)momentRequirements;
- (char)requireFaceProcessingMeetsThresholdOverTime;
- (void)setRequireFaceProcessingMeetsThresholdOverTime:(char)a0;
- (id)trendType;

@end
