@class NSMutableSet;

@interface UAFAssetSetManager : NSObject

@property (class, readonly, nonatomic) UAFAssetSetManager *sharedManager;

@property (retain) NSMutableSet *assetSetObservers;

+ (id)defaults;
+ (id)sysdiagnoseInformationWithError:(id *)a0;
+ (void)subscribe:(id)a0 subscriptions:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (id)getAssetSetUsages:(id)a0 storeManager:(id)a1;
+ (id)_subscriptionDiffersFromDB:(id)a0 subscriber:(id)a1 error:(id *)a2;
+ (void)autoAssetDetailsForAssetNamed:(id)a0 assetSet:(id)a1 usages:(id)a2 autoAssetType:(id *)a3 autoAssetSpecifier:(id *)a4;
+ (id)cacheDeleteDefaultsKeyForAutoAssetType:(id)a0 autoAssetSpecifier:(id)a1;
+ (char)cacheDeleteDisabledForAutoAssetType:(id)a0 autoAssetSpecifier:(id)a1;
+ (unsigned long long)coalesceDownloadStatus:(id)a0;
+ (void)configureAssetDelivery:(id)a0 configurationManager:(id)a1;
+ (void)configureAssetDelivery:(id)a0 configurationManager:(id)a1 lockIfUnchanged:(char)a2;
+ (void)configureAssetDelivery:(id)a0 configurationManager:(id)a1 lockIfUnchanged:(char)a2 subscriptions:(id)a3 assetSetUsages:(id)a4 userInitiated:(char)a5;
+ (void)disableCacheDelete:(char)a0 forAutoAssetType:(id)a1 autoAssetSpecifier:(id)a2;
+ (id)generateInformationWithError:(id *)a0;
+ (id)getComparableUsages:(id)a0;
+ (id)getConcurrentQueue;
+ (id)getSerialQueue;
+ (id)getSubscriptions:(id)a0 storeManager:(id)a1;
+ (id)getSystemUsageAssets:(id)a0;
+ (void)processAssetSet:(id)a0 allAssets:(id)a1;
+ (char)shouldConfigure:(id)a0 newUsages:(id)a1;
+ (char)subscribe:(id)a0 subscriptions:(id)a1 storeManager:(id)a2 configurationManager:(id)a3 userInitiated:(char)a4;
+ (void)unsubscribe:(id)a0 subscriptions:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
+ (char)unsubscribe:(id)a0 subscriptions:(id)a1 storeManager:(id)a2 configurationManager:(id)a3 userInitiated:(char)a4;
+ (char)userIsValidForAssetSetManagement:(unsigned int)a0;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (char)assetDeliveryReady;
- (void)disableCacheDelete:(char)a0 forAssetNamed:(id)a1 assetSet:(id)a2 usages:(id)a3 queue:(id)a4 completion:(id /* block */)a5;
- (unsigned long long)downloadStatusForSubscriber:(id)a0 subscriptionName:(id)a1;
- (id)knownUsagesForAssetSet:(id)a0 usageType:(id)a1;
- (id)observeAssetSet:(id)a0 queue:(id)a1 handler:(id /* block */)a2;
- (id)retrieveAssetSet:(id)a0 usages:(id)a1;
- (void)subscribe:(id)a0 subscriptions:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (id)subscriptionsForSubscriber:(id)a0;
- (void)unsubscribe:(id)a0 subscriptionNames:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)updateAssetsForSubscriber:(id)a0 subscriptionName:(id)a1 policies:(id)a2 queue:(id)a3 progress:(id /* block */)a4 completion:(id /* block */)a5;
- (id)assetNamesForAssetSet:(id)a0 usages:(id)a1;
- (id)diskSpaceNeededForSubscriber:(id)a0 subscriptionName:(id)a1 error:(id *)a2;
- (id)diskSpaceNeededForSubscribers:(id)a0 error:(id *)a1;
- (void)downloadStatusForSubscriber:(id)a0 subscriptionName:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (unsigned long long)downloadStatusForSubscribers:(id)a0;
- (void)downloadStatusForSubscribers:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)markAssetsExpired:(id)a0 completion:(id /* block */)a1;
- (id)retrieveAssetSet:(id)a0 usages:(id)a1 consistencyToken:(id)a2;
- (void)retrieveAssetSet:(id)a0 usages:(id)a1 queue:(id)a2 completion:(id /* block */)a3;
- (void)updateAssetsForSubscriber:(id)a0 subscriptionName:(id)a1 policies:(id)a2 queue:(id)a3 detailedProgress:(id /* block */)a4 completion:(id /* block */)a5;
- (void)updateAssetsForSubscribers:(id)a0 policies:(id)a1 queue:(id)a2 detailedProgress:(id /* block */)a3 completion:(id /* block */)a4;
- (id)assetSetUsagesForSubscribers:(id)a0 storeManager:(id)a1 configurationManager:(id)a2 anyUnknown:(char *)a3;
- (char)cacheDeleteDisabledForAssetNamed:(id)a0 assetSet:(id)a1 usages:(id)a2;
- (id)diskSpaceNeededForSubscribers:(id)a0 storeManager:(id)a1 configurationManager:(id)a2 error:(id *)a3;
- (id)observeAssetSet:(id)a0 policies:(id)a1 queue:(id)a2 handler:(id /* block */)a3;
- (void)retrieveAssetSet:(id)a0 usages:(id)a1 consistencyToken:(id)a2 queue:(id)a3 completion:(id /* block */)a4;
- (id)retrieveAssetSet:(id)a0 usages:(id)a1 disableExperimentation:(char)a2;
- (id)subscribedUsagesForAssetSet:(id)a0;
- (id)subscriptionsForSubscriber:(id)a0 storeManager:(id)a1;
- (void)updateAssetsForSubscriber:(id)a0 subscriptionName:(id)a1 policies:(id)a2 queue:(id)a3 progress:(id /* block */)a4 detailedProgress:(id /* block */)a5 completion:(id /* block */)a6 storeManager:(id)a7 configurationManager:(id)a8;
- (void)updateAssetsForSubscribers:(id)a0 policies:(id)a1 queue:(id)a2 progress:(id /* block */)a3 detailedProgress:(id /* block */)a4 completion:(id /* block */)a5 storeManager:(id)a6 configurationManager:(id)a7;

@end
