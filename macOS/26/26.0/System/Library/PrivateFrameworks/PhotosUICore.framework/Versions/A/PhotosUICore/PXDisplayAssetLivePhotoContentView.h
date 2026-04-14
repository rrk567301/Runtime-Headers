@class ISLivePhotoNSView, AVPlayerItem;

@interface PXDisplayAssetLivePhotoContentView : PXDisplayAssetContentView {
    ISLivePhotoNSView *_livePhotoView;
}

@property (retain, nonatomic) AVPlayerItem *videoPlayerItem;
@property (nonatomic) double playerItemLoadingProgress;

- (void)updateContent;
- (double)loadingProgress;
- (id)contentView;
- (void).cxx_destruct;
- (void)imageDidChange;
- (long long)playbackStyle;
- (void)_handlePlayerItemResult:(id)a0 info:(id)a1 requestID:(long long)a2;
- (void)_updateLivePhotoContentMode;
- (void)_updateLivePhotoPlayerItem;
- (void)contentModeDidChange;
- (void)contentsRectDidChange;
- (void)effectivePreferredImageDynamicRangeDidChange;
- (void)imageProgressDidChange;
- (void)imageRequesterDidChange:(unsigned long long)a0;
- (BOOL)isDisplayingFullQualityContent;
- (void)placeholderImageFiltersDidChange;
- (void)viewModelDidChange:(unsigned long long)a0;

@end
