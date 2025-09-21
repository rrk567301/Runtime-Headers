@class PHPhotoLibrary, CLSSimilarStacker;

@interface PGAssetComposabilityScoreComputer : NSObject {
    PHPhotoLibrary *_photoLibrary;
    CLSSimilarStacker *_similarStacker;
    char _computeDiptychScores;
    char _computeTriptychScores;
}

- (void).cxx_destruct;
- (id)initForTesting;
- (id)composabilityScoresOfAssetsForLocalIdentifiers:(id)a0;
- (id)initWithPhotoLibrary:(id)a0 options:(id)a1;
- (double)bestDistanceWithSimilarityModelVersion:(unsigned long long)a0;
- (double)composabilityScoreWithAssetDistance:(double)a0 andDistance:(double)a1 andDistance:(double)a2 similarityModelVersion:(unsigned long long)a3;
- (double)composabilityScoreWithAssetDistance:(double)a0 similarityModelVersion:(unsigned long long)a1;
- (double)identicalSimilarityThresholdWithSimilarityModelVersion:(unsigned long long)a0;
- (double)semanticalSimilarityThresholdWithSimilarityModelVersion:(unsigned long long)a0;

@end
