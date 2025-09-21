@class PFMetadata, NSURL, NSData;

@interface PLAssetAdjustmentOptions : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic, getter=isSubstandardRender) char substandardRender;
@property (readonly, nonatomic, getter=isDeferred) char deferred;
@property (readonly, nonatomic) char shouldUpdateAttributes;
@property (readonly, nonatomic) char shouldGenerateThumbnails;
@property (readonly, nonatomic) char shouldCheckForLegacyCameraAutoAdjustment;
@property (readonly, nonatomic) char skipCheckCameraAutoAdjustment;
@property (readonly, nonatomic) char skipCheckSleetCastAdjustment;
@property (readonly, nonatomic) long long fileIngestionType;
@property (readonly, nonatomic) struct CGSize { double width; double height; } fullSizeRenderSize;
@property (readonly, nonatomic) double fullSizeRenderDuration;
@property (readonly, nonatomic) PFMetadata *mainFileMetadata;
@property (readonly, nonatomic) NSURL *renderedContentURL;
@property (readonly, nonatomic) NSData *penultimateRenderedJPEGData;
@property (readonly, nonatomic) NSURL *penultimateRenderedVideoContentURL;
@property (readonly, nonatomic) NSURL *renderedVideoComplementContentURL;
@property (readonly, nonatomic) NSURL *penultimateRenderedVideoComplementContentURL;
@property (readonly, nonatomic) NSURL *renderedVideoPosterContentURL;
@property (readonly, nonatomic) NSURL *adjustmentSecondaryDataURL;

+ (id)assetAdjustmentOptionsForPortraitImportWithMainFileMetadata:(id)a0;
+ (id)assetAdjustmentOptionsForRevertingToOriginal;
+ (id)assetAdjustmentOptionsForSLMAdjustmentsWithMainFileMetadata:(id)a0;
+ (id)assetAdjustmentOptionsForApplyingResourcesFromCPL;
+ (id)assetAdjustmentOptionsForImageWriterWithEditedRenderURL:(id)a0 async:(char)a1 fullSizeRenderSize:(struct CGSize { double x0; double x1; })a2 mainFileMetadata:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)_setPropertiesOnCopy:(id)a0;
- (char)shouldOverwriteFullSizeRenderSize;

@end
