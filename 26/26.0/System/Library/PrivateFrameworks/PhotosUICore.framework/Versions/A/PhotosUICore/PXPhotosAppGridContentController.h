@class PXGridInlinePlaybackController, NSString, PXPhotosContentInlinePlaybackController, PXPhotosGridFooterStatusController, PXPhotosGridFooterPresentation, PXPhotosContentController, PXPhotosViewOptionsModel;
@protocol PXPhotosViewEventTracker, PXGDisplayAssetPixelBufferSourcesProvider;

@interface PXPhotosAppGridContentController : NSObject <PXAppIntentsViewAnnotationDelegate, PXPhotosContentInlinePlaybackControllerDelegate, PXScrollViewControllerObserver, PXChangeObserver, PXPhotosGridFooterPresentationDelegate, PXPhotosGridFooterStatusControllerDelegate, PXPhotosContentControllerHelper> {
    PXPhotosContentInlinePlaybackController *_photosInlinePlaybackController;
}

@property (readonly, nonatomic) PXPhotosViewOptionsModel *viewOptionsModel;
@property (readonly, nonatomic) BOOL needsCountsInitially;
@property (readonly, nonatomic) BOOL needsFooterStatusController;
@property (readonly, nonatomic) PXPhotosGridFooterStatusController *footerStatusController;
@property (readonly, nonatomic) PXPhotosGridFooterPresentation *footerPresentation;
@property (readonly, weak, nonatomic) PXPhotosContentController *contentController;
@property (readonly, nonatomic) id<PXPhotosViewEventTracker> eventTracker;
@property (nonatomic) BOOL shouldEnablePlaybackDuringAnimatedScroll;
@property (nonatomic) long long numberOfItemsToPlayInline;
@property (retain, nonatomic) id swift_associatedData;
@property (nonatomic) BOOL enableSpatialPhotoPlayback;
@property (readonly, nonatomic) NSString *appIntentsDebugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PXGridInlinePlaybackController<PXGDisplayAssetPixelBufferSourcesProvider> *inlinePlaybackController;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)swift_init;
- (id)init;
- (void)appIntentsEnumerateAssets:(id /* block */)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleRectFor:(id)a0;
- (void)_updateBarsController:(id)a0;
- (void)appIntentsEnumerateAssetCollections:(id /* block */)a0;
- (void)appIntentsEnumeratePersons:(id /* block */)a0;
- (BOOL)canPlay:(id)a0;
- (void)contentController:(id)a0 didChangeCurrentLens:(id)a1;
- (void)contentControllerDelegateDidChange:(id)a0;
- (void)contentViewDidAppearForContentController:(id)a0 animated:(BOOL)a1;
- (void)contentViewDidDisappearForContentController:(id)a0 animated:(BOOL)a1;
- (void)contentViewDidScrollToInitialPositionForContentController:(id)a0;
- (void)contentViewWillAppearForContentController:(id)a0 animated:(BOOL)a1;
- (void)dismissPresentedViewControllerForFooterPresentation:(id)a0;
- (unsigned long long)filterSortedRecordsStrategy;
- (void)footerPresentation:(id)a0 presentViewController:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameFor:(id)a0 outMinPlayableSize:(struct CGSize { double x0; double x1; } *)a1;
- (void)gridView:(id)a0 didBecomeAvailableForContentController:(id)a1;
- (id)initWithConfiguration:(id)a0 contentController:(id)a1;
- (void)initializationWillFinishForContentController:(id)a0;
- (BOOL)isDisplayAssetEligibleForAutoPlayback:(id)a0;
- (BOOL)isDisplayAssetEligibleForPlaybackWithSettlingEffect:(id)a0;
- (id)makeBodyLayoutProviderForContentController:(id)a0 style:(long long)a1 headerStyle:(long long)a2;
- (id)makeHeaderLayoutProviderForContentController:(id)a0 style:(long long)a1 viewProvider:(id)a2 bannerProvider:(id)a3;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })maskPaddingForFooterPresentation:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsetsFor:(id)a0;
- (void)scrollViewControllerContentBoundsDidChange:(id)a0;
- (BOOL)shouldEnablePlaybackFor:(id)a0;
- (void)swift_contentViewDidAppear:(BOOL)a0;
- (void)swift_contentViewDidDisappear:(BOOL)a0;
- (void)swift_contentViewDidScrollToInitialPosition;
- (void)swift_contentViewWillAppear:(BOOL)a0;

@end
