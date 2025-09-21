@interface GEOComposedStringArgument_Percentage : GEOComposedStringArgument {
    float _defaultValue;
}

@property (nonatomic) float overrideValue;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithGeoFormatArgument:(id)a0;
- (id)_stringReplacementWithOptions:(id)a0;
- (id)percentageFormat;

@end
