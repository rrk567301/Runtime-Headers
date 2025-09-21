@interface PEAdjustmentDataCache : NSObject

+ (void)initialize;
+ (id)compositionControllerForAssetIfLoaded:(id)a0 disposition:(long long *)a1;
+ (void)requestCompositionControllerForAsset:(id)a0 networkAccessAllowed:(char)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (id)synchronousCompositionControllerForAsset:(id)a0 networkAccessAllowed:(char)a1 disposition:(long long *)a2 originalComposition:(char)a3;
+ (struct CGSize { double x0; double x1; })synchronousInputSizeForAsset:(id)a0 disposition:(long long *)a1;
+ (id)entryForAsset:(id)a0 networkAccessAllowed:(char)a1 disposition:(long long *)a2 originalAdjustmentData:(char)a3;
+ (id)synchronousEditorBundleIDForAsset:(id)a0;

@end
