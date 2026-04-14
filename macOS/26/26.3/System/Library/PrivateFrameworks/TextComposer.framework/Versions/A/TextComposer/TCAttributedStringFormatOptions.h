@class NSDictionary;

@interface TCAttributedStringFormatOptions : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary *_options;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)defaultFormatOptions;

- (id)initWithOptions:(id)a0;
- (id)description;
- (id)options;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)formatOptionsFlagsForFeature:(id)a0;
- (BOOL)generateDisplayAttributesFromFormattedOutputForFeature:(id)a0;
- (BOOL)generateFormattedInputFromDisplayAttributesForFeature:(id)a0;
- (BOOL)generateFormattedInputFromPresentationIntentsForFeature:(id)a0;
- (BOOL)generatePresentationIntentsFromFormattedOutputForFeature:(id)a0;

@end
