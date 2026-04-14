@class NUIContainerView;

@interface NUITableViewContainerCell : NSView

@property (class, readonly, nonatomic) Class containerViewClass;

@property (readonly, nonatomic) NUIContainerView *containerView;

- (BOOL)_layoutHeightDependsOnWidth;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)_axesForDerivingIntrinsicContentSizeFromLayoutSize;
- (void)containerViewDidLoad;

@end
