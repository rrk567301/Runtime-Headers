@class NSString, NSArray, PXUpdater, PXUIMediaProvider, NSLocale, PXDisplayAssetContentView, NSImage, PXDisplayAssetCombinedOverlayView, PXDisplayAssetViewModel;
@protocol PXDisplayAsset;

@interface PXDisplayAssetView : UXView <PXChangeObserver> {
    BOOL _isPerformingLayout;
}

@property (class, retain, nonatomic) NSLocale *currentLocaleForTesting;

@property (readonly, nonatomic) PXUpdater *updater;
@property (readonly, nonatomic) PXDisplayAssetViewModel *viewModel;
@property (readonly, nonatomic) PXDisplayAssetCombinedOverlayView *overlayView;
@property (nonatomic) struct CGSize { double width; double height; } viewportSize;
@property (retain, nonatomic) PXDisplayAssetContentView *contentView;
@property (readonly, nonatomic) NSImage *currentImage;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } imageFrame;
@property (retain, nonatomic) id<PXDisplayAsset> asset;
@property (retain, nonatomic) PXUIMediaProvider *mediaProvider;
@property (nonatomic) BOOL allowsTextSelection;
@property (copy, nonatomic) NSArray *stringsToHighlight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localizedTitleForAsset:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_updateContentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContentMode:(long long)a0;
- (void)layoutSubviews;
- (void)_setNeedsUpdate;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_commonPXDisplayAssetViewInit;
- (void)_invalidateContentView;
- (void)_invalidateContentViewLayout;
- (void)_invalidateContentViewProperties;
- (void)_invalidateViewModelProperties;
- (void)_updateContentViewLayout;
- (void)_updateContentViewProperties;
- (void)_updateViewModelProperties;

@end
