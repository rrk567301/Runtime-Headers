@interface _LTDUAFAssetService : NSObject <_LTDAssetServiceProtocol>

+ (id)_queue;
+ (id)_catalog;
+ (void)_cancelDeferredUnsubscribeTimer;
+ (void)_updateDeferredUnsubscribeTimer;
+ (id)_allAssetLocales;
+ (id)_allAssetSpecifiers;
+ (id)_allAssetSpecifiersByLocaleId;
+ (id)_configBundleURL;
+ (void)_deferredUnsubscribe;
+ (void)_downloadAsset:(id)a0 options:(unsigned long long)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
+ (BOOL)_ensureAssetDownloadCompletion:(id)a0 progress:(id /* block */)a1;
+ (id)_errorFor:(long long)a0 message:(id)a1;
+ (void)_registerChangeHandler:(id /* block */)a0;
+ (void)_registerForAsset:(id)a0 options:(unsigned long long)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)_registerOneTimeChangeHandler:(id /* block */)a0;
+ (id)_requiredAssetSpecifiers;
+ (void)_scheduleNextDownloadIfNeededWithCompletedDownloadEntry:(id)a0;
+ (id)_selectedLocales;
+ (void)_subscribe:(id)a0 completion:(id /* block */)a1;
+ (void)_subscribeWithAssetSpecifiers:(id)a0 completion:(id /* block */)a1;
+ (id)_subscribedAssetSpecifiers;
+ (id)_subscriptions;
+ (void)_unsubscribe:(id)a0 completion:(id /* block */)a1;
+ (void)_unsubscribeWithAssetSpecifiers:(id)a0 completion:(id /* block */)a1;
+ (id)assetUsageValuesForAssetType:(unsigned long long)a0;
+ (void)downloadAsset:(id)a0 options:(unsigned long long)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)downloadCatalogForAssetType:(id)a0 completion:(id /* block */)a1;
+ (id)pendingDownloadSchedulingAssetsNameToEntry;
+ (void)purgeAsset:(id)a0 completion:(id /* block */)a1;
+ (void)queryAssetType:(id)a0 filter:(unsigned long long)a1 completion:(id /* block */)a2;
+ (id)queryAssetType:(id)a0 filter:(unsigned long long)a1 error:(id *)a2;
+ (unsigned long long)stateForAsset:(id)a0;

@end
