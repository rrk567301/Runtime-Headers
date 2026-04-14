@class NSProgressIndicator, NSVisualEffectView;

@interface LUI2SpinnerViewController : LUI2ViewController

@property (retain) NSVisualEffectView *backgroundView;
@property BOOL drawsBackground;
@property (readonly) NSProgressIndicator *progressIndicator;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)init;
- (void)viewDidLayout;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLoad;
- (void)_setupView;

@end
