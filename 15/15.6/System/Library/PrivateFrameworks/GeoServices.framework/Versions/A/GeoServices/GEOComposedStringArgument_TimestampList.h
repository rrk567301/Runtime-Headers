@class NSArray;

@interface GEOComposedStringArgument_TimestampList : GEOComposedStringArgument {
    NSArray *_defaultTimestamps;
}

@property (retain, nonatomic) NSArray *overrideTimestamps;

+ (char)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithGeoFormatArgument:(id)a0;
- (id)_stringReplacementWithOptions:(id)a0;
- (id)timestampListFormat;

@end
