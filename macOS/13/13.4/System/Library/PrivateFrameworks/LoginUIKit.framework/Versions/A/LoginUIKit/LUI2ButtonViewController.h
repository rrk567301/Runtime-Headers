@class NSStackView;

@interface LUI2ButtonViewController : LUI2ViewController

@property NSStackView *stackView;

- (void)setEnabled:(BOOL)a0;
- (void)loadView;
- (void)viewDidLoad;
- (void)addButton:(id)a0;
- (void)_updateBlendingMode:(id)a0;

@end
