@class NSTextField, NSView, NSString, NSArray, NSColor, NSPopUpButton, NSMutableArray, NSImageView, NSButton;
@protocol LAUIAuthenticationSheetViewDelegate;

@interface LAUIAuthenticationSheetLegacyView : NSViewController <LAUIAuthenticationSheetView> {
    BOOL _showingPasswordForm;
    NSMutableArray *_activeElements;
}

@property (weak, nonatomic) NSImageView *appIcon;
@property (weak, nonatomic) NSImageView *authIcon;
@property (weak, nonatomic) NSTextField *authTitleLabel;
@property (weak, nonatomic) NSTextField *authSubTitleLabel;
@property (weak, nonatomic) NSTextField *usernameLabel;
@property (weak, nonatomic) NSTextField *usernameField;
@property (weak, nonatomic) NSPopUpButton *smartCardPopup;
@property (weak, nonatomic) NSTextField *passwordLabel;
@property (weak, nonatomic) NSView *passwordFieldContainer;
@property (weak, nonatomic) NSView *footerContainerView;
@property (weak, nonatomic) NSView *usePasswordOrCancelFooter;
@property (weak, nonatomic) NSView *usernameAndPasswordFooter;
@property (weak, nonatomic) NSButton *cancelButton;
@property (weak, nonatomic) NSButton *unlockButton;
@property (weak, nonatomic) NSButton *usePasswordButton;
@property (readonly, nonatomic) NSView *view;
@property (weak, nonatomic) id<LAUIAuthenticationSheetViewDelegate> delegate;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)viewWillAppear;
- (void)_setupTouchBar;
- (void)_enabledObjects:(id)a0 forView:(id)a1;
- (void)didEditSmartCardUser:(id)a0;
- (void)cancelButtonAction:(id)a0;
- (void)usePasswordButtonAction:(id)a0;
- (void)didEditUsername:(id)a0;
- (void)unlockButtonAction:(id)a0;
- (void)setIcon:(id)a0 badge:(id)a1;
- (void)hidePrompt;
- (void)setUsernameEnabled:(BOOL)a0;
- (void)removeUsername;
- (void)showUsername;
- (void)usernameShouldRefuseFirstResponder:(BOOL)a0;
- (void)focusUsername;
- (void)focusUsernameItemWithTitle:(id)a0;
- (void)useCustomPasswordFieldView:(id)a0;
- (BOOL)shouldUseAlternatePasswordStyle;
- (BOOL)shouldUseLabelAsPasswordPlaceholderString;
- (void)showPasswordFormAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)showBiometricForm;
- (void)setCancelButtonEnabled:(BOOL)a0;

@end
