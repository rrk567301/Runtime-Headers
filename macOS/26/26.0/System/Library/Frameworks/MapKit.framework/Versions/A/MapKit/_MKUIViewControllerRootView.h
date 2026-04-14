@class _MKUIViewController;

@interface _MKUIViewControllerRootView : NSView

@property (weak, nonatomic) _MKUIViewController *viewController;

- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void)_commonInit;
- (id)initWithViewController:(id)a0;
- (BOOL)isFlipped;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
