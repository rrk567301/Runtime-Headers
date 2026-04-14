@class NSTextField, ASCAuthorizationPresentationContext, ASCredentialRequestButtonContinue, NSLayoutConstraint;
@protocol ASPasswordAuthenticationPaneViewControllerDelegate;

@interface ASPasswordAuthenticationPaneViewController : ASCredentialRequestPaneViewController {
    ASCAuthorizationPresentationContext *_presentationContext;
    double _keyboardHeight;
    unsigned long long _persona;
    NSTextField *_titleLabel;
    NSTextField *_subtitleLabel;
    NSTextField *_usernameField;
    NSTextField *_secureTextField;
    ASCredentialRequestButtonContinue *_signInButton;
    NSLayoutConstraint *_paneHeaderStackViewBottomKeyboardConstraint;
}

@property (weak, nonatomic) id<ASPasswordAuthenticationPaneViewControllerDelegate> authenticationDelegate;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)_createViews;
- (void)_setConstraints;
- (id)_titleLabelText;
- (void)_setUpSubtitleLabel;
- (id)_secureTextFieldPlaceholderText;
- (void)_signInButtonTapped;
- (double)_topViewMargin;
- (void)_setUpAndAddIconImage;
- (double)_containerViewHorizontalMargin;
- (double)_secureTextFieldInsetMargin;
- (id)_manualPasswordEntryTitleLabelText;
- (id)_activateSecurityKeySubtitleText;
- (void)_pinValidationFailedWithError:(id)a0;
- (id)_subtitleTextForPINValidationError:(id)a0;
- (id)initWithPersona:(unsigned long long)a0 presentationContext:(id)a1;
- (double)_signInButtonInsetMargin;

@end
