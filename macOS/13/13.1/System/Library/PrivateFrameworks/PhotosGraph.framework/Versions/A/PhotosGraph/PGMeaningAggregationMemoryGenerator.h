@class PGMemoryMomentRequirements, PGOverTheYearsMemoryConfiguration, PGFeaturedTimePeriodMemoryConfiguration;

@interface PGMeaningAggregationMemoryGenerator : PGOverTimeMemoryGenerator {
    BOOL _requireSceneProcessingMeetsThresholdOverTime;
    BOOL _requireFaceProcessingMeetsThresholdOverTime;
}

@property (retain, nonatomic) PGMemoryMomentRequirements *momentRequirements;
@property (retain, nonatomic) PGOverTheYearsMemoryConfiguration *overTheYearsConfiguration;
@property (retain, nonatomic) PGFeaturedTimePeriodMemoryConfiguration *featuredYearConfiguration;

+ (id)supportedMeaningLabels;
+ (id)requiredFeatureRelation;
+ (id)allMeaningAggregationMemoryGeneratorClasses;
+ (id)featureRelationWithMeaningLabel:(id)a0;
+ (unsigned long long)_extendedMeaningForMeaning:(unsigned long long)a0 meaningfulEvent:(id)a1;
+ (unsigned long long)_extendedMeaningForRestaurantEvent:(id)a0;
+ (unsigned long long)_extendedMeaningForRestaurantMeaningLabel:(id)a0;
+ (unsigned long long)_extendedMeaningForActivityEvent:(id)a0;
+ (unsigned long long)_extendedMeaningForActivityMeaningLabel:(id)a0;
+ (id)mostSpecificLabelForMeaning:(unsigned long long)a0;

- (void).cxx_destruct;
- (unsigned long long)memoryCategory;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)a0;
- (id)keyAssetCurationOptionsWithTriggeredMemory:(id)a0 inGraph:(id)a1;
- (id)curationOptionsWithRequiredAssetUUIDs:(id)a0 eligibleAssetUUIDs:(id)a1 triggeredMemory:(id)a2;
- (id)relevantFeederForTriggeredMemory:(id)a0 inGraph:(id)a1 allowGuestAsset:(BOOL)a2 progressReporter:(id)a3;
- (id)titleGeneratorForTriggeredMemory:(id)a0 withKeyAsset:(id)a1 curatedAssets:(id)a2 extendedCuratedAssets:(id)a3 titleGenerationContext:(id)a4 inGraph:(id)a5;
- (id)initWithMemoryGenerationContext:(id)a0;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (unsigned long long)durationForCuration;
- (BOOL)requireSceneProcessingMeetsThresholdOverTime;
- (void)setRequireSceneProcessingMeetsThresholdOverTime:(BOOL)a0;
- (BOOL)requireFaceProcessingMeetsThresholdOverTime;
- (void)setRequireFaceProcessingMeetsThresholdOverTime:(BOOL)a0;

@end
