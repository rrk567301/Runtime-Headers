@class NSTextField, ICMClickableTextView, NSSecureTextField, NSScrollView, ICMAlertSheetTouchBarController, NSString, NSTextView, NSLayoutConstraint, NSButton, ICAccount;

@interface ICMPasswordChangeSheetViewController : NSViewController <ICMClickableTextViewDelegate>

@property (retain, nonatomic) ICAccount *account;
@property (weak, nonatomic) NSTextField *titleLabel;
@property (weak, nonatomic) NSTextField *oldPasswordLabel;
@property (weak, nonatomic) NSTextField *passwordLabel;
@property (weak, nonatomic) NSTextField *verifyLabel;
@property (weak, nonatomic) NSTextField *hintLabel;
@property (weak, nonatomic) NSTextField *passwordAndVerifyDoNotMatchLabel;
@property (weak, nonatomic) NSTextField *passwordHintWarningLabel;
@property ICMClickableTextView *disclaimerTextView;
@property NSTextView *oldPasswordIncorrectTextView;
@property (weak, nonatomic) NSLayoutConstraint *oldPasswordIncorrectTextViewHeightConstraint;
@property (weak, nonatomic) NSLayoutConstraint *disclaimerHeightConstraint;
@property (weak, nonatomic) NSSecureTextField *oldPasswordTextField;
@property (weak, nonatomic) NSSecureTextField *passwordTextField;
@property (weak, nonatomic) NSSecureTextField *verifyTextField;
@property (weak, nonatomic) NSTextField *hintTextField;
@property (weak, nonatomic) NSButton *confirmButton;
@property (weak, nonatomic) NSButton *resetNotesButton;
@property (weak, nonatomic) NSButton *cancelButton;
@property (nonatomic) BOOL isSetupForChangePassword;
@property (nonatomic) BOOL didAuthenticateWithBiometrics;
@property (readonly, nonatomic) BOOL isSetupForInitialPassword;
@property (readonly, nonatomic) BOOL passwordAndVerifyTextFieldsMatch;
@property (nonatomic) BOOL didAttemptToSubmitWithoutHint;
@property (weak, nonatomic) NSLayoutConstraint *firstFieldHeightLayoutConstraint;
@property (nonatomic) long long incorrectPasswordAttempts;
@property (weak, nonatomic) NSScrollView *oldPasswordIncorrectTextViewScrollView;
@property (retain, nonatomic) ICMAlertSheetTouchBarController *touchBarController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)touchBar;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)cancelButtonPressed:(id)a0;
- (BOOL)validateInput;
- (void)setupAccessibility;
- (void)clickableTextViewDidClick:(id)a0;
- (void)calcAndResizeHintTextView;
- (void)confirmButtonPressed:(id)a0;
- (void)resetNotesPressed:(id)a0;
- (void)closeSheetWithResponse:(long long)a0;
- (void)setUpForAddingPasswordWithAccount:(id)a0;
- (void)setUpForChangePasswordWithAccount:(id)a0 didAuthenticateWithBiometrics:(BOOL)a1;
- (void)resetTextFields;
- (void)setOldPasswordIncorrectString:(id)a0 withColor:(id)a1;
- (void)setUpDisclaimerTextView;
- (id)disclaimerWarningStringAndHasMultiplePasswordCapableAccounts:(BOOL)a0;

@end
