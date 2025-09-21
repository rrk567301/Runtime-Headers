@class CNContainer, CNContact;
@protocol CNUICoreParentContainerProvider, CNUICoreScreentimePasscodeCheck;

@interface CNUICoreEditAuthorizationCheck : NSObject

@property (readonly, nonatomic) CNContact *contact;
@property (readonly, nonatomic) CNContainer *parentContainer;
@property (readonly, nonatomic) char ignoresParentalRestrictions;
@property (readonly, nonatomic) id<CNUICoreScreentimePasscodeCheck> screenTimePasscodeStatusCheck;
@property (readonly, nonatomic) id<CNUICoreParentContainerProvider> linkedParentContainerProvider;

+ (id)log;
+ (id)containerProviderWithContactStore:(id)a0;
+ (char)isAuthorizationPasscodeEnabledOnDevice;

- (void).cxx_destruct;
- (char)editAltersRestrictedInformation;
- (char)authorizationPasscodeEnabledOnDevice;
- (char)canPerformValidAuthorizationCheck;
- (id)initWithContact:(id)a0 parentContainer:(id)a1 ignoresParentalRestrictions:(char)a2;
- (id)initWithContact:(id)a0 parentContainer:(id)a1 ignoresParentalRestrictions:(char)a2 linkedParentContainerProvider:(id)a3;
- (id)initWithContact:(id)a0 parentContainer:(id)a1 ignoresParentalRestrictions:(char)a2 screenTimePasscodeStatusCheck:(id)a3 linkedParentContainerProvider:(id)a4;
- (char)shouldBypassRestrictionsGivenAuthorizationResult:(long long)a0;
- (char)shouldPromptForPasscodeAuthorization;
- (char)shouldRespectParentalRestrictions;

@end
