@class NSWindow, NSString, ISIcon, POBuddyAuthenticationViewController;
@protocol POBuddyRegistrationDelegate, MBSecondPartyHost;

@interface POBuddyDeviceRegistrationManager : POBuddyManager <POUIRegistrationUIProvider, POBuddyAuthenticationViewControllerDelegate>

@property (retain) ISIcon *icon;
@property unsigned long long currentStep;
@property BOOL registrationSuccess;
@property (retain) NSString *statusMessage;
@property (nonatomic) BOOL waitingForConfig;
@property (nonatomic) BOOL allowRetryConfig;
@property (retain, nonatomic) POBuddyAuthenticationViewController *authenticationViewController;
@property (nonatomic) BOOL requireUserAuthentication;
@property (nonatomic) BOOL runningBeforeMDMEnrollment;
@property (weak) id<MBSecondPartyHost> host;
@property (weak) id<POBuddyRegistrationDelegate> delegate;
@property (readonly) NSWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)close;
- (void).cxx_destruct;
- (id)templateView;
- (BOOL)needsToRun;
- (void)enableRegistrationControls;
- (BOOL)registrationCompleted;
- (void)requestSmartCardForBindingWithCompletion:(id /* block */)a0;
- (void)requestUserAuthenticationSyncPassword:(BOOL)a0 completion:(id /* block */)a1;
- (void)showFinishRegistrationWithSuccess:(BOOL)a0 context:(id)a1 message:(id)a2;
- (void)showRegistrationUI:(id)a0;
- (void)showRegistrationWithStatus:(id)a0;
- (id)_registrationTemplateView;
- (void)authMethodDidChange;
- (id)authenticationTemplateView;
- (void)didCompleteWithResult:(unsigned long long)a0 loginUserName:(id)a1 context:(id)a2 ssoTokens:(id)a3 tokenId:(id)a4 tokenHash:(id)a5 wrapTokenHash:(id)a6;
- (void)didCompleteWithResult:(unsigned long long)a0 tokenId:(id)a1 tokenHash:(id)a2 wrapTokenHash:(id)a3;
- (void)enableButtons:(BOOL)a0;
- (void)needsToRunWithCompletionHandler:(id /* block */)a0;
- (void)registrationComplete;
- (id)registrationTemplateView;
- (void)showProgressIsRunning:(BOOL)a0 waiting:(BOOL)a1;
- (void)showStartPage;
- (void)startConfigurationCheck;
- (void)startDeviceRegistration;
- (id)startRegistrationTemplateView;
- (void)startShowRegistrationStatusWithSuccess:(BOOL)a0 message:(id)a1;
- (void)startUserAuthentication;
- (void)startWaitingForExtensionConfiguration;
- (id)statusTemplateView;
- (id)waitingTemplateView;

@end
