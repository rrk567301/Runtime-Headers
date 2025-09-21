@class NSTimeZone, NSDate;

@interface PAMediaConversionServiceSetCreationDateImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy

@property (retain) NSDate *creationDate;
@property (retain) NSTimeZone *timeZone;

+ (char)supportsSecureCoding;
+ (id)policyWithCreationDate:(id)a0 inTimeZone:(id)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)processMetadata:(id)a0;
- (char)metadataNeedsProcessing:(id)a0;

@end
