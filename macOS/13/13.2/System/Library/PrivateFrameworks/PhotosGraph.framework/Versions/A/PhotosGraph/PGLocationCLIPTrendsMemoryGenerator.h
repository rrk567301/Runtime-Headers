@interface PGLocationCLIPTrendsMemoryGenerator : PGLocationTrendsMemoryGenerator {
    unsigned long long _minimumSceneAnalysisVersion;
}

- (id)initWithMemoryGenerationContext:(id)a0 configurations:(id)a1;
- (unsigned long long)minimumSceneAnalysisVersion;
- (void)setMinimumSceneAnalysisVersion:(unsigned long long)a0;

@end
