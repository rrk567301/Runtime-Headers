@interface PGCLIPTrendsMemoryGenerator : PGTrendsMemoryGenerator {
    unsigned long long _minimumSceneAnalysisVersion;
}

+ (id)_CLIPTrends;
+ (id)CLIPTrendsConfigurations;

- (id)initWithMemoryGenerationContext:(id)a0 configurations:(id)a1;
- (unsigned long long)minimumSceneAnalysisVersion;
- (void)setMinimumSceneAnalysisVersion:(unsigned long long)a0;

@end
