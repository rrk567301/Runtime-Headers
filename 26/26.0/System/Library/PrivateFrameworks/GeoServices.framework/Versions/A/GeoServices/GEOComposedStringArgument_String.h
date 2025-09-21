@class NSString;

@interface GEOComposedStringArgument_String : GEOComposedStringArgument {
    NSString *_defaultValue;
}

@property (copy, nonatomic) NSString *overrideValue;
@property (readonly, nonatomic) int stringSubstituteType;
@property (readonly, nonatomic) int privacyFilterType;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithGeoFormatArgument:(id)a0;
- (id)_stringReplacementWithOptions:(id)a0;
- (id)stringFormat;

@end
