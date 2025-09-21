@class NSProgressIndicator, UXView, NSLayoutConstraint;

@interface KHActivityOverlay : UXView {
    char _isInView;
}

@property (readonly, nonatomic) NSProgressIndicator *indicatorView;
@property (readonly, nonatomic) NSLayoutConstraint *horizontalBezelConstraint;
@property (readonly, nonatomic) NSLayoutConstraint *verticalBezelConstraint;
@property (readonly, nonatomic) UXView *bezelView;
@property (nonatomic) long long showCount;

+ (long long)indicatorViewStyleForOverlayStyle:(long long)a0;
+ (void)showInView:(id)a0 withTimeThreshold:(double)a1 workBlock:(id /* block */)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)dismissAnimated:(char)a0;
- (char)isVisible;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)showInView:(id)a0 withOffset:(struct CGPoint { double x0; double x1; })a1 animated:(char)a2;
- (id)initWithActivityOverlayStyle:(long long)a0;
- (void)showInView:(id)a0 withTimeThreshold:(double)a1;

@end
