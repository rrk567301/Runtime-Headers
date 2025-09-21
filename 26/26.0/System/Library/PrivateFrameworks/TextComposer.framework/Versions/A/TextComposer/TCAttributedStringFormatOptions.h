@class NSDictionary;

@interface TCAttributedStringFormatOptions : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary *_options;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)defaultFormatOptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOptions:(id)a0;
- (id)options;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)formatOptionsFlagsForFeature:(id)a0;
- (BOOL)generateDisplayAttributesFromFormattedOutputForFeature:(id)a0;
- (BOOL)generateFormattedInputFromDisplayAttributesForFeature:(id)a0;
- (BOOL)generateFormattedInputFromPresentationIntentsForFeature:(id)a0;
- (BOOL)generatePresentationIntentsFromFormattedOutputForFeature:(id)a0;

@end
