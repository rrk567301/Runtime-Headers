@class NSString, NSURL;

@interface GEOComposedStringArgument_URL : GEOComposedStringArgument {
    NSString *_defaultDisplayTitle;
    NSURL *_defaultURL;
}

@property (copy, nonatomic) NSString *overrideDisplayTitle;
@property (copy, nonatomic) NSURL *overrideURL;
@property (copy, nonatomic) NSString *linkAttributeName;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_attributedStringReplacementWithOptions:(id)a0;
- (id)_initWithGeoFormatArgument:(id)a0;
- (id)_stringReplacementWithOptions:(id)a0;
- (id)urlFormat;

@end
