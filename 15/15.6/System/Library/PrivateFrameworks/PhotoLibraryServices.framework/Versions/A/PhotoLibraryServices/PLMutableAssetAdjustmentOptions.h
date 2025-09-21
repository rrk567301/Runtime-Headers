@class PFMetadata, NSURL, NSData;

@interface PLMutableAssetAdjustmentOptions : PLAssetAdjustmentOptions

@property (nonatomic, getter=isSubstandardRender) char substandardRender;
@property (nonatomic, getter=isDeferred) char deferred;
@property (nonatomic) char shouldUpdateAttributes;
@property (nonatomic) char shouldGenerateThumbnails;
@property (nonatomic) char shouldCheckForLegacyCameraAutoAdjustment;
@property (nonatomic) char skipCheckCameraAutoAdjustment;
@property (nonatomic) char skipCheckSleetCastAdjustment;
@property (nonatomic) long long fileIngestionType;
@property (nonatomic) struct CGSize { double x0; double x1; } fullSizeRenderSize;
@property (nonatomic) double fullSizeRenderDuration;
@property (retain, nonatomic) PFMetadata *mainFileMetadata;
@property (retain, nonatomic) NSURL *renderedContentURL;
@property (retain, nonatomic) NSData *penultimateRenderedJPEGData;
@property (retain, nonatomic) NSURL *penultimateRenderedVideoContentURL;
@property (retain, nonatomic) NSURL *renderedVideoComplementContentURL;
@property (retain, nonatomic) NSURL *penultimateRenderedVideoComplementContentURL;
@property (retain, nonatomic) NSURL *renderedVideoPosterContentURL;
@property (retain, nonatomic) NSURL *adjustmentSecondaryDataURL;

+ (id)assetAdjustmentOptionsForFileSystemImport;

- (void)setDeferred:(char)a0;
- (void)setPenultimateRenderedJPEGData:(id)a0;
- (void)setAdjustmentSecondaryDataURL:(id)a0;
- (void)setFileIngestionType:(long long)a0;
- (void)setFullSizeRenderDuration:(double)a0;
- (void)setFullSizeRenderSize:(struct CGSize { double x0; double x1; })a0;
- (void)setMainFileMetadata:(id)a0;
- (void)setPenultimateRenderedVideoComplementContentURL:(id)a0;
- (void)setPenultimateRenderedVideoContentURL:(id)a0;
- (void)setRenderedContentURL:(id)a0;
- (void)setRenderedVideoComplementContentURL:(id)a0;
- (void)setRenderedVideoPosterContentURL:(id)a0;
- (void)setShouldCheckForLegacyCameraAutoAdjustment:(char)a0;
- (void)setShouldGenerateThumbnails:(char)a0;
- (void)setShouldUpdateAttributes:(char)a0;
- (void)setSubstandardRender:(char)a0;
- (void)setSkipCheckCameraAutoAdjustment:(char)a0;
- (void)setSkipCheckSleetCastAdjustment:(char)a0;

@end
