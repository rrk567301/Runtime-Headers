@interface PISegmentation : NSObject

+ (unsigned long long)currentVersion;
+ (void)warmUpResources;
+ (void)ensureResources;
+ (void)freeResources;
+ (void)computeSegmentationScoresForAsset:(id)a0 options:(id)a1 completion:(id /* block */)a2;
+ (void)loadSegmentationItemForAsset:(id)a0 options:(id)a1 completion:(id /* block */)a2;
+ (void)cancelSegmentationForAsset:(id)a0;
+ (BOOL)curatedSegmentationGatingDecisionForSegmentationScores:(id)a0;
+ (BOOL)manualSegmentationGatingDecisionForSegmentationScores:(id)a0;
+ (BOOL)layoutGatingDecisionForSegmentationScores:(id)a0;
+ (BOOL)tryLoadSegmentationForColdAsset:(id)a0;
+ (void)setSegmentationLoader:(id)a0 forAsset:(id)a1;
+ (id)segmentationLoaderForAsset:(id)a0;
+ (void)exportWallpaperForAsset:(id)a0 toURL:(id)a1 options:(id)a2 completion:(id /* block */)a3;
+ (unsigned long long)_layerStackOptionsFromOptions:(id)a0;
+ (id)_styleFromOptions:(id)a0 item:(id)a1;
+ (void)upgradeWallpaperAtURL:(id)a0 exportToURL:(id)a1 options:(id)a2 completion:(id /* block */)a3;
+ (void)_upgradeWallpaperAtURL:(id)a0 exportToURL:(id)a1 options:(id)a2 completion:(id /* block */)a3;
+ (void)_upgradeFullPosterAtURL:(id)a0 exportToURL:(id)a1 options:(id)a2 completion:(id /* block */)a3;
+ (void)upgradePosterConfiguration:(id)a0 atURL:(id)a1 exportTo:(id)a2 options:(id)a3 completion:(id /* block */)a4;

@end
