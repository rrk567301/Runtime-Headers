@class ISIcon, PORegistrationManager, POBuddyAuthenticationViewController, POConfigurationCoreManager, NSString, POAuthPluginProcess, PODirectoryServices, POAgentAuthenticationProcess;
@protocol POBuddyRegistrationDelegate, MBSecondPartyHost;

@interface POBuddyCreateUserManager : POBuddyManager <POBuddyAuthenticationViewControllerDelegate>

@property (retain, nonatomic) POBuddyAuthenticationViewController *authenticationViewController;
@property (retain) PORegistrationManager *registrationManager;
@property (retain) POAgentAuthenticationProcess *agentAuthenticationProcess;
@property (readonly) POConfigurationCoreManager *configurationManager;
@property (retain) PODirectoryServices *directoryServices;
@property (readonly, nonatomic) POAuthPluginProcess *systemAuthPluginProcess;
@property (retain) ISIcon *icon;
@property (weak) id<MBSecondPartyHost> host;
@property (weak) id<POBuddyRegistrationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)templateView;
- (BOOL)needsToRun;
- (void)authMethodDidChange;
- (BOOL)canUsePreviousSSOTokens;
- (void)didCompleteWithResult:(unsigned long long)a0 loginUserName:(id)a1 context:(id)a2 ssoTokens:(id)a3 tokenId:(id)a4 tokenHash:(id)a5 wrapTokenHash:(id)a6;
- (void)didCompleteWithResult:(unsigned long long)a0 tokenId:(id)a1 tokenHash:(id)a2 wrapTokenHash:(id)a3;
- (void)enableButtons:(BOOL)a0;
- (void)needsToRunWithCompletionHandler:(id /* block */)a0;
- (void)registrationComplete;
- (void)showProgressIsRunning:(BOOL)a0 waiting:(BOOL)a1;
- (void)startUserAuthentication;
- (void)updatePlatformSSOValuesForCreatedUser:(id)a0 createdPassword:(id)a1;

@end
