@class NSView, NSString, NSArray, LACUITextField, LACUIAuthenticationLabel, NSStackView, NSColor, NSPopUpButton, LACUISecureTextField, NSLayoutConstraint;
@protocol LACUIAuthenticationDialogPasswordFieldProvider, LACUIAuthenticationDialogDelegate;

@interface LACUIAuthenticationDialog : LACUIAuthenticationAlert <LACUITextFieldDelegate, LACUIAuthenticationDialog> {
    NSStackView *_formStackView;
    LACUIAuthenticationLabel *_promptLabel;
    NSStackView *_usernameStackView;
    LACUITextField *_usernameField;
    NSPopUpButton *_usernamePopUp;
    NSStackView *_passwordStackView;
    LACUISecureTextField *_passwordField;
    LACUIAuthenticationLabel *_passwordHint;
    NSStackView *_verifyPasswordStackView;
    LACUISecureTextField *_verifyPasswordField;
    NSLayoutConstraint *_passwordStackViewZeroHeightConstraint;
    BOOL _hiddenPasswordFieldReceivesKeyboardEvents;
}

@property (weak, nonatomic) id<LACUIAuthenticationDialogPasswordFieldProvider> customPasswordFieldProvider;
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
@property (weak, nonatomic) id<LACUIAuthenticationDialogDelegate> delegate;
@property (copy) NSString *title;
@property (copy) NSColor *titleColor;
@property (retain, nonatomic) NSString *titleTooltip;
@property (retain, nonatomic) NSString *text;
@property (copy, nonatomic) NSColor *textColor;
@property (retain, nonatomic) NSView *accessoryView;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL useCustomTouchBar;

- (void)controlTextDidChange:(id)a0;
- (void)setup;
- (void).cxx_destruct;
- (void)showPassword;
- (void)hideVerifyField;
- (void)showVerifyField;
- (void)addCustomView:(id)a0 spacing:(id)a1;
- (void)focusPassword;
- (void)focusUsername;
- (void)focusUsernameWithTitle:(id)a0;
- (void)hidePassword;
- (void)hidePasswordAndReceiveKeyboardEvents:(BOOL)a0;
- (void)hidePasswordHint;
- (void)hideUsername;
- (BOOL)isPasswordEnabled;
- (BOOL)isUsernameEnabled;
- (void)setPasswordEnabled:(BOOL)a0;
- (void)setPasswordFieldSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setPasswordShouldRefuseFirstResponder:(BOOL)a0;
- (void)setUsernameEnabled:(BOOL)a0;
- (void)setUsernameShouldRefuseFirstResponder:(BOOL)a0;
- (void)showPasswordHint;
- (void)showUsername;
- (void)useCustomPasswordView:(id)a0;
- (BOOL)_isPasswordFieldHidden;
- (BOOL)_isUsernameFieldHidden;
- (void)_keyboardEventHandler;
- (void)_notifyDelegateAfterUserEntry:(id)a0;
- (void)_notifyDelegateAfterUserSelection:(id)a0;

@end
