@class ISLivePhotoNSView, AVPlayerItem;

@interface PXDisplayAssetLivePhotoContentView : PXDisplayAssetContentView {
    ISLivePhotoNSView *_livePhotoView;
}

@property (retain, nonatomic) AVPlayerItem *videoPlayerItem;
@property (nonatomic) double playerItemLoadingProgress;

- (void).cxx_destruct;
- (id)contentView;
- (void)updateContent;
- (void)imageDidChange;
- (long long)playbackStyle;
- (double)loadingProgress;
- (void)contentModeDidChange;
- (void)imageProgressDidChange;
- (void)placeholderImageFiltersDidChange;
- (void)contentsRectDidChange;
- (void)imageRequesterDidChange:(unsigned long long)a0;
- (void)viewModelDidChange:(unsigned long long)a0;
- (void)_updateLivePhotoContentMode;
- (void)_handlePlayerItemResult:(id)a0 info:(id)a1 requestID:(long long)a2;
- (BOOL)isDisplayingFullQualityContent;
- (void)_updateLivePhotoPlayerItem;

@end
