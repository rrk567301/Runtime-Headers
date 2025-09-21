@class ICUserIdentity, NSMutableDictionary;

@interface ICPrivacyInfo : NSObject {
    ICUserIdentity *_userIdentity;
    NSMutableDictionary *_cache;
    NSMutableDictionary *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) ICPrivacyInfo *sharedPrivacyInfo;

@property (readonly, nonatomic) BOOL privacyAcknowledgementRequiredForMedia;
@property (readonly, nonatomic) BOOL shouldBlockPersonalizedNetworkRequestsForMedia;
@property (readonly, nonatomic) BOOL privacyAcknowledgementRequiredForMusic;
@property (readonly, nonatomic) BOOL hasPreviouslyAcknowledgedMusicIdentifier;
@property (readonly, nonatomic) BOOL shouldBlockPersonalizedNetworkRequestsForMusic;
@property (readonly, nonatomic) BOOL preflightDisclosureRequiredForMusic;

+ (id)sharedPrivacyInfoForUserIdentity:(id)a0;
+ (id)_onboardingKitPrivacyIdentifierForPrivacyIdentifier:(id)a0;

- (id)initWithIdentity:(id)a0;
- (id)beginObservingPrivacyAcknowledgementForIdentifier:(id)a0 handler:(id /* block */)a1;
- (BOOL)privacyAcknowledgementRequiredForBundleIdentifier:(id)a0;
- (BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)a0;
- (BOOL)_hasPreviouslyAcknowledgedPrivacyIdentifier:(id)a0;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)a0;
- (BOOL)privacyAcknowledgementRequiredForPodcasts;
- (id)_queryPrivacyDetailsForIdentifier:(id)a0;
- (id)init;
- (BOOL)preflightDisclosureRequiredForBundleIdentifier:(id)a0;
- (BOOL)_canUsePreviousPrivacyAcknowledgementForPersonalizedNetworkRequests;
- (BOOL)shouldBlockPersonalizedNetworkRequestsForIdentifier:(id)a0;
- (id)description;
- (BOOL)shouldBlockPersonalizedNetworkRequestsForBundleIdentifier:(id)a0;
- (void)_updateForPrivacyAcknowledgementChanged;
- (BOOL)hasPreviouslyAcknowledgedPrivacyIdentifierForBundleIdentifier:(id)a0;
- (void)endObservingPrivacyAcknowledgementForIdentifier:(id)a0 withToken:(id)a1;
- (void)acknowledgePrivacyPolicyForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)_accountForPrivacyInfo;
- (BOOL)_privacyAcknowledgementRequiredForIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)privacyAcknowledgementRequiredForIdentifier:(id)a0;

@end
