@class PKDynamicAssetIndex, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PKMobileAssetManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    PKDynamicAssetIndex *_dynamicAssetsIndex;
    NSMutableDictionary *_cachedStringsBundles;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)sharedInstance;

- (id)cachedHowToUseWalletCardAssetsForLotIdentifier:(id)a0;
- (void)fetchRPIdentifierMappingDiscretionary:(BOOL)a0 localOnly:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)stationCodeDataForStationCodeProvider:(id)a0 completionHandler:(id /* block */)a1;
- (void)cachedHowToUseWalletCardAssetsForLotIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)schedulePrefetchForType:(long long)a0 interval:(double)a1 queue:(id)a2;
- (void)dynamicAssetWithIdentifier:(id)a0 mappedIdentifierPrefix:(id)a1 parameters:(id)a2 timeout:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)updateCashStickersIfNecessaryWithCompletion:(id /* block */)a0;
- (void)performScheduledActivityWithIdentifier:(id)a0 activityCriteria:(id)a1;
- (id)cachedDynamicAssetsIndex;
- (void)dynamicAssetWithIdentifier:(id)a0 parameters:(id)a1 timeout:(unsigned long long)a2 completion:(id /* block */)a3;
- (id)cachedCashStickerBundle;
- (void).cxx_destruct;
- (void)cachedHowToUseWalletModelAssetWithCompletion:(id /* block */)a0;
- (void)stringsBundleWithIdentifier:(id)a0 timeout:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)cachedDynamicAssetWithIdentifier:(id)a0 parameters:(id)a1;
- (id)init;
- (void)dynamicAssetsIndex:(id /* block */)a0;
- (void)prefetchAssetsForType:(long long)a0 completion:(id /* block */)a1;
- (void)_purgeCashStickersWithCompletion:(id /* block */)a0;
- (void)cachedCashStickerBundleWithCompletion:(id /* block */)a0;
- (void)fetchCityStationProviderAssetForBaseProvider:(id)a0 completionHandler:(id /* block */)a1;
- (id)cachedHowToUseWalletCardAssetForIdentifier:(id)a0;
- (id)cachedHowToUseWalletModelAsset;
- (BOOL)hasCashStickers;
- (void)fetchMarketNotificationAssetsForIdentifier:(id)a0 isDiscretionary:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)cachedStringsBundleWithIdentifier:(id)a0;

@end
