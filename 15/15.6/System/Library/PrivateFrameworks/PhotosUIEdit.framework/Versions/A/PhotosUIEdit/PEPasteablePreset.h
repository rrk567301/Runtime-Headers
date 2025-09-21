@class PEResourceManager;
@protocol PEAdjustmentPresetAutoDelegate;

@interface PEPasteablePreset : PEAdjustmentPreset {
    PEResourceManager *_resourceManager;
}

@property (weak, nonatomic) id<PEAdjustmentPresetAutoDelegate> autoDelegate;

+ (char)hasValidAdjustmentsInCompositionController:(id)a0;
+ (void)sanitizeCompositionController:(id)a0;

- (void).cxx_destruct;
- (id)resourceManager;
- (long long)actionType;
- (id)sourceAssetUUID;
- (char)isEligibleForAsyncProcessingOnAsset:(id)a0;
- (char)_isSmart;
- (void)_runAutoCalculatorForCompositionController:(id)a0;
- (void)applyToCompositionController:(id)a0 asset:(id)a1 editSource:(id)a2 invalidAdjustmentKeys:(id)a3 completion:(id /* block */)a4;
- (id)expAndWBAdjustmentsDebugDescription;
- (id)initWithCompositionController:(id)a0 asset:(id)a1 isSmart:(char)a2;
- (char)isEligibleForSmartPasteWithPhotoLibrary:(id)a0;
- (char)isEligibleForSmartPasteWithPhotoLibrary:(id)a0 fallbackPayload:(id *)a1;

@end
