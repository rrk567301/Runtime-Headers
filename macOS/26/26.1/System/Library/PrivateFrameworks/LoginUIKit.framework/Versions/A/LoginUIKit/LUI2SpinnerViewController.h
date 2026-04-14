@class NSProgressIndicator, NSVisualEffectView;

@interface LUI2SpinnerViewController : LUI2ViewController

@property (retain) NSVisualEffectView *backgroundView;
@property BOOL drawsBackground;
@property (readonly) NSProgressIndicator *progressIndicator;

- (void)viewDidLoad;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidLayout;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)_setupView;

@end
