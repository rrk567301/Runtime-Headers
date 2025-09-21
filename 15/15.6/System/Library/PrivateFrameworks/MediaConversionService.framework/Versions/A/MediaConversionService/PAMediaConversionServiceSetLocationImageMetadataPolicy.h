@class CLLocation;

@interface PAMediaConversionServiceSetLocationImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy

@property (retain) CLLocation *location;

+ (char)supportsSecureCoding;
+ (id)policyWithLocation:(id)a0;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)processMetadata:(id)a0;
- (char)metadataNeedsProcessing:(id)a0;

@end
