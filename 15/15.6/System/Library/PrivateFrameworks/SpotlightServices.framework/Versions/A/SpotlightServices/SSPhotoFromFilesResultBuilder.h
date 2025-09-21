@interface SSPhotoFromFilesResultBuilder : SSPhotosResultBuilder

+ (id)bundleId;
+ (char)isCoreSpotlightResult;
+ (char)supportsResult:(id)a0;

- (id)appBundleId;
- (id)initWithResult:(id)a0;
- (id)buildCommand;
- (id)buildPreviewCommand;
- (id)buildThumbnail;

@end
