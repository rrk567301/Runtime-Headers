@class NSArray;

@interface GEOComposedStringArgument_TimestampList : GEOComposedStringArgument {
    NSArray *_defaultTimestamps;
}

@property (retain, nonatomic) NSArray *overrideTimestamps;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithGeoFormatArgument:(id)a0;
- (id)_stringReplacementWithOptions:(id)a0;
- (id)timestampListFormat;

@end
