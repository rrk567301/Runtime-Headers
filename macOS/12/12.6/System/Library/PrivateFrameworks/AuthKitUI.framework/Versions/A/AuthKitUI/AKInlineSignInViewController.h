@class NSTextField, NSView, NSProgressIndicator, NSString, AKAppleIDAuthenticationController, AKRoundLoginContainerView, NSLayoutConstraint, NSButton;

@interface AKInlineSignInViewController : AKBaseSignInViewController <AKAppleIDAuthenticationDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate, AKAppleIDAuthenticationInAppContextAlertDelegate> {
    BOOL _usesDarkMode;
    BOOL _usesCenteringContainerView;
    AKAppleIDAuthenticationController *_authenticationController;
    BOOL _userInteractionEnabled;
    BOOL _isCreateAppleIDAllowed;
}

@property (retain) NSView *signInView;
@property (retain) NSTextField *usernameLabel;
@property (retain) NSTextField *passwordLabel;
@property (retain) NSTextField *usernameTextField;
@property (retain) NSTextField *passwordTextField;
@property (retain) NSTextField *errorTextField;
@property (retain) NSButton *signInButton;
@property (retain) NSButton *forgotButton;
@property (retain) NSButton *createAccountButton;
@property (retain) AKRoundLoginContainerView *roundLoginContainerView;
@property (retain) NSLayoutConstraint *roundLoginContainerHeight;
@property (retain) NSProgressIndicator *indeterminateSpinner;
@property (copy) id /* block */ passwordHandler;
@property BOOL wantsAuthenticationProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)awakeFromNib;
- (void)controlTextDidChange:(id)a0;
- (void)viewDidAppear;
- (id)authenticationController;
- (void)authenticationController:(id)a0 shouldContinueWithAuthenticationResults:(id)a1 error:(id)a2 forContext:(id)a3 completion:(id /* block */)a4;
- (void)refreshButtonsState;
- (void)context:(id)a0 needsPasswordWithCompletion:(id /* block */)a1;
- (BOOL)_isSatisfyingPasswordRequirements;
- (void)_setPasswordFieldHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)_provideDelegateWithAuthResults:(id)a0 error:(id)a1;
- (BOOL)usesDarkMode;
- (void)setUsesDarkMode:(BOOL)a0;
- (void)displayAlertForContext:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)updateUIToReflectDarkMode;
- (void)showIndeterminateSpinner:(BOOL)a0;
- (void)allowUserInteraction:(BOOL)a0;
- (BOOL)_attemptDisplayAlertForError:(id)a0;
- (void)_authenticateWithCredentialRecovery:(BOOL)a0 needsNewAppleID:(BOOL)a1;
- (void)signInButtonClicked:(id)a0;
- (void)forgotButtonClicked:(id)a0;
- (void)createAccountButtonClicked:(id)a0;

@end
