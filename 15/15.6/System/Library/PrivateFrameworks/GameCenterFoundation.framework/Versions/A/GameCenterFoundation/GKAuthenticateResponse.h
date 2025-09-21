@class NSString, NSURL;

@interface GKAuthenticateResponse : GKInternalRepresentation

@property (retain, nonatomic) NSString *playerID;
@property (nonatomic) char loginDisabled;
@property (nonatomic) char suppressLoginSheet;
@property (nonatomic) char loginBannerDisabled;
@property (nonatomic) char passwordChangeRequired;
@property (retain, nonatomic) NSURL *passwordChangeURL;
@property (nonatomic) char shouldShowLinkAccountsUI;
@property (retain, nonatomic) NSString *alertTitle;
@property (retain, nonatomic) NSString *alertMessage;
@property (nonatomic) unsigned long long lastWelcomeWhatsNewCopyVersionDisplayed;
@property (nonatomic) unsigned long long lastPrivacyNoticeVersionDisplayed;
@property (retain, nonatomic) NSString *lastPersonalizationVersionDisplayed;
@property (retain, nonatomic) NSString *lastProfilePrivacyVersionDisplayed;
@property (retain, nonatomic) NSString *lastContactsIntegrationConsentVersionDisplayed;
@property (retain, nonatomic) NSString *lastFriendSuggestionsVersionDisplayed;
@property (nonatomic) char accessPointIsOnAutomatically;
@property (nonatomic) char accessPointShowHighlights;
@property (nonatomic) long long accessPointLocation;

+ (id)secureCodedPropertyKeys;

- (id)init;
- (void).cxx_destruct;

@end
