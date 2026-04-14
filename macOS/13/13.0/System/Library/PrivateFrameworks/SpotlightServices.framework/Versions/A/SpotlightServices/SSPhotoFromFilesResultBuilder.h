@interface SSPhotoFromFilesResultBuilder : SSPhotosResultBuilder

+ (id)bundleId;
+ (BOOL)isCoreSpotlightResult;
+ (BOOL)supportsResult:(id)a0;

- (id)initWithResult:(id)a0;
- (id)appBundleId;
- (id)buildCommand;
- (id)buildThumbnail;
- (id)buildPreviewCommand;

@end
