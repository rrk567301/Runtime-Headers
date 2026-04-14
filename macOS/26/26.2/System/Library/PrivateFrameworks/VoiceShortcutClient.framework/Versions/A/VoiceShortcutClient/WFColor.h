@class NSString, WFGradient, NSBundle, UIColor, NSColor;

@interface WFColor : NSObject <NSSecureCoding, NSCopying> {
    struct CGColor { } *_CGColor;
    NSColor *_platformColor;
}

@property (class, readonly, nonatomic) WFColor *whiteColor;
@property (class, readonly, nonatomic) WFColor *blackColor;
@property (class, readonly, nonatomic) WFColor *clearColor;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int RGBAValue;
@property (readonly, nonatomic) NSString *hexValue;
@property (readonly, nonatomic) WFGradient *paletteGradient;
@property (readonly, nonatomic) BOOL hasPaletteGradient;
@property (readonly, nonatomic) NSString *localizedPaletteName;
@property (readonly, nonatomic) WFGradient *gradient;
@property (readonly, nonatomic) NSString *colorName;
@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) unsigned long long representationType;
@property (readonly, nonatomic) struct CGColor { } *CGColor;
@property (readonly, nonatomic) NSColor *platformColor;
@property (readonly, nonatomic) UIColor *UIColor;
@property (readonly, nonatomic) NSColor *NSColor;
@property (readonly, nonatomic) unsigned long long systemColor;
@property (readonly, nonatomic) double red;
@property (readonly, nonatomic) double green;
@property (readonly, nonatomic) double blue;
@property (readonly, nonatomic) double alpha;

+ (id)colorWithWhite:(double)a0 alpha:(double)a1;
+ (id)colorWithCGColor:(struct CGColor { } *)a0;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithDisplayP3Red:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithHue:(double)a0 saturation:(double)a1 brightness:(double)a2 alpha:(double)a3;
+ (id)colorForName:(id)a0;
+ (id)colorWithSystemColor:(unsigned long long)a0;
+ (id)workflowPalette;
+ (id)colorNamed:(id)a0 inBundle:(id)a1;
+ (id)colorWithFocusColorName:(id)a0;
+ (id)colorWithP3RGBAValue:(unsigned int)a0;
+ (id)colorWithPaletteColor:(unsigned long long)a0;
+ (id)colorWithRGBAValue:(unsigned int)a0;
+ (id)tintColorForBundleIdentifier:(id)a0;
+ (id)tintedColorForName:(id)a0;
+ (id)workflowGradientPalette;
+ (id)workflowPaletteNames;

- (BOOL)isDark;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (BOOL)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)initWithHue:(double)a0 saturation:(double)a1 brightness:(double)a2 alpha:(double)a3;
- (id)colorWithAlphaComponent:(double)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSystemColor:(unsigned long long)a0;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)a0;
- (id)init;
- (void)dealloc;
- (id)initWithColorName:(id)a0 inBundle:(id)a1;
- (id)initWithDisplayP3Red:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)initWithPlatformColor:(id)a0;
- (BOOL)isCloseToColor:(id)a0;
- (void)getHue:(double *)a0 saturation:(double *)a1 value:(double *)a2 alpha:(double *)a3;
- (id)paletteGradientFallingBackToDefaultGradient:(BOOL)a0;
- (double)perceivedBrightness;

@end
