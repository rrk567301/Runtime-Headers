@class NSArray;

@interface NSImageSymbolConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double pointSize;
@property (readonly) double weight;
@property (readonly) long long scale;
@property (readonly) long long renderingStyle;
@property (readonly, copy) NSArray *colors;
@property (readonly) BOOL prefersMulticolor;
@property (readonly) long long variableValueMode;
@property (readonly) long long colorRenderingMode;

+ (id)configurationWithPaletteColors:(id)a0;
+ (id)_configurationWithDefaultHierarchicalColors;
+ (id)_configurationWithHierarchicalColor:(id)a0;
+ (id)configurationPreferringColorRenderingMode:(long long)a0;
+ (id)configurationPreferringHierarchical;
+ (id)configurationPreferringMonochrome;
+ (id)configurationPreferringMulticolor;
+ (id)configurationWithColorRenderingMode:(long long)a0;
+ (id)configurationWithHierarchicalColor:(id)a0;
+ (id)configurationWithHierarchicalColors:(id)a0;
+ (id)configurationWithPointSize:(double)a0 weight:(double)a1;
+ (id)configurationWithPointSize:(double)a0 weight:(double)a1 scale:(long long)a2;
+ (id)configurationWithScale:(long long)a0;
+ (id)configurationWithTextStyle:(id)a0;
+ (id)configurationWithTextStyle:(id)a0 scale:(long long)a1;
+ (id)configurationWithUnspecifiedValues;
+ (id)configurationWithVariableValueMode:(long long)a0;

- (id)configurationByApplyingConfiguration:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_configurationBackfilledWithPointSize:(double)a0 weight:(double)a1 scale:(long long)a2 colors:(id)a3;
- (id)_configurationByApplyingFont:(id)a0 scale:(long long)a1;
- (void)_getEffectivePointSize:(double *)a0 glyphWeight:(long long *)a1 glyphSize:(long long *)a2 backfilledWithFont:(id)a3 scale:(long long)a4;
- (id)initWithPointSize:(double)a0 weight:(double)a1 scale:(long long)a2 colors:(id)a3 renderingStyle:(long long)a4 preferringMulticolor:(BOOL)a5 variableValueMode:(long long)a6 colorRenderingMode:(long long)a7;

@end
