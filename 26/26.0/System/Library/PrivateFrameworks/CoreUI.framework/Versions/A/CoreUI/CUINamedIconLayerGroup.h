@class NSString, NSMutableArray, CUINamedGradient;

@interface CUINamedIconLayerGroup : CUINamedLookup {
    id _gradientOrColor;
}

@property (retain, nonatomic) NSMutableArray *layers;
@property (nonatomic) double opacity;
@property (nonatomic) int blendMode;
@property (nonatomic) double blurStrength;
@property (nonatomic) BOOL hasLightingEffects;
@property (nonatomic) BOOL gathersSpecularByElement;
@property (nonatomic) long long shadowStyle;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) BOOL hasSpecular;
@property (nonatomic) double translucency;
@property (copy, nonatomic) NSString *gradientOrColorName;
@property (readonly, nonatomic) struct CGColor { } *color;
@property (readonly, nonatomic) CUINamedGradient *gradient;

- (id)mutableCopy;
- (void)dealloc;
- (void)_addLayer:(id)a0;
- (id)_gradientOrColor;
- (void)_removeLayerAtIndex:(unsigned long long)a0;
- (void)_setBlendMode:(int)a0;
- (void)_setBlurStrength:(double)a0;
- (void)_setGathersSpecularByElement:(BOOL)a0;
- (void)_setGradientOrColor:(id)a0;
- (void)_setGradientOrColorName:(id)a0;
- (void)_setHasLightingEffects:(BOOL)a0;
- (void)_setHasSpecular:(BOOL)a0;
- (void)_setOpacity:(double)a0;
- (void)_setShadowOpacity:(double)a0;
- (void)_setShadowStyle:(long long)a0;
- (void)_setTranslucency:(double)a0;
- (BOOL)_updateFromCatalog:(id)a0 displayGamut:(long long)a1 deviceIdiom:(long long)a2 appearanceName:(id)a3;
- (id)initWithName:(id)a0 usingRenditionKey:(id)a1 fromTheme:(unsigned long long)a2 resolvingWithBlock:(id /* block */)a3;

@end
