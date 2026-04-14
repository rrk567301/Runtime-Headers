@class NSArray, NSMutableDictionary;

@interface ISIconLayerGroup : NSObject

@property (retain) NSMutableDictionary *opacities;
@property (retain) NSMutableDictionary *speculars;
@property (retain) NSMutableDictionary *combineSpeculars;
@property (retain) NSMutableDictionary *blurs;
@property (retain) NSMutableDictionary *translucencies;
@property (retain) NSMutableDictionary *shadowStyles;
@property (retain) NSMutableDictionary *shadows;
@property (copy) NSArray *layers;
@property double opacity;
@property BOOL hasSpecular;
@property BOOL hasOverlappingChildSpecularsCombined;
@property double blur;
@property double translucency;
@property long long shadowStyle;
@property double shadow;

- (void).cxx_destruct;
- (id)initWithLayers:(id)a0;
- (double)blurForAppearance:(long long)a0;
- (BOOL)hasOverlappingChildSpecularsCombinedForAppearance:(long long)a0;
- (BOOL)hasSpecularForAppearance:(long long)a0;
- (double)opacityForAppearance:(long long)a0;
- (void)setBlur:(double)a0 forAppearance:(long long)a1;
- (void)setHasOverlappingChildSpecularsCombined:(BOOL)a0 forAppearance:(long long)a1;
- (void)setHasSpecular:(BOOL)a0 forAppearance:(long long)a1;
- (void)setOpacity:(double)a0 forAppearance:(long long)a1;
- (void)setShadow:(double)a0 forAppearance:(long long)a1;
- (void)setShadowStyle:(long long)a0 forAppearance:(long long)a1;
- (void)setTranslucency:(double)a0 forAppearance:(long long)a1;
- (double)shadowForAppearance:(long long)a0;
- (long long)shadowStyleForAppearance:(long long)a0;
- (double)translucencyForAppearance:(long long)a0;

@end
