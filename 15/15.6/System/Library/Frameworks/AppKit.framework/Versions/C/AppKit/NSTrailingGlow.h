@class NSString, CAShapeLayer, TUIGlowEffect, NSColor;
@protocol NSTrailingGlowDelegate;

@interface NSTrailingGlow : NSView <CAAnimationDelegate> {
    NSColor *_glowColor;
    double _minOpacity;
    double _maxOpacity;
    double _trailOpacity;
    CAShapeLayer *_shapeLayer;
    TUIGlowEffect *_glowEffect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _previousIndicatorFrame;
    char _needsToUpdateAnimation;
    char _reverseDirection;
}

@property (weak, nonatomic) id<NSTrailingGlowDelegate> delegate;
@property (copy, nonatomic) id /* block */ transitionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)blurRadius;
+ (char)clipsToBounds;
+ (void)getMinOpacity:(double *)a0 maxOpacity:(double *)a1;
+ (void)updateConfigurationForAppearance:(id)a0 tintColor:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)_animate;
- (void)animateIn;
- (void)animationDidStart:(id)a0;
- (void)animationDidStop:(id)a0 finished:(char)a1;
- (char)indicatorDidMoveToFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isAnimating;
- (struct CGPath { } *)pathForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (char)wantsUpdateLayer;

@end
