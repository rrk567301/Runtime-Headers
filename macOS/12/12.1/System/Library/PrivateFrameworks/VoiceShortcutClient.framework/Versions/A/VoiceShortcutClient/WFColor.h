@class UIColor, NSString, NSBundle, WFGradient, NSColor;

@interface WFColor : NSObject <NSSecureCoding, NSCopying> {
    struct CGColor { } *_CGColor;
    NSColor *_platformColor;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int RGBAValue;
@property (readonly, nonatomic) NSString *hexValue;
@property (readonly, nonatomic) WFGradient *paletteGradient;
@property (readonly, nonatomic) NSString *colorName;
@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) unsigned long long representationType;
@property (readonly, nonatomic) struct CGColor { } *CGColor;
@property (readonly, nonatomic) NSColor *platformColor;
@property (readonly, nonatomic) UIColor *UIColor;
@property (readonly, nonatomic) NSColor *NSColor;
@property (readonly, nonatomic) unsigned long long systemColor;

+ (id)clearColor;
+ (id)blackColor;
+ (id)whiteColor;
+ (id)colorWithCGColor:(struct CGColor { } *)a0;
+ (id)colorWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithWhite:(double)a0 alpha:(double)a1;
+ (id)colorWithDisplayP3Red:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
+ (id)colorWithSystemColor:(unsigned long long)a0;
+ (id)colorWithRGBAValue:(unsigned int)a0;
+ (id)colorWithP3RGBAValue:(unsigned int)a0;
+ (id)workflowPalette;
+ (id)workflowPaletteNames;
+ (id)colorWithPaletteColor:(unsigned long long)a0;
+ (id)workflowGradientPalette;
+ (id)colorNamed:(id)a0 inBundle:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)a0;
- (id)colorWithAlphaComponent:(double)a0;
- (BOOL)getRed:(double *)a0 green:(double *)a1 blue:(double *)a2 alpha:(double *)a3;
- (id)initWithWhite:(double)a0 alpha:(double)a1;
- (id)initWithRed:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)initWithCGColor:(struct CGColor { } *)a0;
- (id)initWithColorName:(id)a0 inBundle:(id)a1;
- (id)initWithDisplayP3Red:(double)a0 green:(double)a1 blue:(double)a2 alpha:(double)a3;
- (id)initWithPlatformColor:(id)a0;
- (id)initWithSystemColor:(unsigned long long)a0;

@end
