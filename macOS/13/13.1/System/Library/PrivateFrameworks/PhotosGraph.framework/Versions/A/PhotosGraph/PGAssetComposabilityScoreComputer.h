@class PHPhotoLibrary, CLSSimilarStacker;

@interface PGAssetComposabilityScoreComputer : NSObject {
    PHPhotoLibrary *_photoLibrary;
    CLSSimilarStacker *_similarStacker;
    BOOL _computeDiptychScores;
    BOOL _computeTriptychScores;
}

- (void).cxx_destruct;
- (id)initForTesting;
- (id)initWithPhotoLibrary:(id)a0 options:(id)a1;
- (id)composabilityScoresOfAssetsForLocalIdentifiers:(id)a0;
- (double)identicalSimilarityThresholdWithBaseSceneprintVersion:(unsigned long long)a0;
- (double)semanticalSimilarityThresholdWithBaseSceneprintVersion:(unsigned long long)a0;
- (double)bestDistanceWithBaseSceneprintVersion:(unsigned long long)a0;
- (double)composabilityScoreWithAssetDistance:(double)a0 baseSceneprintVersion:(unsigned long long)a1;
- (double)composabilityScoreWithAssetDistance:(double)a0 andDistance:(double)a1 andDistance:(double)a2 baseSceneprintVersion:(unsigned long long)a3;

@end
