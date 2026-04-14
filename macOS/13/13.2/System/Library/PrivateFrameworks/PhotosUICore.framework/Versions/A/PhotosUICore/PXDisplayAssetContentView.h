@class UXView, NSError, NSArray, NSString, PXUIMediaProvider, PXImageRequester, PXDisplayAssetViewModel, NSImage, PXReusableObjectPool, NSObject;
@protocol OS_os_log, PXDisplayAsset;

@interface PXDisplayAssetContentView : UXView <PXReusableObject, PXChangeObserver> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
}

@property (class, readonly, nonatomic) PXReusableObjectPool *viewPool;

@property (readonly, nonatomic) UXView *contentView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentBounds;
@property (retain, nonatomic) NSError *latestError;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly, nonatomic) struct CGSize { double width; double height; } targetSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect;
@property (readonly, nonatomic) NSImage *image;
@property (readonly, nonatomic) PXImageRequester *imageRequester;
@property (readonly, nonatomic) double imageProgress;
@property (nonatomic) long long requestID;
@property (retain, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, nonatomic) double loadingProgress;
@property (readonly, nonatomic) long long playbackStyle;
@property (retain, nonatomic) PXUIMediaProvider *mediaProvider;
@property (copy, nonatomic) NSArray *placeholderImageFilters;
@property (nonatomic) double placeholderTransitionDuration;
@property (nonatomic) BOOL canDisplayLoadingIndicator;
@property (nonatomic) BOOL isDisplayingFullQualityContent;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentContentsRect;
@property (readonly, nonatomic) NSImage *currentImage;
@property (readonly, nonatomic) NSError *error;
@property (nonatomic, getter=isAnimatedContentEnabled) BOOL animatedContentEnabled;
@property (retain, nonatomic) PXDisplayAssetViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)checkOutViewForAsset:(id)a0;
+ (id)checkOutViewForAsset:(id)a0 withPlaybackStyle:(long long)a1;
+ (void)checkInView:(id)a0;

- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)prepareForReuse;
- (void)setError:(id)a0;
- (void)setContentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsLayout;
- (void)handleError:(id)a0;
- (void)_updateError;
- (void)setTargetSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateContent;
- (void)setContentMode:(long long)a0;
- (void)layoutSubviews;
- (void)imageDidChange;
- (void)didMoveToWindow;
- (void)_updateIfNeeded;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)becomeReusable;
- (void)contentModeDidChange;
- (void)imageProgressDidChange;
- (void)placeholderImageFiltersDidChange;
- (void)contentsRectDidChange;
- (void)imageRequesterDidChange:(unsigned long long)a0;
- (void)viewModelDidChange:(unsigned long long)a0;
- (void)setNeedsUpdateContent;
- (void)setImageRequester:(id)a0;
- (void)setImageProgress:(double)a0;
- (void)invalidateLoadingProgress;
- (void)animatedContentEnabledDidChange;
- (void)placeholderTransitionDurationDidChange;
- (void)isDisplayingFullQualityContentDidChange;
- (void)_invalidateError;
- (void)_invalidateViewModelProperties;
- (void)_updateViewModelProperties;
- (void)_updateTargetSize;
- (void)_updateProgressView;
- (void)_updateFailureView;
- (void)_loadContentView;

@end
