@class NSTimer, CAGradientLayer, NSArray;

@interface _NSWTUIDirectionalLightEffectView : _NSWTUIView

@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) NSTimer *effectTimer;
@property (copy, nonatomic) NSArray *palette;

- (id)_commonInit;
- (void)layout;
- (void).cxx_destruct;
- (void)_strobe;
- (void)applyMaskLayer:(id)a0;
- (void)_commonLayout;
- (id)initWithPalette:(id)a0;
- (void)initiateLightingEffect;

@end
