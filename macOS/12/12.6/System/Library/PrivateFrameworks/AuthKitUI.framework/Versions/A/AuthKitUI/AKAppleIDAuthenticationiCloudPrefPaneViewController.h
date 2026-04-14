@class NSTextField, NSView, NSProgressIndicator, NSString, AKPaddedTextFieldCell, OBPrivacyLinkController, NSLayoutConstraint, NSButton;

@interface AKAppleIDAuthenticationiCloudPrefPaneViewController : NSViewController <AKAppleIDAuthenticationInAppContextPasswordDelegate>

@property (retain) NSProgressIndicator *progressIndicator;
@property (copy) id /* block */ passwordHandler;
@property (retain) OBPrivacyLinkController *privacyController;
@property (retain) NSButton *loginButton;
@property (retain) NSButton *forgotButton;
@property (retain) NSButton *createButton;
@property (retain) NSTextField *usernameField;
@property (retain) AKPaddedTextFieldCell *paddedUserNameCell;
@property (retain) NSTextField *passwordField;
@property (retain) NSView *privacyView;
@property (retain) NSTextField *usernameTitle;
@property (retain) NSTextField *passwordTitle;
@property (retain) NSLayoutConstraint *loginViewHeight;
@property (setter=setUsernameEditable:) BOOL isUsernameEditable;
@property (retain) NSString *initialUsername;
@property (retain) NSString *loginButtonString;
@property long long selectedButton;
@property (retain) NSString *privacyBundleIdentifier;
@property (copy) id /* block */ loginButtonAction;
@property (copy) id /* block */ forgotButtonAction;
@property (copy) id /* block */ createButtonAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)controlTextDidChange:(id)a0;
- (void)_disableUserInteraction;
- (void)showError:(id)a0;
- (void)forgotPasswordPressed:(id)a0;
- (void)_addPrivacyView:(id)a0;
- (void)setPasswordFieldHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)_stopSpinner;
- (void)_startSpinner;
- (void)allowUserInteraction;
- (void)context:(id)a0 needsPasswordWithCompletion:(id /* block */)a1;
- (void)disableUserInteractionAndStartSpinner;
- (void)defaultButtonPressed:(id)a0;
- (void)createPasswordPressed:(id)a0;

@end
