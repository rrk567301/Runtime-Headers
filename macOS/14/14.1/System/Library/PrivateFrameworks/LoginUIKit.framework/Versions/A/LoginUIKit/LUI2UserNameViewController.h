@class LUI2TextFieldViewController;

@interface LUI2UserNameViewController : LUI2ViewController

@property (readonly) LUI2TextFieldViewController *textFieldViewController;

- (void)dealloc;
- (void)setEnabled:(BOOL)a0;
- (void)loadView;
- (void)viewDidLoad;
- (void)_backgroundPressed:(id)a0;
- (void)_updateBlendingMode:(id)a0;
- (void)increaseContrast:(BOOL)a0;
- (BOOL)updateTextLegibilityIfNeededWithImage:(id)a0 displayID:(unsigned int)a1;

@end
