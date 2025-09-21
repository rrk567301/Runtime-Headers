@class MPCPlaybackEngine;

@interface MPCAssetLoadPropertiesLocalFileEvaluator : NSObject

@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;

- (void).cxx_destruct;
- (char)isHLSFileAsset:(id)a0;
- (long long)_loadedAudioAssetTypeForFileAsset:(id)a0;
- (long long)_recommendationForEvaluation:(id)a0 assetCachingIsAllowed:(char)a1 userDefaults:(id)a2;
- (char)_shouldUpgradeCacheOnPlay:(id)a0 assetCachingIsAllowed:(char)a1;
- (char)_shouldUpgradeDownloadOnPlay:(id)a0 defaults:(id)a1;
- (id)evaluateAssetLoadProperties:(id)a0 allowingCachedAssets:(char)a1 defaults:(id)a2;
- (id)initWithPlaybackEngine:(id)a0;

@end
