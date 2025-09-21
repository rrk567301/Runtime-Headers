@class NSObject;
@protocol OS_dispatch_queue;

@interface WBSPrivacyProxyAvailabilityManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    char _isPrivacyProxyOnInICloudSettings;
    char _isPrivacyProxyPaidTierUnavailableInUserCountry;
    unsigned long long _privacyProxyTrafficBitfield;
    unsigned long long _privacyProxyAccountType;
    unsigned long long _privacyProxyServiceStatus;
    char _isPrivacyProxyActiveOnDefaultNetwork;
    int _privacyProxyConfigurationChangeNotificationToken;
    int _privacyProxyServiceStatusChangeNotificationToken;
}

@property (class, readonly, nonatomic) WBSPrivacyProxyAvailabilityManager *sharedManager;

@property char initialized;
@property (readonly, nonatomic) char isPrivacyProxyOnInICloudSettings;
@property (readonly, nonatomic) char isUserAccountInSubscriberTierForPrivacyProxy;
@property (readonly, nonatomic) char isPrivacyProxyOnForEitherTier;
@property (readonly, nonatomic) char isPrivacyProxyFreeTierAvailable;
@property (readonly, nonatomic) char isPrivacyProxyActive;
@property (readonly, nonatomic) char isPrivacyProxyRestrictedToTrackersByUser;
@property (readonly, nonatomic) char isPrivacyProxySetToTrackersAndWebsites;
@property (readonly, nonatomic) char isPrivacyProxyPaidTierUnavailableInUserCountry;
@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) char shouldPromptUsersToTurnOnPrivateRelayForSafari;
@property (readonly, nonatomic) char shouldFetchPasswordManagerWebsiteDataUsingPrivacyProxy;
@property (readonly, nonatomic) char isPrivacyProxyRoutingUnencryptedTrafficInEnhancedPrivacyMode;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setPrivacyProxyEnabled:(char)a0 completionHandler:(id /* block */)a1;
- (void)setPrivacyProxyState:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (char)_isPrivacyProxyActiveForInterface:(id)a0 networkStatuses:(id)a1;
- (void)_registerForDefaultNetworkInterfaceChangeNotifications;
- (void)_registerForPrivacyProxyChangeNotifications;
- (void)_updatePrivacyProxyStateWithCompletionHandler:(id /* block */)a0;

@end
