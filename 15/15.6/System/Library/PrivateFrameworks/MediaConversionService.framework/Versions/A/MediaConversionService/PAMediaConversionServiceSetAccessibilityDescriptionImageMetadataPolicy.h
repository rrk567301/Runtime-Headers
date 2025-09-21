@class NSString;

@interface PAMediaConversionServiceSetAccessibilityDescriptionImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy

@property (copy) NSString *accessibilityDescription;

+ (char)supportsSecureCoding;
+ (id)policyWithAccessibilityDescription:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)processMetadata:(id)a0;
- (char)metadataNeedsProcessing:(id)a0;

@end
