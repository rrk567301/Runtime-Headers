@class PKDynamicAssetIndex, NSBundle, NSObject;
@protocol OS_dispatch_queue;

@interface PKMobileAssetManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    PKDynamicAssetIndex *_dynamicAssetsIndex;
    NSBundle *_dynamicStringsBundle;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)fetchCityStationProviderAssetForBaseProvider:(id)a0 completionHandler:(id /* block */)a1;
- (id)cachedDynamicAssetWithIdentifier:(id)a0 parameters:(id)a1;
- (id)cachedDynamicAssetsIndex;
- (id)cachedDynamicStringWithIdentifier:(id)a0;
- (void)downloadAssetCatalog:(id /* block */)a0;
- (void)dynamicAssetWithIdentifier:(id)a0 mappedIdentifierPrefix:(id)a1 parameters:(id)a2 timeout:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)dynamicAssetWithIdentifier:(id)a0 parameters:(id)a1 timeout:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)dynamicAssetsIndex:(id /* block */)a0;
- (void)dynamicStringWithIdentifier:(id)a0 timeout:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)fetchMarketNotificationAssetsForIdentifier:(id)a0 userInitiated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)fetchRPIdentifierMappingUserInitiated:(BOOL)a0 localOnly:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)performScheduledActivityWithIdentifier:(id)a0 activityCriteria:(id)a1;
- (void)prefetchDynamicAssets:(id /* block */)a0;
- (void)schedulePrefetchDynamicAssetsWithInterval:(double)a0 queue:(id)a1;

@end
