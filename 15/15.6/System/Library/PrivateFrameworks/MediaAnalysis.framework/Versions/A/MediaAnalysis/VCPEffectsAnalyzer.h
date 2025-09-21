@interface VCPEffectsAnalyzer : NSObject {
    char _hasFaceOrPet;
}

+ (char)usePHAssetScene;

- (int)analyzeAsset:(id)a0 onDemand:(char)a1 cancel:(id /* block */)a2 statsFlags:(unsigned long long *)a3 results:(id *)a4;
- (id)initWithAnalysisResults:(id)a0;
- (id)initWithFlagHasFaceOrPet:(char)a0;

@end
