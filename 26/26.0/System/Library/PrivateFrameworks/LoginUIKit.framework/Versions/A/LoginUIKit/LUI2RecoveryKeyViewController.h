@class NSControl, NSString, NSVisualEffectView, LUI2TextFieldBackgroundView, LUI2TextFieldViewController;

@interface LUI2RecoveryKeyViewController : LUI2ViewController <NSTextFieldDelegate>

@property (retain) NSVisualEffectView *backBackgroundView;
@property (readonly) LUI2TextFieldBackgroundView *backgroundView;
@property (readonly) LUI2TextFieldViewController *textFieldViewController;
@property (readonly) NSControl *backButton;
@property (readonly) NSControl *loginButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)controlTextDidChange:(id)a0;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)_backgroundPressed:(id)a0;
- (void)shake;
- (id)viewForPopover;

@end
