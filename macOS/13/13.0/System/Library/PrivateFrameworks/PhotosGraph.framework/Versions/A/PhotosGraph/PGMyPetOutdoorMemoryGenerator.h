@class PGFeaturedTimePeriodMemoryConfiguration;

@interface PGMyPetOutdoorMemoryGenerator : PGMyPetMemoryGenerator {
    PGFeaturedTimePeriodMemoryConfiguration *_featuredSeasonConfiguration;
}

- (void).cxx_destruct;
- (unsigned long long)memoryCategory;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)a0;
- (id)titleGeneratorForTriggeredMemory:(id)a0 withKeyAsset:(id)a1 curatedAssets:(id)a2 extendedCuratedAssets:(id)a3 titleGenerationContext:(id)a4 inGraph:(id)a5;
- (id)initWithMemoryGenerationContext:(id)a0;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)featuredSeasonConfiguration;

@end
