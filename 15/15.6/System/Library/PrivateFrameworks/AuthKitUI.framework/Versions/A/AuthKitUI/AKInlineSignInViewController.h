@class NSTextField, NSView, NSProgressIndicator, NSString, AKAppleIDAuthenticationController, AKRoundLoginContainerView, NSLayoutConstraint, NSButton;

@interface AKInlineSignInViewController : AKBaseSignInViewController <AKAppleIDAuthenticationDelegate, AKAppleIDAuthenticationInAppContextPasswordDelegate, AKAppleIDAuthenticationInAppContextAlertDelegate> {
    char _usesDarkMode;
    char _usesCenteringContainerView;
    AKAppleIDAuthenticationController *_authenticationController;
    char _userInteractionEnabled;
    char _isCreateAppleIDAllowed;
}

@property (retain, nonatomic) NSView *signInView;
@property (retain, nonatomic) NSTextField *usernameTextField;
@property (retain, nonatomic) NSTextField *passwordTextField;
@property (retain, nonatomic) NSTextField *errorTextField;
@property (retain, nonatomic) NSButton *signInButton;
@property (retain, nonatomic) NSButton *forgotButton;
@property (retain, nonatomic) NSButton *createAccountButton;
@property (retain, nonatomic) AKRoundLoginContainerView *roundLoginContainerView;
@property (retain, nonatomic) NSLayoutConstraint *roundLoginContainerHeight;
@property (retain, nonatomic) NSProgressIndicator *indeterminateSpinner;
@property (copy, nonatomic) id /* block */ passwordHandler;
@property (nonatomic) char wantsAuthenticationProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)awakeFromNib;
- (void)controlTextDidChange:(id)a0;
- (void)loadView;
- (void)viewDidAppear;
- (id)authenticationController;
- (void)authenticationController:(id)a0 shouldContinueWithAuthenticationResults:(id)a1 error:(id)a2 forContext:(id)a3 completion:(id /* block */)a4;
- (char)_attemptDisplayAlertForError:(id)a0;
- (void)_authenticateWithCredentialRecovery:(char)a0 needsNewAppleID:(char)a1;
- (id)_formatUsernameAsPhoneNumberIfNeeded:(id)a0;
- (char)_isSatisfyingPasswordRequirements;
- (void)_provideDelegateWithAuthResults:(id)a0 error:(id)a1;
- (void)_setPasswordFieldHidden:(char)a0 animated:(char)a1;
- (void)allowUserInteraction:(char)a0;
- (void)context:(id)a0 needsPasswordWithCompletion:(id /* block */)a1;
- (void)createAccountButtonClicked:(id)a0;
- (void)displayAlertForContext:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (void)forgotButtonClicked:(id)a0;
- (void)refreshButtonsState;
- (void)setUsesDarkMode:(char)a0;
- (void)showIndeterminateSpinner:(char)a0;
- (void)signInButtonClicked:(id)a0;
- (void)updateUIToReflectDarkMode;
- (char)usesDarkMode;

@end
