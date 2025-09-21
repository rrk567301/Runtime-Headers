@class PXDisplayAssetImageAnalysisOverlayView, PXUpdater, PXRoundProgressView, PXDisplayAssetViewModel, PXLoadingFailureBadgeView, NSString, PXLivePhotoBadgeView;
@protocol PXDisplayAssetViewMenuDelegate, PXDisplayAsset;

@interface PXDisplayAssetCombinedOverlayView : UXView <PXChangeObserver, PXLivePhotoBadgeViewDelegate> {
    char _isPerformingLayout;
}

@property (readonly, nonatomic) PXUpdater *updater;
@property (nonatomic) struct CGSize { double width; double height; } viewportSize;
@property (nonatomic) char canShowLoadingProgress;
@property (readonly, nonatomic) PXLivePhotoBadgeView *livePhotoBadgeView;
@property (readonly, nonatomic) PXLoadingFailureBadgeView *loadingFailureBadgeView;
@property (readonly, nonatomic) PXRoundProgressView *loadingProgressBadgeView;
@property (retain, nonatomic) id<PXDisplayAsset> loadingAsset;
@property (readonly, nonatomic) PXDisplayAssetImageAnalysisOverlayView *imageAnalysisOverlayView;
@property (weak, nonatomic) id<PXDisplayAssetViewMenuDelegate> displayAssetViewMenuDelegate;
@property (readonly, nonatomic) PXDisplayAssetViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_invalidateLayout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_updateLayout;
- (id)initWithViewModel:(id)a0;
- (void)_setNeedsUpdate;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_ensureImageAnalysisOverlayView;
- (void)_ensureLoadingProgressBadgeView;
- (void)_invalidateImageAnalysisOverlay;
- (void)_updateLoadingProgressBadgeView;
- (void)_ensureLivePhotoBadgeView;
- (void)_ensureLoadingFailureBadgeView;
- (void)_invalidateCanShowLoadingProgress;
- (void)_invalidateLivePhotoBadge;
- (void)_invalidateLoadingFailureBadgeView;
- (void)_invalidateLoadingProgressBadgeView;
- (void)_loadingProgressDelayElapsed;
- (void)_updateCanShowLoadingProgress;
- (void)_updateImageAnalysisOverlay;
- (void)_updateLivePhotoBadge;
- (void)_updateLoadingFailureBadgeView;
- (void)livePhotoBadgeView:(id)a0 wantsPlayback:(char)a1;

@end
