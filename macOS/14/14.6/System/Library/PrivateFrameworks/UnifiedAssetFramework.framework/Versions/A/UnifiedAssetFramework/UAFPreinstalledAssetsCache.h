@interface UAFPreinstalledAssetsCache : NSObject

+ (void)invalidateCache;
+ (id)assetNamed:(id)a0 assetType:(id)a1 attributes:(id)a2;
+ (BOOL)checkForAssetTypePath:(id)a0;
+ (void)initCache;
+ (id)lookupStringForAsset:(id)a0 withAttributes:(id)a1;
+ (id)queryAssetType:(id)a0 attributes:(id)a1;

@end
