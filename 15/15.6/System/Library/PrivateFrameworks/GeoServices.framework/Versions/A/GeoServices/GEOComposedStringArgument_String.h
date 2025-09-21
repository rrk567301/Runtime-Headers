@class NSString;

@interface GEOComposedStringArgument_String : GEOComposedStringArgument {
    NSString *_defaultValue;
}

@property (copy, nonatomic) NSString *overrideValue;
@property (readonly, nonatomic) int stringSubstituteType;
@property (readonly, nonatomic) int privacyFilterType;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithGeoFormatArgument:(id)a0;
- (id)_stringReplacementWithOptions:(id)a0;
- (id)stringFormat;

@end
