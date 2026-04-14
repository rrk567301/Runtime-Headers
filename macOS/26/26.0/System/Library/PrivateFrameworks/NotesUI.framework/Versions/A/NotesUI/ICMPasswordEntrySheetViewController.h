@class NSTextField, ICMClickableTextView, NSSecureTextField, NSString, ICMAlertSheetTouchBarController, ICAuthenticationPrompt, NSTouchBar, NSTextView, NSLayoutConstraint, NSImageView, NSButton;

@interface ICMPasswordEntrySheetViewController : NSViewController <NSTextFieldDelegate, NSTouchBarProvider, ICMClickableTextViewDelegate>

@property (weak, nonatomic) NSButton *okButton;
@property (weak, nonatomic) NSButton *cancelButton;
@property (weak, nonatomic) NSButton *resetPasswordButton;
@property (weak, nonatomic) NSImageView *iconImageView;
@property (weak, nonatomic) NSTextField *titleLabel;
@property (weak, nonatomic) ICMClickableTextView *subtitleClickableTextView;
@property (nonatomic) BOOL shouldDisplayLearnMoreLink;
@property (weak, nonatomic) NSSecureTextField *secureTextField;
@property (weak, nonatomic) NSTextField *passwordLabel;
@property (weak, nonatomic) NSTextView *hintTextView;
@property (weak, nonatomic) NSLayoutConstraint *hintTextViewHeightConstraint;
@property (nonatomic) unsigned long long authenticationResult;
@property (nonatomic) long long failedAttempts;
@property (readonly, nonatomic) NSString *hintStringForCurrentIntent;
@property (weak, nonatomic) NSLayoutConstraint *subtitleTextViewHeightConstraint;
@property (retain, nonatomic) NSString *subtitleText;
@property (retain, nonatomic) ICMAlertSheetTouchBarController *touchBarController;
@property (readonly, nonatomic) ICAuthenticationPrompt *prompt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSTouchBar *touchBar;

+ (id)preferredHintAccount;

- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)cancelButtonPressed:(id)a0;
- (void)okButtonPressed:(id)a0;
- (void)setupAccessibility;
- (id)initWithPrompt:(id)a0;
- (void)applySubtitleTextToSubtitleClickableTextView:(id)a0;
- (void)calcAndResizeHintTextView;
- (void)clickableTextViewDidClick:(id)a0;
- (void)closeSheetWithReturnCode:(long long)a0;
- (void)resetNotesPasswordPressed:(id)a0;
- (void)setHintString:(id)a0 withColor:(id)a1;
- (void)setUpWithPrompt:(id)a0;
- (void)showHint;

@end
