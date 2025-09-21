@class NSTextField, NSString, NSArray, NSView, NSSecureTextField, NSStackView, NSColor, NSPopUpButton, NSLayoutConstraint, _LAUIAuthenticationLabel;
@protocol _LAUIAuthenticationDialogDelegate, _LAUIAuthenticationDialogPasswordFieldProvider;

@interface _LAUIAuthenticationDialogVC : _LAUIAuthenticationAlertVC <NSTextFieldDelegate, _LAUIAuthenticationDialog> {
    NSStackView *_formStackView;
    _LAUIAuthenticationLabel *_promptLabel;
    NSStackView *_usernameStackView;
    NSTextField *_usernameField;
    NSPopUpButton *_usernamePopUp;
    NSStackView *_passwordStackView;
    NSSecureTextField *_passwordField;
    _LAUIAuthenticationLabel *_passwordHint;
    NSStackView *_verifyPasswordStackView;
    NSSecureTextField *_verifyPasswordField;
    NSLayoutConstraint *_passwordStackViewZeroHeightConstraint;
    char _hiddenPasswordFieldReceivesKeyboardEvents;
}

@property (weak, nonatomic) id<_LAUIAuthenticationDialogPasswordFieldProvider> customPasswordFieldProvider;
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
@property (nonatomic) char enabled;
@property (nonatomic) char useCustomTouchBar;

- (void).cxx_destruct;
- (void)controlTextDidChange:(id)a0;
- (void)setup;
- (void)showPassword;
- (void)hideVerifyField;
- (void)showVerifyField;
- (char)_isPasswordFieldHidden;
- (char)_isUsernameFieldHidden;
- (void)_keyboardEventHandler;
- (void)_notifyDelegateAfterUserEntry:(id)a0;
- (void)_notifyDelegateAfterUserSelection:(id)a0;
- (void)addCustomView:(id)a0 spacing:(id)a1;
- (void)focusPassword;
- (void)focusUsername;
- (void)focusUsernameWithTitle:(id)a0;
- (void)hidePassword;
- (void)hidePasswordAndReceiveKeyboardEvents:(char)a0;
- (void)hidePasswordHint;
- (void)hideUsername;
- (char)isPasswordEnabled;
- (char)isUsernameEnabled;
- (void)setPasswordEnabled:(char)a0;
- (void)setPasswordFieldSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setPasswordShouldRefuseFirstResponder:(char)a0;
- (void)setUsernameEnabled:(char)a0;
- (void)setUsernameShouldRefuseFirstResponder:(char)a0;
- (void)showPasswordHint;
- (void)showUsername;
- (void)useCustomPasswordView:(id)a0;

@end
