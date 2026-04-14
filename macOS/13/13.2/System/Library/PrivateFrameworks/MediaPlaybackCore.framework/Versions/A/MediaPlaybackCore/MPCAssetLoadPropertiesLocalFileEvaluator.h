@class MPCPlaybackEngine;

@interface MPCAssetLoadPropertiesLocalFileEvaluator : NSObject

@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;

- (void).cxx_destruct;
- (id)initWithPlaybackEngine:(id)a0;
- (id)evaluateAssetLoadProperties:(id)a0 allowingCachedAssets:(BOOL)a1 defaults:(id)a2;
- (long long)_loadedAudioAssetTypeForFileAsset:(id)a0;
- (BOOL)isHLSFileAsset:(id)a0;
- (long long)_recommendationForEvaluation:(id)a0 assetCachingIsAllowed:(BOOL)a1 userDefaults:(id)a2;
- (BOOL)_shouldUpgradeDownloadOnPlay:(id)a0 defaults:(id)a1;
- (BOOL)_shouldUpgradeCacheOnPlay:(id)a0 assetCachingIsAllowed:(BOOL)a1;

@end
