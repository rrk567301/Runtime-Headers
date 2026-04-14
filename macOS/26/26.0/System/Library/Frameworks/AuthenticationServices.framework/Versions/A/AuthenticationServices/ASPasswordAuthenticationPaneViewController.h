@class NSTextField, NSString, ASPasswordAuthenticationPaneViewControllerConfiguration, ASCredentialRequestButtonContinue, ASCredentialRequestPaneHeaderConfiguration, NSLayoutConstraint;
@protocol ASPasswordAuthenticationPaneViewControllerDelegate;

@interface ASPasswordAuthenticationPaneViewController : ASCredentialRequestPaneViewController {
    ASPasswordAuthenticationPaneViewControllerConfiguration *_configuration;
    ASCredentialRequestPaneHeaderConfiguration *_headerConfiguration;
    double _keyboardHeight;
    NSString *_firstPINForNewPINEntry;
    NSTextField *_usernameField;
    NSTextField *_secureTextField;
    ASCredentialRequestButtonContinue *_signInButton;
    NSLayoutConstraint *_paneHeaderStackViewBottomKeyboardConstraint;
}

@property (weak, nonatomic) id<ASPasswordAuthenticationPaneViewControllerDelegate> authenticationDelegate;

- (void)viewDidLoad;
- (void)viewDidAppear;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)_createViews;
- (id)_secureTextFieldPlaceholderText;
- (void)_setConstraints;
- (id)_titleLabelFont;
- (void)_addCenteredHeaderView:(id)a0 margins:(double)a1 height:(double)a2 customSpacingAfter:(double)a3;
- (double)_secureTextFieldInsetMargin;
- (void)_setUpHeader;
- (double)_signInButtonInsetMargin;
- (void)_signInButtonTapped;
- (id)_subtitleLabelFont;
- (id)_titleLabelTextColor;

@end
