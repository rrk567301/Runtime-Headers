@class NSArray;

@interface NSImageSymbolConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double pointSize;
@property (readonly) double weight;
@property (readonly) long long scale;
@property (readonly) long long paletteType;
@property (readonly, copy) NSArray *paletteColors;
@property (readonly) BOOL prefersMulticolor;

+ (id)configurationWithScale:(long long)a0;
+ (id)configurationWithPointSize:(double)a0 weight:(double)a1 scale:(long long)a2;
+ (id)configurationWithPointSize:(double)a0 weight:(double)a1;
+ (id)configurationWithUnspecifiedValues;
+ (id)configurationWithTextStyle:(id)a0 scale:(long long)a1;
+ (id)configurationWithTextStyle:(id)a0;
+ (id)configurationWithHierarchicalColor:(id)a0;
+ (id)configurationWithPaletteColors:(id)a0;
+ (id)configurationWithHierarchicalColors:(id)a0;
+ (id)configurationPreferringMulticolor;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_configurationBackfilledWithPointSize:(double)a0 weight:(double)a1 scale:(long long)a2;
- (id)_configurationByApplyingFont:(id)a0 scale:(long long)a1;
- (id)configurationByApplyingConfiguration:(id)a0;
- (void)_getEffectivePointSize:(double *)a0 glyphWeight:(long long *)a1 glyphSize:(long long *)a2 backfilledWithFont:(id)a3 scale:(long long)a4;
- (id)initWithPointSize:(double)a0 weight:(double)a1 scale:(long long)a2 colors:(id)a3 inPalette:(long long)a4 preferringMulticolor:(BOOL)a5;

@end
