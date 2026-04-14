@class NSTextField, NSString, NSArray, NSView, NSSecureTextField, NSStackView, NSPopUpButton, NSColor, NSLayoutConstraint;
@protocol _LAUIAuthenticationDialogDelegate;

@interface _LAUIAuthenticationDialogVC : _LAUIAuthenticationAlertVC <NSTextFieldDelegate, _LAUIAuthenticationDialog> {
    NSView *_formView;
    NSStackView *_stackView;
    NSTextField *_promptLabel;
    NSStackView *_usernameStackView;
    NSTextField *_usernameField;
    NSPopUpButton *_usernamePopUp;
    NSStackView *_passwordStackView;
    NSStackView *_innerPasswordStackView;
    NSSecureTextField *_passwordField;
    NSTextField *_passwordHint;
    NSStackView *_verifyPasswordStackView;
    NSSecureTextField *_verifyPasswordField;
    NSLayoutConstraint *_passwordStackViewLeadingConstraint;
    NSLayoutConstraint *_passwordStackViewTrailingConstraint;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *prompt;
@property (copy, nonatomic) NSColor *promptColor;
@property (retain, nonatomic) NSString *usernameLabelText;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSArray *usernames;
@property (retain, nonatomic) NSString *passwordLabelText;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSString *passwordHintText;
@property (retain, nonatomic) NSString *verifyPasswordLabelText;
@property (readonly, nonatomic) NSString *verifyPassword;
@property (weak, nonatomic) id<_LAUIAuthenticationDialogDelegate> delegate;
@property (copy) NSString *title;
@property (copy) NSColor *titleColor;
@property (retain, nonatomic) NSString *titleTooltip;
@property (retain, nonatomic) NSString *text;
@property (copy, nonatomic) NSColor *textColor;
@property (retain, nonatomic) NSView *accessoryView;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL useCustomTouchBar;

- (void).cxx_destruct;
- (void)controlTextDidChange:(id)a0;
- (void)setup;
- (void)showPassword;
- (void)setUsernameEnabled:(BOOL)a0;
- (void)showUsername;
- (void)focusUsername;
- (void)setPasswordEnabled:(BOOL)a0;
- (void)showPasswordHint;
- (void)hidePasswordHint;
- (void)useCustomPasswordView:(id)a0;
- (void)hideUsername;
- (void)hidePassword;
- (void)focusUsernameWithTitle:(id)a0;
- (void)setUsernameShouldRefuseFirstResponder:(BOOL)a0;
- (void)_notifyDelegateAfterUserEntry:(id)a0;
- (void)_notifyDelegateAfterUserSelection:(id)a0;
- (BOOL)isUsernameEnabled;
- (void)focusPassword;
- (BOOL)isPasswordEnabled;
- (void)setPasswordShouldRefuseFirstResponder:(BOOL)a0;
- (void)showVerifyField;
- (void)hideVerifyField;
- (void)addCustomView:(id)a0 spacing:(id)a1;

@end
