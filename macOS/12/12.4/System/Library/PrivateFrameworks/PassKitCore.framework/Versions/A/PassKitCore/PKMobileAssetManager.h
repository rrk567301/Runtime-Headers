@class NSString, PKDynamicAssetIndex, NSBundle, NSObject;
@protocol OS_dispatch_queue;

@interface PKMobileAssetManager : NSObject <PDScheduledActivityClient> {
    NSObject<OS_dispatch_queue> *_queue;
    PKDynamicAssetIndex *_dynamicAssetsIndex;
    NSBundle *_dynamicStringsBundle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)performScheduledActivityWithIdentifier:(id)a0 activityCriteria:(id)a1;
- (void)fetchMarketNotificationAssetsForIdentifier:(id)a0 userInitiated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)fetchCityStationProviderAssetForBaseProvider:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchRPIdentifierMappingUserInitiated:(BOOL)a0 localOnly:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)cachedDynamicAssetWithIdentifier:(id)a0 parameters:(id)a1;
- (void)dynamicAssetWithIdentifier:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;
- (id)cachedDynamicStringWithIdentifier:(id)a0;
- (void)dynamicStringWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)cachedDynamicAssetsIndex;
- (void)dynamicAssetsIndex:(id /* block */)a0;
- (void)prefetchDynamicAssets:(id /* block */)a0;
- (void)schedulePrefetchDynamicAssetsWithInterval:(double)a0;

@end
