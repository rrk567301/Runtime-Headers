@class PGMemoryMomentRequirements, PGFeaturedTimePeriodMemoryConfiguration;

@interface PGMyPetAndPersonMemoryGenerator : PGMyPetMemoryGenerator {
    char _intersectRelevantAssetsForFeatures;
    PGMemoryMomentRequirements *_momentRequirements;
    PGFeaturedTimePeriodMemoryConfiguration *_featuredSeasonConfiguration;
    PGFeaturedTimePeriodMemoryConfiguration *_featuredYearConfiguration;
}

- (void).cxx_destruct;
- (void)enumerateMomentNodesAndFeatureNodesInGraph:(id)a0 usingBlock:(id /* block */)a1;
- (id)featuredSeasonConfiguration;
- (id)featuredYearConfiguration;
- (id)initWithMemoryGenerationContext:(id)a0;
- (char)intersectRelevantAssetsForFeatures;
- (unsigned long long)memoryCategorySubcategoryForOverTimeType:(unsigned long long)a0;
- (id)momentRequirements;

@end
