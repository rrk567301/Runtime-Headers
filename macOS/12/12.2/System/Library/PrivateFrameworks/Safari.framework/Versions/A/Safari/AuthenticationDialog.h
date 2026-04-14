@class NSTextField, NSLayoutConstraint, AuthenticationPanel, NSButton;

@interface AuthenticationDialog : NSObject {
    AuthenticationPanel *_panel;
    NSLayoutConstraint *_smallLabelToSeparateRealmLabelVerticalSpacingConstraint;
    NSLayoutConstraint *_logInButtonToRememberThisPasswordCheckboxVerticalSpacingConstraint;
    NSTextField *_mainLabel;
    NSTextField *_passwordTextField;
    NSTextField *_smallLabel;
    NSTextField *_usernameTextField;
    NSButton *_rememberPasswordCheckbox;
    struct RefPtr<Safari::AuthenticationSheetRequest, WTF::RawPtrTraits<Safari::AuthenticationSheetRequest>, WTF::DefaultRefDerefTraits<Safari::AuthenticationSheetRequest>> { struct AuthenticationSheetRequest *m_ptr; } _sheetRequest;
    BOOL _useStopModalWithCodeToEndAuthenticationDialog;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)cancel:(id)a0;
- (BOOL)loadNib;
- (void)logIn:(id)a0;
- (void)_endAuthenticationDialogWithReturnCode:(long long)a0;
- (void)_hideRememberThisPasswordCheckboxIfNecessary;
- (void)_handleAuthenticationDialogReturnCode:(long long)a0;
- (id)initWithSheetRequest:(void *)a0;
- (void)runAsSheetOnWindow:(id)a0;

@end
