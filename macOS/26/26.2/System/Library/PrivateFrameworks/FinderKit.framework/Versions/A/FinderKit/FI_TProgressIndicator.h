@interface FI_TProgressIndicator : NSProgressIndicator

@property (nonatomic) BOOL animateWhenIndeterminate;

- (void)setIndeterminate:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidMoveToWindow;
- (void)initCommon;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
