@class ASNavigationController, NSString, ASCAuthorizationPresentationContext, SFWirelessSettingsController;
@protocol ASAuthorizationViewControllerDelegate;

@interface ASAuthorizationViewController : NSViewController <ASCredentialRequestPaneViewControllerDelegate, ASCredentialRequestContainerViewControllerDelegate, ASPasswordAuthenticationPaneViewControllerDelegate> {
    ASCAuthorizationPresentationContext *_presentationContext;
    ASNavigationController *_navigationController;
    SFWirelessSettingsController *_wirelessSettingsController;
}

@property (weak, nonatomic) id<ASAuthorizationViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidAppear;
- (id)_cancelBarButtonItem;
- (id)initWithPresentationContext:(id)a0;
- (void)_cancelButtonSelected:(id)a0;
- (id)navigationController;
- (void)requestPaneViewControllerPresentExpandedLoginChoiceInterface:(id)a0;
- (void)requestPaneViewController:(id)a0 dismissWithCredential:(id)a1 error:(id)a2;
- (void)requestPaneViewController:(id)a0 didRequestCredentialForLoginChoice:(id)a1 authenticatedContext:(id)a2 completionHandler:(id /* block */)a3;
- (void)requestPaneViewControllerPresentManualPasswordEntryInterface:(id)a0;
- (void)requestPaneViewControllerRequiresPINEntryInterface:(id)a0;
- (void)passwordAuthenticationViewController:(id)a0 validateUserEnteredPIN:(id)a1 completionHandler:(id /* block */)a2;
- (void)presentPINEntryInterface;
- (void)pushOrUpdateBasicPaneViewControllerWithError:(long long)a0;
- (void)updateInterfaceWithLoginChoices:(id)a0;
- (void)cableClientWillConnect;
- (void)cableClientWillAuthenticate;
- (id)_initialViewControllerForPresentationContext:(id)a0 expandingOtherLoginChoices:(BOOL)a1;
- (void)_presentPINEntryInterface;
- (void)_pushSecurityKeyViewControllerWithOverrideSubtitle:(id)a0;
- (void)_pushCABLEConnectingViewController;
- (void)_pushCABLEAuthenticatingViewController;
- (id)_initialViewControllerForPresentationContext:(id)a0;
- (void)_startCABLEClientForSingleLoginChoiceIfNeeded;
- (id)_setUpContainerViewControllerWithCredentialRequestViewController:(id)a0;
- (id)_securityKeyRequestViewController;
- (id)_securityKeyRequestViewControllerWithOverrideSubtitle:(id)a0;
- (id)_cableClientViewControllerWithLoginChoice:(id)a0;
- (void)_showEnableBluetoothViewControllerForCABLEClientWithLoginChoice:(id)a0;
- (void)_startCABLEClientWithLoginChoice:(id)a0;
- (void)_enableBluetoothAndShowCABLEClientViewControllerWithLoginChoice:(id)a0;
- (void)_pushCABLEClientViewControllerForCABLELoginChoice:(id)a0;
- (void)_pushSecurityKeyViewController;
- (void)_presentManualPasswordEntryInterface;
- (void)requestContainerViewControllerDidDismiss:(id)a0;
- (void)passwordAuthenticationViewController:(id)a0 completedWithManuallyEnteredPasswordCredential:(id)a1;
- (id)_setUpInitialViewController;

@end
