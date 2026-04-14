@class NSObject;
@protocol OS_dispatch_queue;

@interface PKMobileAssetManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)fetchMarketNotificationAssetsForIdentifier:(id)a0 userInitiated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)fetchCityStationProviderAssetForBaseProvider:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchRPIdentifierMappingUserInitiated:(BOOL)a0 localOnly:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
