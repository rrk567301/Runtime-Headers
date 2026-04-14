@interface PAMediaConversionServiceSharedPhotoStreamImageMetadataPolicy : PAMediaConversionServiceDefaultImageMetadataPolicy

+ (BOOL)supportsSecureCoding;
+ (id)policyWithAllowLocation:(BOOL)a0;
+ (void)_filterImageProperties:(id)a0 metadataWithKey:(id)a1 preserveProperties:(id)a2;

- (id)processMetadata:(id)a0;
- (BOOL)metadataNeedsProcessing:(id)a0;

@end
