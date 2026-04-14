@protocol PEAdjustmentPresetAutoDelegate;

@interface PEPasteablePreset : PEAdjustmentPreset

@property (weak, nonatomic) id<PEAdjustmentPresetAutoDelegate> autoDelegate;

+ (void)sanitizeCompositionController:(id)a0;
+ (BOOL)hasValidAdjustmentsInCompositionController:(id)a0;
+ (void)_filterValidAdjustmentsInCompositionController:(id)a0;

- (void).cxx_destruct;
- (long long)actionType;
- (BOOL)needsGeometryAdjustments;
- (void)applyToCompositionController:(id)a0 invalidAdjustmentKeys:(id)a1 completion:(id /* block */)a2;
- (void)_applyAutoEnhance:(id)a0 completion:(id /* block */)a1;
- (void)_runAutoCalculatorForCompositionController:(id)a0;

@end
