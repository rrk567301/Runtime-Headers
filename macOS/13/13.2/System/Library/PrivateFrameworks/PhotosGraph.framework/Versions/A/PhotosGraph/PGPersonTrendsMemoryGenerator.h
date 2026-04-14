@class PGMemoryMomentRequirements;

@interface PGPersonTrendsMemoryGenerator : PGTrendsMemoryGenerator {
    BOOL _requireFaceProcessingMeetsThresholdOverTime;
    BOOL _intersectRelevantAssetsForFeatures;
    PGMemoryMomentRequirements *_momentRequirements;
}

- (void).cxx_destruct;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)a0;
- (id)initWithMemoryGenerationContext:(id)a0 configurations:(id)a1;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)requireFaceProcessingMeetsThresholdOverTime;
- (void)setRequireFaceProcessingMeetsThresholdOverTime:(BOOL)a0;
- (id)momentRequirements;
- (id)trendType;
- (id)childOnlyPersonTrends;
- (BOOL)intersectRelevantAssetsForFeatures;

@end
