@class IFImageBag, NSUUID, NSMutableDictionary, NSArray, IFColor;

@interface ISIconLayerElement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSMutableDictionary *opacities;
@property (retain) NSMutableDictionary *effects;
@property (retain) NSMutableDictionary *fillColors;
@property (readonly) IFImageBag *imageBag;
@property (readonly) NSUUID *digest;
@property (readonly) NSArray *images;
@property double opacity;
@property BOOL hasEffects;
@property (copy) IFColor *fillColor;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithImages:(id)a0;
- (id)cuiLayerImageForAppearance:(long long)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)fillColorForAppearance:(long long)a0;
- (BOOL)hasEffectsForAppearance:(long long)a0;
- (double)opacityForAppearance:(long long)a0;
- (void)setFillColor:(id)a0 forAppearance:(long long)a1;
- (void)setHasEffects:(BOOL)a0 forAppearance:(long long)a1;
- (void)setOpacity:(double)a0 forAppearance:(long long)a1;

@end
