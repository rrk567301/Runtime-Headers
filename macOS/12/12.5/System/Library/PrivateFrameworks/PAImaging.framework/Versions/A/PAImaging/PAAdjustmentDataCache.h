@interface PAAdjustmentDataCache : NSObject

+ (void)initialize;
+ (id)entryForAasset:(id)a0 disposition:(long long *)a1;
+ (void)requestRenderDescriptionForAsset:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
+ (void)requestCompositionForAsset:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
+ (id)renderDescriptionForAssetIfLoaded:(id)a0 disposition:(long long *)a1;
+ (id)synchronousRenderDescriptionForAsset:(id)a0 disposition:(long long *)a1;
+ (id)synchronousCompositionForAsset:(id)a0 disposition:(long long *)a1;

@end
