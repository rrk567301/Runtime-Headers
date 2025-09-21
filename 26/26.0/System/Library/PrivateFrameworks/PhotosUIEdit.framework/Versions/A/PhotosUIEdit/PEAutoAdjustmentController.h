@class NSArray, NSDictionary, NSMutableSet, PICompositionController, NSObject;
@protocol OS_dispatch_queue, NUImageProperties;

@interface PEAutoAdjustmentController : NSObject {
    NSArray *_cachedRedEyeCorrections;
    NSDictionary *_cachedWhiteBalanceSettings;
    double _cachedSmartToneLevel;
    double _cachedSmartColorLevel;
    BOOL _cachedValuesAreValid;
    NSObject<OS_dispatch_queue> *_calculationQueue;
    NSMutableSet *_waitingCalculationCompletionBlocks;
    PICompositionController *_stashedPreviousManualComposition;
}

@property (nonatomic, getter=isBusy, setter=_setBusy:) BOOL busy;
@property (retain, nonatomic) id<NUImageProperties> imageProperties;

+ (BOOL)isAutoEnhanceEnabledForCompositionController:(id)a0;
+ (BOOL)isAutoEnhanceEnabledForAsset:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_applyAutoValuesOnCompositionController:(id)a0 whiteBalanceSettings:(id)a1 redEyeCorrections:(id)a2 smartToneLevel:(double)a3 smartColorLevel:(double)a4 valuesCalculator:(id)a5;
- (void)_enableAutoEnhanceOnCompositionController:(id)a0 valuesCalculator:(id)a1 useCompositionIntensity:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)_revertAutoValuesOnCompositionController:(id)a0;
- (void)calculateStatisticsForCompositionController:(id)a0 valuesCalculator:(id)a1 completionHandler:(id /* block */)a2;
- (double)defaultAutoEnhanceIntensityForCompositionController:(id)a0;
- (void)disableAutoEnhanceOnCompositionController:(id)a0;
- (void)enableAutoEnhanceOnCompositionController:(id)a0 useCompositionIntensity:(BOOL)a1 valuesCalculator:(id)a2 completionHandler:(id /* block */)a3;
- (void)enableAutoEnhanceOnCompositionController:(id)a0 valuesCalculator:(id)a1 completionHandler:(id /* block */)a2;
- (void)ensureCacheUpToDateForValuesCalculator:(id)a0 completionHandler:(id /* block */)a1;
- (void)invalidateCachedAdjustments;

@end
