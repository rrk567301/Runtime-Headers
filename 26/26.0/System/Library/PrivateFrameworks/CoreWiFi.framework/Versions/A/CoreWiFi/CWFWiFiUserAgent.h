@class NSArray, CWFNearbySyncManager, CWFCloudSyncManager, CWFKeyValueStore, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CWFWiFiUserAgent : CWFInterface {
    NSObject<OS_dispatch_queue> *_internalQueue;
    CWFCloudSyncManager *_cloudSyncManager;
    CWFNearbySyncManager *_nearbySyncManager;
    CWFKeyValueStore *_recentlyRemovedNetworkKVS;
    CWFKeyValueStore *_nearbyRecommendedNetworksKVS;
    NSArray *_nearbyRecommendedNetworks;
    NSObject<OS_dispatch_source> *_nearbyRecommendedNetworksExpirationTimer;
    NSObject<OS_dispatch_source> *_captiveCredentialsExpirationTimer;
}

@property (copy) NSArray *nearbyRecommendedNetworks;
@property (copy) id /* block */ allowCloudSyncableNetworkHandler;
@property (copy) id /* block */ allowNearbySyncableNetworkHandler;

- (void)setNearbyRecommendedNetworks:(id)a0;
- (void)invalidate;
- (id)nearbyRecommendedNetworks;
- (void)activate;
- (void).cxx_destruct;
- (id)__loadNearbyRecommendedNetworksFromKVS;
- (void)__purgeExpiredCaptiveNetworkCredentials;
- (void)__purgeExpiredNearbyRecommendedNetworks;
- (void)__receivedNearbyRecommendedNetwork:(id)a0;
- (void)__receivedNearbySyncableNetwork:(id)a0;
- (void)__setupCloudSyncManager;
- (void)__setupEventHandler;
- (void)__setupNearbySyncManager;
- (BOOL)__updateKeychainPassword:(id)a0 network:(id)a1;
- (void)__updateNearbyRecommendedNetworks;
- (void)__updateNearbyRecommendedNetworksExpirationTimer;
- (long long)defaultServiceType;
- (id)initWithXPCClient:(id)a0 requestParameters:(id)a1;

@end
