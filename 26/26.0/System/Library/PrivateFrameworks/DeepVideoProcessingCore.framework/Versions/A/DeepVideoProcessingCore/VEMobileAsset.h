@interface VEMobileAsset : NSObject

+ (void)downloadMobileAssetType:(id)a0 assetSpecifier:(id)a1 forClientName:(id)a2 completionHandler:(id /* block */)a3;
+ (void)endAllLocksWithAssetType:(id)a0 assetSpecifier:(id)a1 forClientName:(id)a2;
+ (id)getLocalMobileAssetURLWithAssetType:(id)a0 assetSpecifier:(id)a1 forClientName:(id)a2;
+ (long long)getMobileAssetStatusWithAssetType:(id)a0 assetSpecifier:(id)a1 forClientName:(id)a2 percentCompleted:(long long *)a3;

@end
