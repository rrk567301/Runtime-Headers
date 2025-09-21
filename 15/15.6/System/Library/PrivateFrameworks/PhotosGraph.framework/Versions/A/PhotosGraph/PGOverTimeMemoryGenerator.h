@class PGGraphMomentNodeCollection, NSMutableDictionary, PGOverTheYearsMemoryConfiguration, PGMemoryMomentRequirements, PGFeaturedTimePeriodMemoryConfiguration;

@interface PGOverTimeMemoryGenerator : PGMemoryGenerator {
    PGGraphMomentNodeCollection *_interestingForMemoriesMomentNodes;
    NSMutableDictionary *_yearByYearNodeIdentifier;
}

@property (readonly, nonatomic) unsigned long long memoryCategory;
@property (readonly, nonatomic) char intersectRelevantAssetsForFeatures;
@property (nonatomic) char requireSceneProcessingMeetsThresholdOverTime;
@property (nonatomic) char requireFaceProcessingMeetsThresholdOverTime;
@property (nonatomic) unsigned long long minimumSceneAnalysisVersion;
@property (nonatomic) unsigned long long minimumNumberOfDefaultMemories;
@property (readonly, nonatomic) PGMemoryMomentRequirements *momentRequirements;
@property (readonly, nonatomic) PGOverTheYearsMemoryConfiguration *overTheYearsConfiguration;
@property (readonly, nonatomic) PGOverTheYearsMemoryConfiguration *fallbackOverTheYearsConfiguration;
@property (readonly, nonatomic) PGFeaturedTimePeriodMemoryConfiguration *featuredYearConfiguration;
@property (readonly, nonatomic) PGFeaturedTimePeriodMemoryConfiguration *fallbackFeaturedYearConfiguration;
@property (readonly, nonatomic) PGFeaturedTimePeriodMemoryConfiguration *featuredSeasonConfiguration;

- (void).cxx_destruct;
- (id)_filteredMomentNodesFromMomentNodes:(id)a0 featureNodes:(id)a1;
- (char)_shouldCreateFeaturedSeasonMemoryForMomentNodes:(id)a0 featureNodes:(id)a1;
- (char)_shouldCreateFeaturedTimePeriodMemoriesForMomentNodes:(id)a0 configuration:(id)a1;
- (char)_shouldCreateFeaturedYearMemoryForMomentNodes:(id)a0 featureNodes:(id)a1 inYear:(long long)a2 configuration:(id)a3;
- (char)_shouldCreateMemoryForMomentNodes:(id)a0 featureNodes:(id)a1 withConfiguration:(id)a2;
- (char)_shouldCreateOverTheYearsMemoryForMomentNodes:(id)a0 featureNodes:(id)a1 configuration:(id)a2;
- (id)allFeatureNodesForMemoryNodeWithFeatureNodes:(id)a0;
- (id)chapterTitleGeneratorForTriggeredMemory:(id)a0 curatedAssets:(id)a1 extendedCuratedAssets:(id)a2 titleGenerationContext:(id)a3 inGraph:(id)a4;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)generateAllPotentialMemoriesWithGraph:(id)a0 progressBlock:(id /* block */)a1;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)a0;
- (unsigned long long)numberOfRelevantAssetsForMomentNodes:(id)a0 featureNodes:(id)a1;

@end
