@class NSXPCListener, NSString;

@interface ADAppTrackingService : ADSingleton <NSXPCListenerDelegate, ADAppTracking_XPC>

@property (retain) NSXPCListener *listener;
@property (nonatomic) char requestInFlight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)shouldDisplayPersonalizedAdsUI:(id /* block */)a0;
- (void)deviceRegionEnabledPerStorefront:(id /* block */)a0;
- (void)getAccountLevelSwitchDisabledReasonWithHandler:(id /* block */)a0;
- (void)iTunesAccountStorefront:(id /* block */)a0;
- (void)latestPersonalizedAdsConsentVersion:(id /* block */)a0;
- (void)localAdServicesEnabled:(id /* block */)a0;
- (void)reconcileDataForRecord:(id)a0;
- (void)sendPersonalizedAdsAndReconcileDataForRecord:(id)a0;
- (void)setPersonalizedAds:(char)a0 withCompletionHandler:(id /* block */)a1;
- (void)shouldAppStoreDisplayAdvertisingScreen:(id /* block */)a0;

@end
