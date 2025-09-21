@class NSString, SFAuthorizationView;
@protocol NSAdminPrefAuthenticator;

@interface NSAdminPreference : NSPreference {
    SFAuthorizationView *comboAuthButton;
    id<NSAdminPrefAuthenticator> authenticator;
    id<NSAdminPrefAuthenticator> _realAuthenticator;
    char _ignoreShouldDeauthorize;
    char _deauthenticatePending;
}

@property (copy) NSString *bundleID;

+ (char)shouldDeauthenticate;
+ (void)updateAuthenticationStatus;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithBundle:(id)a0;
- (void)setAuthenticator:(id)a0;
- (void)cancelAuthorization;
- (const struct { unsigned int x0; struct *x1; } *)authorizationRights;
- (void)authorizationViewDidAuthorize:(id)a0;
- (void)authorizationViewDidDeauthorize:(id)a0;
- (char)authorizationViewShouldDeauthorize:(id)a0;
- (void)willSelect;
- (void)authorize;
- (id)comboAuthButton;
- (void)deauthenticate:(id)a0;
- (void)mainViewDidLoad;
- (char)_isCurrentUserAdministrator;
- (char)_requiresPasswordToUnlock;
- (void)appWillTerminate:(id)a0;
- (char *)authorizationString;
- (void)doCancelPaneSwitch:(id)a0;
- (void)doFinishPaneSwitch:(id)a0;
- (char)shouldDeauthenticate:(id)a0;
- (void)updateAuthenticationStatus;
- (void)willDeauthenticate:(id)a0;

@end
