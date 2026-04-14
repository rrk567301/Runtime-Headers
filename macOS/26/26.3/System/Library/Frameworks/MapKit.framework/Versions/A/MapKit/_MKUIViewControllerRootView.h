@class _MKUIViewController;

@interface _MKUIViewControllerRootView : NSView

@property (weak, nonatomic) _MKUIViewController *viewController;

- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)layout;
- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
