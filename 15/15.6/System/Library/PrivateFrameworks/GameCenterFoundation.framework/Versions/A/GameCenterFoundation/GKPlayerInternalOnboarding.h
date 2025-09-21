@class NSString;

@interface GKPlayerInternalOnboarding : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long lastWelcomeWhatsNewCopyVersionDisplayed;
@property (readonly, nonatomic) unsigned long long lastPrivacyNoticeVersionDisplayed;
@property (readonly, copy, nonatomic) NSString *lastPersonalizationVersionDisplayed;
@property (readonly, copy, nonatomic) NSString *lastProfilePrivacyVersionDisplayed;
@property (readonly, copy, nonatomic) NSString *lastFriendSuggestionsVersionDisplayed;
@property (readonly, copy, nonatomic) NSString *lastContactsIntegrationConsentVersionDisplayed;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)hasAcknowledgedLatestGDPR;
- (id)initWithLastWelcomeWhatsNewCopyVersionDisplayed:(unsigned long long)a0 lastPrivacyNoticeVersionDisplayed:(unsigned long long)a1 lastPersonalizationVersionDisplayed:(id)a2 lastProfilePrivacyVersionDisplayed:(id)a3 lastFriendSuggestionsVersionDisplayed:(id)a4 lastContactsIntegrationConsentVersionDisplayed:(id)a5;
- (char)shouldShowAnyOnboardingScreenForBundleIdentifier:(id)a0 IsUsingDefaultNickname:(char)a1 isUsingDefaultPrivacyVisibility:(char)a2 isUsingDefaultContactsIntegrationConsent:(char)a3;
- (char)shouldShowContactsIntegrationConsentScreenIsUsingDefaultContactsIntegrationConsent:(char)a0;
- (char)shouldShowFriendSuggestionsScreen;
- (char)shouldShowPersonalizationScreenIsUsingDefaultNickname:(char)a0;

@end
