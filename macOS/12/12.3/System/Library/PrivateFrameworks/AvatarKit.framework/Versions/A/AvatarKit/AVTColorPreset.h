@class NSString, NSImage, NSDictionary, AVTVaryingColor, AVTMaterial;

@interface AVTColorPreset : NSObject {
    long long _category;
    NSDictionary *_propertyColors;
    NSDictionary *_derivedColors;
    AVTVaryingColor *_previewColor;
    AVTVaryingColor *_previewAccentColor;
    unsigned long long _previewAccentType;
    float _variation;
    AVTMaterial *_material;
}

@property (readonly) NSString *name;
@property (readonly) NSString *localizedName;
@property (readonly) NSImage *thumbnail;
@property (readonly) long long category;
@property (readonly) float variation;
@property (readonly) BOOL isNatural;

+ (id)colorPresetWithName:(id)a0 category:(long long)a1 variation:(float)a2;
+ (id)colorPresetsForCategory:(long long)a0;
+ (id)colorPresetWithName:(id)a0 category:(long long)a1 colorIndex:(unsigned long long)a2 variation:(float)a3;
+ (id)colorPresetsForCategory:(long long)a0 colorIndex:(unsigned long long)a1;
+ (id)_colorPresetsForCategory:(long long)a0 palette:(id)a1;
+ (id)secondaryColorPresetWithName:(id)a0 category:(long long)a1 variation:(float)a2;
+ (id)colorPresetWithName:(id)a0 category:(long long)a1;
+ (id)secondaryColorPresetsForCategory:(long long)a0;
+ (id)fallbackColorPresetForNilPresetAndCategory:(long long)a0 colorIndex:(unsigned long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)baseColor;
- (id)makeMaterial;
- (id)colorPresetWithVariation:(float)a0;
- (id)initWithCategory:(long long)a0 description:(id)a1;
- (id)previewColor;
- (void)renderColorIntoCALayer:(id)a0 withSkinColor:(id)a1;
- (void)renderNaturalSkinColorIntoCALayer:(id)a0 withSkinColor:(id)a1;
- (BOOL)shouldBlendWithSkinColor;
- (id)previewAccentColor;
- (id)gradientLayerWithRangeMin:(float)a0 max:(float)a1 withSkinColor:(id)a2;
- (id)gradientLayerForNaturalColorWithSkinColor:(id)a0;
- (void)enumerateDerivedColorPresetsUsingBlock:(id /* block */)a0;
- (id)derivedColorNameForPresetCategory:(long long)a0;
- (void)renderColorIntoCALayer:(id)a0;
- (id)gradientLayerWithRangeMin:(float)a0 max:(float)a1;

@end
