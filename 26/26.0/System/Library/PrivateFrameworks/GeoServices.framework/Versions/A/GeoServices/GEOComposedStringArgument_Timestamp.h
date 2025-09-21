@class NSString, NSTimeZone;

@interface GEOComposedStringArgument_Timestamp : GEOComposedStringArgument {
    double _defaultValue;
    NSString *_defaultFormatPattern;
    NSTimeZone *_defaultTimeZone;
}

@property (nonatomic) double overrideValue;
@property (copy, nonatomic) NSString *overrideFormatPattern;
@property (copy, nonatomic) NSTimeZone *overrideTimeZone;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)timestampFormat;
- (id)_initWithGeoFormatArgument:(id)a0;
- (id)_initWithGeoTimestampData:(id)a0;
- (id)_stringReplacementWithOptions:(id)a0;
- (void)_updateWithGeoTimestampData:(id)a0;

@end
