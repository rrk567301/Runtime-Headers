@interface PGBirthdayMeaningAggregationMemoryGenerator : PGMeaningAggregationMemoryGenerator {
    char _requireFaceProcessingMeetsThresholdOverTime;
}

+ (id)requiredFeatureRelation;
+ (id)supportedMeaningLabels;

- (id)initWithMemoryGenerationContext:(id)a0;
- (char)requireFaceProcessingMeetsThresholdOverTime;
- (void)setRequireFaceProcessingMeetsThresholdOverTime:(char)a0;

@end
