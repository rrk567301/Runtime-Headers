@interface PAAdjustmentDataCache : NSObject

+ (void)initialize;
+ (id)compositionControllerForAssetIfLoaded:(id)a0 disposition:(long long *)a1;
+ (id)entryForAsset:(id)a0 networkAccessAllowed:(BOOL)a1 disposition:(long long *)a2;
+ (void)requestCompositionControllerForAsset:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
+ (id)synchronousCompositionControllerForAsset:(id)a0 networkAccessAllowed:(BOOL)a1 disposition:(long long *)a2;
+ (struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })synchronousInputSizeForAsset:(id)a0 disposition:(long long *)a1;

@end
