@class IFImageBag, NSArray, NSMutableDictionary, IFColor;

@interface ISIconLayerElement : NSObject

@property (retain) NSMutableDictionary *opacities;
@property (retain) NSMutableDictionary *effects;
@property (retain) NSMutableDictionary *fills;
@property (retain) NSMutableDictionary *fillColors;
@property (readonly) IFImageBag *imageBag;
@property (readonly) NSArray *images;
@property double opacity;
@property BOOL hasEffects;
@property (copy) IFColor *fillColor;

- (id)initWithImages:(id)a0;
- (void).cxx_destruct;
- (id)fillColorForAppearance:(long long)a0;
- (BOOL)hasEffectsForAppearance:(long long)a0;
- (double)opacityForAppearance:(long long)a0;
- (void)setFillColor:(id)a0 forAppearance:(long long)a1;
- (void)setHasEffects:(BOOL)a0 forAppearance:(long long)a1;
- (void)setOpacity:(double)a0 forAppearance:(long long)a1;

@end
