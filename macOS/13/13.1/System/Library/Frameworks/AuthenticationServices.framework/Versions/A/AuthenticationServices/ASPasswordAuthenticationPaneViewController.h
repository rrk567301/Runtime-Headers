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
- (void)viewDidAppear;
- (void)_createViews;
- (void)_setConstraints;
- (void)_signInButtonTapped;
- (id)initWithPersona:(unsigned long long)a0 presentationContext:(id)a1;
- (void)_setUpAndAddIconImage;
- (void)_setUpSubtitleLabel;
- (id)_titleLabelText;
- (id)_securityKeyTitleLabelText;
- (id)_manualPasswordEntryTitleLabelText;
- (id)_secureTextFieldPlaceholderText;
- (double)_topViewMargin;
- (double)_containerViewHorizontalMargin;
- (double)_signInButtonInsetMargin;
- (double)_secureTextFieldInsetMargin;
- (id)_titleLabelFont;
- (id)_titleLabelTextColor;
- (id)_subtitleLabelFont;

@end
