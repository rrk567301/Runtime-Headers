@class ICUserIdentity, NSMutableDictionary;

@interface ICPrivacyInfo : NSObject {
    ICUserIdentity *_userIdentity;
    NSMutableDictionary *_cache;
    NSMutableDictionary *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) ICPrivacyInfo *sharedPrivacyInfo;

@property (readonly, nonatomic) char privacyAcknowledgementRequiredForMedia;
@property (readonly, nonatomic) char privacyAcknowledgementRequiredForMusic;
@property (readonly, nonatomic) char hasPreviouslyAcknowledgedMusicIdentifier;
@property (readonly, nonatomic) char preflightDisclosureRequiredForMusic;

+ (id)_onboardingKitPrivacyIdentifierForPrivacyIdentifier:(id)a0;
+ (id)sharedPrivacyInfoForUserIdentity:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentity:(id)a0;
- (char)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)a0;
- (id)_accountForPrivacyInfo;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)a0;
- (char)_hasPreviouslyAcknowledgedPrivacyIdentifier:(id)a0;
- (char)_privacyAcknowledgementRequiredForIdentifier:(id)a0;
- (id)_queryPrivacyDetailsForIdentifier:(id)a0;
- (void)_updateForPrivacyAcknowledgementChanged;
- (void)acknowledgePrivacyPolicyForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (id)beginObservingPrivacyAcknowledgementForIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)endObservingPrivacyAcknowledgementForIdentifier:(id)a0 withToken:(id)a1;
- (char)hasPreviouslyAcknowledgedPrivacyIdentifierForBundleIdentifier:(id)a0;
- (char)preflightDisclosureRequiredForBundleIdentifier:(id)a0;
- (char)privacyAcknowledgementRequiredForBundleIdentifier:(id)a0;
- (char)privacyAcknowledgementRequiredForIdentifier:(id)a0;

@end
