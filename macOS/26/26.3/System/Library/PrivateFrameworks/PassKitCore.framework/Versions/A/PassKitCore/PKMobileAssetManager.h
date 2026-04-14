@class PKDynamicAssetIndex, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PKMobileAssetManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    PKDynamicAssetIndex *_dynamicAssetsIndex;
    NSMutableDictionary *_cachedStringsBundles;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)sharedInstance;

- (void)fetchRPIdentifierMappingDiscretionary:(BOOL)a0 localOnly:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)cachedHowToUseWalletModelAsset;
- (void)prefetchAssetsForType:(long long)a0 completion:(id /* block */)a1;
- (id)init;
- (id)cachedDynamicAssetsIndex;
- (void)stationCodeDataForStationCodeProvider:(id)a0 completionHandler:(id /* block */)a1;
- (void)_purgeCashStickersWithCompletion:(id /* block */)a0;
- (void)updateCashStickersIfNecessaryWithCompletion:(id /* block */)a0;
- (void)stringsBundleWithIdentifier:(id)a0 timeout:(unsigned long long)a1 completion:(id /* block */)a2;
- (BOOL)hasCashStickers;
- (void).cxx_destruct;
- (void)dynamicAssetsIndex:(id /* block */)a0;
- (void)schedulePrefetchForType:(long long)a0 interval:(double)a1 queue:(id)a2;
- (void)fetchCityStationProviderAssetForBaseProvider:(id)a0 completionHandler:(id /* block */)a1;
- (id)cachedCashStickerBundle;
- (void)performScheduledActivityWithIdentifier:(id)a0 activityCriteria:(id)a1;
- (void)dynamicAssetWithIdentifier:(id)a0 mappedIdentifierPrefix:(id)a1 parameters:(id)a2 timeout:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)fetchMarketNotificationAssetsForIdentifier:(id)a0 isDiscretionary:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)cachedHowToUseWalletCardAssetsForLotIdentifier:(id)a0;
- (id)cachedDynamicAssetWithIdentifier:(id)a0 parameters:(id)a1;
- (id)cachedStringsBundleWithIdentifier:(id)a0;
- (id)cachedHowToUseWalletCardAssetForIdentifier:(id)a0;
- (void)dynamicAssetWithIdentifier:(id)a0 parameters:(id)a1 timeout:(unsigned long long)a2 completion:(id /* block */)a3;

@end
