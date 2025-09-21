@class CLSNSFWModel, CLSTabooEventModel, CLSSDModel, CLSPotentialLandmarkModel;

@interface CLSCurationModel_v3 : CLSCurationModel_v1 {
    char _r14j9IsAvailable;
}

@property (readonly) CLSNSFWModel *nsfwModel;
@property (readonly) CLSTabooEventModel *tabooEventModel;
@property (readonly) CLSPotentialLandmarkModel *potentialLandmarkModel;
@property (readonly) CLSSDModel *sdModel;

+ (id)baseSpecificationWithSpecification:(id)a0;

- (void).cxx_destruct;
- (void)enumerateClassificationBasedSignalModelsUsingBlock:(id /* block */)a0;
- (char)avoidIfPossibleForKeyAssetWithAsset:(id)a0 statistics:(struct { unsigned int x0; unsigned int x1; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; struct { unsigned int x0; } x13; struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } x14; } *)a1;
- (char)filterForFoodieWithClassification:(id)a0;
- (char)isUtilityForMemoriesWithAsset:(id)a0 userFeedbackCalculator:(id)a1;
- (char)avoidIfPossibleForKeyAssetWithProcessedSignals:(id)a0 statistics:(struct { unsigned int x0; } *)a1;
- (char)avoidIfPossibleForKeyAssetWithSignals:(id)a0 statistics:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *)a1;
- (void)enumerateSignalModelsUsingBlock:(id /* block */)a0;
- (char)hasPoorResolutionWithAsset:(id)a0;
- (id)initWithCurationModelSpecification:(id)a0;
- (char)isJunkWithJunkClassification:(id)a0;
- (char)isShowcasingFoodWithSceneClassification:(id)a0;
- (char)isTragicFailureWithImageAsset:(id)a0;
- (char)isUtilityForMemoriesWithProcessedSignals:(id)a0;
- (id)processedSignalsFromSignals:(id)a0;

@end
