@interface _LTDASRAssetService : NSObject <_LTDAssetServiceProtocol>

+ (id)queue;
+ (id)_catalog;
+ (id)supportedLanguagesForTaskHint:(long long)a0;
+ (id)_requiredAssets;
+ (void)_subscribe:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
+ (id)_supportedGASRLocaleIdentifiers;
+ (id)_assetTypesForDevice;
+ (id)_availableAssets;
+ (void)_downloadAsset:(id)a0 options:(unsigned long long)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
+ (id)_requiredSFConfigsForAssets:(id)a0;
+ (void)_scheduleNextDownloadIfNeededWithCompletedDownloadEntry:(id)a0;
+ (id)_selectedLTLocalesIdentifiers;
+ (id)_subscribedSFConfigs;
+ (id)_supportedLTLocaleIdentifiers;
+ (BOOL)_supportsGASR;
+ (BOOL)_supportsNGASR;
+ (void)_unsubscribe:(id)a0 completion:(id /* block */)a1;
+ (id)assetSpecifierForSFConfig:(id)a0;
+ (void)cancelDeferredUnsubscribeTimer;
+ (void)deferredUnsubscribe;
+ (id)deferredUnsubscribeAssets;
+ (void)downloadAsset:(id)a0 options:(unsigned long long)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
+ (BOOL)isSupportedTaskHint:(long long)a0;
+ (id)pathToSFAsset:(id)a0;
+ (id)pendingDownloadSchedulingAssetsNameToEntry;
+ (void)purgeAsset:(id)a0 completion:(id /* block */)a1;
+ (void)queryAssetType:(id)a0 filter:(unsigned long long)a1 completion:(id /* block */)a2;
+ (id)queryAssetType:(id)a0 filter:(unsigned long long)a1 error:(id *)a2;
+ (void)updateDeferredUnsubscribeTimer;

@end
