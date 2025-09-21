@class NSString, NSView, NSArray, NSColor;
@protocol LACUIAuthenticationDialog, LACUIAuthenticationSheetViewDelegate;

@interface LACUIAuthenticationSheetView : NSViewController <LACUIAuthenticationDialogDelegate, LACUIAuthenticationSheetView> {
    id<LACUIAuthenticationDialog> _form;
    NSString *_usePasswordLabel;
    NSString *_unlockLabel;
    BOOL _showingPasswordForm;
    BOOL _hasRemovedUsernameField;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSView *view;
@property (weak, nonatomic) id<LACUIAuthenticationSheetViewDelegate> delegate;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSColor *textColor;
@property (retain, nonatomic) NSString *prompt;
@property (retain, nonatomic) NSColor *promptColor;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSArray *usernames;
@property (retain, nonatomic) NSString *passwordLabelText;
@property (retain, nonatomic) NSString *passwordHint;
@property (retain, nonatomic) NSString *usePasswordButtonTitle;
@property (retain, nonatomic) NSString *unlockButtonTitle;
@property (nonatomic) BOOL isEnabled;

- (void)loadView;
- (void)_setup;
- (void).cxx_destruct;
- (void)focusUsername;
- (void)focusUsernameItemWithTitle:(id)a0;
- (void)hidePrompt;
- (void)removeUsername;
- (void)setCancelButtonEnabled:(BOOL)a0;
- (void)setIcon:(id)a0 badge:(id)a1;
- (void)setUsernameEnabled:(BOOL)a0;
- (void)showBiometricForm;
- (void)showPasswordFormAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)showUsername;
- (void)useCustomPasswordFieldView:(id)a0;
- (void)usernameShouldRefuseFirstResponder:(BOOL)a0;
- (void)_performUsePasswordButtonAction;
- (void)_configureUnlockButton;
- (void)_configureUsePasswordButton;
- (void)_performNegativeButtonAction;
- (void)_performUnlockButtonAction;
- (void)authDialog:(id)a0 passwordDidChange:(id)a1;
- (void)authDialog:(id)a0 usernameDidEndEditing:(id)a1;

@end
