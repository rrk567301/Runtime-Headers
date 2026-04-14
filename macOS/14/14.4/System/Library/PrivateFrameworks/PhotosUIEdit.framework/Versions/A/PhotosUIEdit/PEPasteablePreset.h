@protocol PEAdjustmentPresetAutoDelegate;

@interface PEPasteablePreset : PEAdjustmentPreset

@property (weak, nonatomic) id<PEAdjustmentPresetAutoDelegate> autoDelegate;

+ (void)_filterValidAdjustmentsInCompositionController:(id)a0;
+ (BOOL)hasValidAdjustmentsInCompositionController:(id)a0;
+ (void)sanitizeCompositionController:(id)a0;

- (void).cxx_destruct;
- (long long)actionType;
- (id)sourceAssetUUID;
- (BOOL)isEligibleForAsyncProcessingOnAsset:(id)a0;
- (void)_runAutoCalculatorForCompositionController:(id)a0;
- (void)applyToCompositionController:(id)a0 invalidAdjustmentKeys:(id)a1 completion:(id /* block */)a2;
- (id)expAndWBAdjustmentsDebugDescription;
- (BOOL)isEligibleForSmartPasteWithPhotoLibrary:(id)a0;
- (BOOL)isEligibleForSmartPasteWithPhotoLibrary:(id)a0 fallbackPayload:(id *)a1;
- (BOOL)needsGeometryAdjustments;

@end
