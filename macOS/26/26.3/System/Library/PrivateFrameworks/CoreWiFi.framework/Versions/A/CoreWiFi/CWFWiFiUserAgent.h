@class CWFWiFiNetworkSharingClientID, NSString, NSArray, CWFCloudSyncManager, BSServiceConnection, UNNotificationRequest, CWFKeyValueStore, UNUserNotificationCenter, NSObject, CWFNearbySyncManager;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CWFWiFiUserAgent : CWFInterface <UNUserNotificationCenterDelegate, UNUserNotificationCenterDelegatePrivate> {
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
@property (copy) UNNotificationRequest *askToShareUserNotificationRequest;
@property (retain) UNUserNotificationCenter *userNotificationCenter;
@property (copy) id /* block */ presentAskToShareUserNotificationCompletionHandler;
@property (retain) BSServiceConnection *launchAngelConnection;
@property (copy) CWFWiFiNetworkSharingClientID *askToShareProxCardClientID;
@property (copy) id /* block */ presentAskToShareProxCardCompletionHandler;
@property (copy) id /* block */ presentAuthorizationProxCardCompletionHandler;
@property (copy) CWFWiFiNetworkSharingClientID *authorizationProxCardClientID;
@property (copy) id /* block */ allowCloudSyncableNetworkHandler;
@property (copy) id /* block */ allowNearbySyncableNetworkHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void)setNearbyRecommendedNetworks:(id)a0;
- (id)nearbyRecommendedNetworks;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)activate;
- (void)__launchWiFiNetworkSharingAskToShareProxCardForAccessoryID:(id)a0 accessoryName:(id)a1 appBundleID:(id)a2 completion:(id /* block */)a3;
- (void)__launchWiFiNetworkSharingAuthorizationProxCardForAccessoryID:(id)a0 accessoryName:(id)a1 appBundleID:(id)a2 completion:(id /* block */)a3;
- (id)__loadNearbyRecommendedNetworksFromKVS;
- (void)__purgeExpiredCaptiveNetworkCredentials;
- (void)__purgeExpiredNearbyRecommendedNetworks;
- (void)__receivedNearbyRecommendedNetwork:(id)a0;
- (void)__receivedNearbySyncableNetwork:(id)a0;
- (void)__removeAskToShareNotificationWithError:(id)a0 status:(long long)a1 debugReason:(id)a2;
- (void)__setupCloudSyncManager;
- (void)__setupEventHandler;
- (void)__setupNearbySyncManager;
- (void)__showWiFiNetworkSharingAskToShareNotificationForClientID:(id)a0 network:(id)a1 accessoryDisplayName:(id)a2 completion:(id /* block */)a3;
- (BOOL)__updateKeychainPassword:(id)a0 network:(id)a1;
- (void)__updateNearbyRecommendedNetworks;
- (void)__updateNearbyRecommendedNetworksExpirationTimer;
- (long long)defaultServiceType;
- (id)initWithXPCClient:(id)a0 requestParameters:(id)a1;
- (void)pickerDidDismiss:(id)a0;
- (void)pickerDidPresent;
- (void)relayPickerCompletion:(id)a0;

@end
