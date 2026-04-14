@class NSString, PXScrollViewSpeedometer;
@protocol PXDisplayAsset;

@interface PXPhotosContentInlinePlaybackController : PXGridInlinePlaybackController <PXGDisplayAssetPixelBufferSourcesProvider> {
    void /* unknown type, empty encoding */ scrollViewSpeedometerObservation;
}

@property (nonatomic) long long numberOfItemsToPlay;
@property (nonatomic) BOOL enableSpatialPhotoPlayback;
@property (nonatomic, readonly) BOOL isSpatialPhotoPlaybackEnabled;
@property (nonatomic, retain) PXScrollViewSpeedometer *scrollViewSpeedometer;
@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic) BOOL isContentViewVisible;
@property (nonatomic, readonly) BOOL shouldEnablePlayback;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentVisibleRect;
@property (nonatomic, readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } criticallyVisibleEdgeInsets;
@property (nonatomic, readonly) id<PXDisplayAsset> currentHoveredDisplayAsset;
@property (nonatomic, readonly) long long maxNumberOfPlayingItems;

- (id)init;
- (void).cxx_destruct;
- (BOOL)canPlayAsset:(id)a0;
- (id)createPlaybackRecordForDisplayAsset:(id)a0 mediaProvider:(id)a1 geometryReference:(id)a2 spriteSize:(struct CGSize { double x0; double x1; })a3 displayScale:(double)a4;
- (id)filterSortedRecordsToPlay:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForPlaybackRecord:(id)a0 minPlayableSize:(struct CGSize { double x0; double x1; } *)a1;
- (BOOL)isDisplayAssetEligibleForAutoPlayback:(id)a0;
- (id)pixelBufferSourceForDisplayAsset:(id)a0 mediaProvider:(id)a1 spriteReference:(id)a2 spriteSize:(struct CGSize { double x0; double x1; })a3 displayScale:(double)a4;
- (void)recyclePixelBufferSourceForDisplayAssets:(id)a0 pixelBufferSource:(id)a1;
- (BOOL)shouldDisplayPreviousNonNullPixelBufferForPixelBufferSource:(id)a0;

@end
