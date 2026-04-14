@class NSImageView, AKLargeSignInTextFieldBackgroundView, NSView, NSVisualEffectView, NSStackView;

@interface AKLargeSignInPromptViewController : AKSignInPromptViewController

@property (retain, nonatomic) NSStackView *contentStackView;
@property (retain, nonatomic) NSImageView *iconImageView;
@property (retain, nonatomic) NSView *authPromptContainer;
@property (retain, nonatomic) AKLargeSignInTextFieldBackgroundView *passwordFieldBackgroundView;
@property (retain, nonatomic) NSView *separatorView;
@property (retain, nonatomic) NSView *bottomBar;
@property (retain, nonatomic) NSVisualEffectView *bottomBarVisualEffectView;

- (id)init;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)controlTextDidChange:(id)a0;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)cancelButtonPressed:(id)a0;
- (void)enablePasswordInputField;
- (void)signInButtonPressed:(id)a0;
- (void)createButtonPressed:(id)a0;
- (void)forgotPasswordPressed:(id)a0;
- (void)_configureWindow;
- (void)_configureIcon;
- (void)_configureTitleLabel;
- (void)_configureBodyLabel;
- (void)_configureUsernameField;
- (void)_configurePasswordField;
- (void)_configureIForgotButton;
- (void)_configureErrorField;
- (void)_configurePrivacyView;
- (void)_configureBottomBar;
- (id)_attributedLinkString:(id)a0;
- (void)_hideError;

@end
