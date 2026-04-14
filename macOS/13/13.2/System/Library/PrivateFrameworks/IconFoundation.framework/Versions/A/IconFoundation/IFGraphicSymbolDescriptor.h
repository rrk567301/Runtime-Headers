@class NSString, NSArray, NSDictionary;

@interface IFGraphicSymbolDescriptor : IFSymbolImageDescriptor <NSCopying>

@property (retain) NSString *name;
@property (nonatomic) long long appearance;
@property (nonatomic) long long contrast;
@property (nonatomic) long long vibrancy;
@property (nonatomic) struct CGSize { double width; double height; } symbolOffset;
@property (nonatomic) long long symbolEffect;
@property (nonatomic) long long enclosureEffect;
@property (nonatomic) BOOL debugColourSet;
@property (nonatomic) long long shape;
@property (nonatomic) long long fill;
@property (nonatomic) long long resolvedShape;
@property (nonatomic) long long resolvedSymbolEffect;
@property (nonatomic) long long resolvedEnclosureEffect;
@property (nonatomic) long long resolvedFill;
@property (copy, nonatomic) NSArray *resolvedSymbolColors;
@property (copy, nonatomic) NSArray *resolvedEnclosureColors;
@property (readonly, copy, nonatomic) NSDictionary *symbolOverrides;
@property (nonatomic) BOOL flipXOffsetOverride;
@property (retain, nonatomic) NSString *resolvedName;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (copy, nonatomic) NSArray *enclosureColors;
@property (copy, nonatomic) NSArray *symbolColors;
@property (nonatomic) long long renderingMode;

+ (id)overrides;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (double)pointSize;
- (unsigned long long)symbolSize;
- (long long)symbolWeight;
- (BOOL)_isDebugGraphicIconColourEnabled;
- (id)_debugDynamicGraphicIconColor;
- (id)_colorForIFSystemColor:(long long)a0;
- (id)_resolvedColorsForColors:(id)a0 defaultColor:(id /* block */)a1;
- (id)_defaultSymbolColor;
- (id)_defaultEnclosureColor;
- (long long)resolvedRenderingModeFromSuggestedMode:(long long)a0;
- (id)_overridesShapeStringForShape;
- (double)_overridesPointSizeToShapeMultiplier;

@end
