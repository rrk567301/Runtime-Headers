@protocol PEAdjustmentPresetAutoDelegate;

@interface PEPasteablePreset : PEAdjustmentPreset

@property (weak, nonatomic) id<PEAdjustmentPresetAutoDelegate> autoDelegate;

+ (void)_filterValidAdjustmentsInCompositionController:(id)a0;
+ (BOOL)hasValidAdjustmentsInCompositionController:(id)a0;
+ (void)sanitizeCompositionController:(id)a0;

- (void).cxx_destruct;
- (long long)actionType;
- (void)_applyAutoEnhance:(id)a0 completion:(id /* block */)a1;
- (void)_runAutoCalculatorForCompositionController:(id)a0;
- (void)applyToCompositionController:(id)a0 invalidAdjustmentKeys:(id)a1 completion:(id /* block */)a2;
- (BOOL)needsGeometryAdjustments;

@end
