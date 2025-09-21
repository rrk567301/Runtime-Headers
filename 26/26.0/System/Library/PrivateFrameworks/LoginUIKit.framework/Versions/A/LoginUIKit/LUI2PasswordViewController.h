@class NSView, NSTextField, NSString, NSStackView, NSVisualEffectView, LUI2SecureTextFieldViewController, LUI2TextFieldBackgroundView, NSObject, NSImageView, NSLayoutConstraint, NSControl;
@protocol OS_dispatch_queue;

@interface LUI2PasswordViewController : LUI2ViewController <LUI2SecureTextFieldViewControllerDelegate, NSStackViewDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (retain) LUI2TextFieldBackgroundView *backgroundView;
@property (retain) NSVisualEffectView *backBackgroundView;
@property (retain) NSVisualEffectView *helpBackgroundView;
@property (retain) NSVisualEffectView *loginBackgroundView;
@property (retain) NSStackView *stackView;
@property (retain) NSView *leftSpacer;
@property (retain) NSView *rightSpacer;
@property (retain) NSImageView *lockedStateImageView;
@property (retain) NSTextField *lockedStateLabel;
@property NSLayoutConstraint *backgroundWidthConstraint;
@property (readonly) LUI2SecureTextFieldViewController *secureTextFieldViewController;
@property (readonly) NSControl *backButton;
@property (readonly) NSControl *helpButton;
@property (readonly) NSControl *loginButton;
@property BOOL passwordFieldLocked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (void)setEnabled:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)stackView:(id)a0 didReattachViews:(id)a1;
- (void)stackView:(id)a0 willDetachViews:(id)a1;
- (void)_sleepWakeNotificationReceived:(id)a0;
- (void)_backgroundPressed:(id)a0;
- (void)_configureForSFAuthorizationPluginView;
- (void)_setHiddenState:(BOOL)a0 forLockHiddenView:(id)a1;
- (void)_updateBlendingMode:(id)a0;
- (void)increaseContrast:(BOOL)a0;
- (void)secureTextFieldTextDidChange:(id)a0;
- (void)shake;
- (void)updateTextLegibilityIfNeededWithImage:(id)a0 displayID:(unsigned int)a1 withCompletionHandler:(id /* block */)a2;
- (id)viewForPopover;

@end
