@class CAGradientLayer, WFGradient;

@interface WFFloatingLayer : CALayer

@property (nonatomic) char colorizesShadow;
@property (nonatomic) char usePillCornerRadius;
@property (nonatomic) double scalingFactor;
@property (nonatomic) double highlightedCornerRadius;
@property (nonatomic) char appliesCornerRadiusDuringTouchDownOnly;
@property (weak, nonatomic) CAGradientLayer *gradientLayer;
@property (copy, nonatomic) WFGradient *gradient;
@property (nonatomic, getter=isPressed) char pressed;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)applyConfiguration:(id)a0;
- (id)baseColor;
- (void)updateBackgroundColor;
- (void)setPressed:(char)a0 animated:(char)a1;
- (void)updateShadowColor;

@end
