@interface GameCenterUI.LoadingView : GameCenterUI.BaseView {
    void /* unknown type, empty encoding */ progressIndicator;
    void /* unknown type, empty encoding */ label;
    void /* unknown type, empty encoding */ delayedAnimate;
}

@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL showsImmediately;

- (id)accessibilityLabel;
- (void)layout;
- (id)accessibilityValue;
- (BOOL)isAccessibilityElement;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityRole;
- (void).cxx_destruct;
- (id)accessibilityChildren;
- (void)viewWillMoveToSuperview:(id)a0;

@end
