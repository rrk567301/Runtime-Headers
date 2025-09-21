@class NSString, CUINamedGradient;

@interface CUINamedLayerVectorSVGImage : CUINamedVectorSVGImage

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) double opacity;
@property (nonatomic) int blendMode;
@property (nonatomic) double blurStrength;
@property (nonatomic) BOOL hasLightingEffects;
@property (copy, nonatomic) NSString *gradientOrColorName;
@property (readonly, nonatomic) struct CGColor { } *color;
@property (readonly, nonatomic) CUINamedGradient *gradient;

- (id)mutableCopy;
- (void)dealloc;
- (id)initWithName:(id)a0 usingRenditionKey:(id)a1 fromTheme:(unsigned long long)a2;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_gradientOrColor;
- (void)_setBlendMode:(int)a0;
- (void)_setBlurStrength:(double)a0;
- (void)_setGradientOrColor:(id)a0;
- (void)_setGradientOrColorName:(id)a0;
- (void)_setHasLightingEffects:(BOOL)a0;
- (BOOL)_updateFromCatalog:(id)a0 displayGamut:(long long)a1 deviceIdiom:(long long)a2 appearanceName:(id)a3;

@end
