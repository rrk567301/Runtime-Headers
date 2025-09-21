@interface PAMediaConversionServiceSharedPhotoStreamImageMetadataPolicy : PAMediaConversionServiceDefaultImageMetadataPolicy

+ (char)supportsSecureCoding;
+ (void)_filterImageProperties:(id)a0 metadataWithKey:(id)a1 preserveProperties:(id)a2;
+ (id)policyWithAllowLocation:(char)a0;

- (id)processMetadata:(id)a0;
- (char)metadataNeedsProcessing:(id)a0;

@end
