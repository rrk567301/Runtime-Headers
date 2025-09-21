@interface PGPersonFoodieMemoryGenerator : PGFoodieMemoryGenerator {
    char _requireFaceProcessingMeetsThresholdOverTime;
}

- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithMemoryGenerationContext:(id)a0;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)a0;
- (char)requireFaceProcessingMeetsThresholdOverTime;
- (void)setRequireFaceProcessingMeetsThresholdOverTime:(char)a0;

@end
