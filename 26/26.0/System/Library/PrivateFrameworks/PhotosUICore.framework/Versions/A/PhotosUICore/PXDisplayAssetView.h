@class NSString, PXRegionOfInterest, PUPhotosAssetDebugOverlayView, PXUpdater, PXDisplayAssetViewModel, NSLocale, PXDisplayAssetContentView, PXDisplayAssetCombinedOverlayView, PXImageRequester, NSImage, PXUIMediaProvider, NSArray;
@protocol PXDisplayAsset;

@interface PXDisplayAssetView : UXView <PXChangeObserver, PUPhotosAssetDebugOverlayViewDelegate, PXDisplayAssetContentViewDelegate> {
    BOOL _isPerformingLayout;
}

@property (class, retain, nonatomic) NSLocale *currentLocaleForTesting;

@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) PXDisplayAssetViewModel *viewModel;
@property (readonly, nonatomic) PXDisplayAssetCombinedOverlayView *overlayView;
@property (nonatomic) struct CGSize { double width; double height; } viewportSize;
@property (retain, nonatomic) PXDisplayAssetContentView *contentView;
@property (readonly, nonatomic) PUPhotosAssetDebugOverlayView *debugOverlayView;
@property (readonly, nonatomic) PXDisplayAssetContentView *underlyingContentView;
@property (readonly, nonatomic) PXRegionOfInterest *contentRegionOfInterest;
@property (readonly, nonatomic) PXImageRequester *imageRequester;
@property (readonly, nonatomic) NSImage *currentImage;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } stillImageContentsRect;
@property (retain, nonatomic) id<PXDisplayAsset> asset;
@property (retain, nonatomic) PXUIMediaProvider *mediaProvider;
@property (nonatomic) long long preferredImageDynamicRange;
@property (nonatomic) BOOL allowsTextSelection;
@property (copy, nonatomic) NSArray *stringsToHighlight;
@property (copy, nonatomic) NSArray *sceneIdentifiersToHighlight;
@property (copy, nonatomic) NSArray *audioIdentifiersToHighlight;
@property (copy, nonatomic) NSArray *humanActionIdentifiersToHighlight;
@property (copy, nonatomic) NSArray *personLocalIdentifiersToHighlight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localizedTitleForAsset:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })preferredContentsRectForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;

- (void)_setNeedsUpdate;
- (void)didAddSubview:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setContentMode:(long long)a0;
- (void)_updateContentView;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(unsigned long long)a1;
- (void)setOverlayViewDelegate:(id)a0;
- (long long)photosAssetDebugOverlayViewEffectivePreferredImageDynamicRange:(id)a0;
- (void)_addDebugOverlayViewIfNeeded;
- (void)_commonPXDisplayAssetViewInit;
- (void)_invalidateContentView;
- (void)_invalidateContentViewLayout;
- (void)_invalidateContentViewProperties;
- (void)_invalidateDebugOverlayView;
- (void)_invalidateViewModelProperties;
- (void)_updateContentViewLayout;
- (void)_updateContentViewProperties;
- (void)_updateDebugOverlayView;
- (void)_updateViewModelProperties;
- (void)displayAssetContentView:(id)a0 didChangeEffectivePreferredImageDynamicRange:(long long)a1;
- (void)displayAssetContentViewDidChangeImage:(id)a0;
- (void)photosAssetDebugOverlayView:(id)a0 didRequestPreferredImageDynamicRange:(long long)a1;
- (id)photosAssetDebugOverlayViewCurrentlyDisplayedImage:(id)a0;
- (BOOL)photosAssetDebugOverlayViewHasEffectivePreferredImageDynamicRange:(id)a0;
- (long long)photosAssetDebugOverlayViewPreferredImageDynamicRange:(id)a0;

@end
