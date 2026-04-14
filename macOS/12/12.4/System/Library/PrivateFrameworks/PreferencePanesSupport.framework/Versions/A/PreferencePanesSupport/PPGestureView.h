@class NSTimer;

@interface PPGestureView : NSView {
    struct CGGradient { } *mGradient;
    NSTimer *mAnimationTimer;
    double mAnimationStartTime;
    double mAnimationPercent;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mSelectedRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mAnimationStartRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mAnimatingRect;
}

@property long long selectionType;
@property (readonly) double animationTotalTime;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isAnimating;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_startAnimation;
- (void)_stopAnimation;
- (void)_animationTimer:(id)a0;
- (void)highlightGestureRow:(id)a0 animate:(BOOL)a1;
- (double)_animationTime:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_drawGradientArrow;
- (void)_drawGreyArrow;
- (void)_drawGladeSelectonArrow;

@end
