@class NSString, CUINamedGradient;

@interface CUINamedLayerImage : CUINamedImage <CUINamedLayerImageProtocol>

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) double opacity;
@property (nonatomic) int blendMode;
@property (nonatomic) double blurStrength;
@property (nonatomic) BOOL hasLightingEffects;
@property (copy, nonatomic) NSString *gradientOrColorName;
@property (readonly, nonatomic) struct CGColor { } *color;
@property (readonly, nonatomic) CUINamedGradient *gradient;
@property (nonatomic) BOOL fixedFrame;
@property (readonly, nonatomic) struct CGImage { } *image;
@property (readonly, nonatomic) double scale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithName:(id)a0 usingRenditionKey:(id)a1 fromTheme:(unsigned long long)a2;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (int)_blendMode;
- (id)_gradientOrColor;
- (double)_opacity;
- (void)_setBlendMode:(int)a0;
- (void)_setBlurStrength:(double)a0;
- (void)_setBlurStrength:(double)a0;
- (void)_setGradientOrColor:(id)a0;
- (void)_setGradientOrColorName:(id)a0;
- (void)_setGradientOrColorName:(id)a0;
- (void)_setHasLightingEffects:(BOOL)a0;
- (void)_setOpacity:(double)a0;
- (BOOL)_updateFromCatalog:(id)a0 displayGamut:(long long)a1 deviceIdiom:(long long)a2 appearanceName:(id)a3;
- (id)sdfTextureWithBufferAllocator:(id)a0;

@end
