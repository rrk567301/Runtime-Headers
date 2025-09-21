@class PXStoryModel, NSSet, PXStoryViewModel, NSString, PXCArrayStore, PXStoryStyleManager, PXNumberAnimator;

@interface PXStoryStyleChromeContainerLayout : PXGAbsoluteCompositeLayout <PXChangeObserver> {
    struct { unsigned long long needsUpdate; unsigned long long updated; char isPerformingUpdate; char willPerformUpdate; } _updateFlags;
    struct _NSRange { unsigned long long location; unsigned long long length; } _styleSublayoutRange;
    PXCArrayStore *_framesArrayStore;
}

@property (readonly, nonatomic) PXNumberAnimator *visibilityAnimator;
@property (retain, nonatomic) PXStoryStyleManager *styleManager;
@property (retain, nonatomic) PXStoryModel *storyModel;
@property (retain, nonatomic) NSSet *artworkPreloadingRecords;
@property (retain, nonatomic) PXStoryViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)update;
- (id)initWithViewModel:(id)a0;
- (void)_updateStyleManager;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_invalidateResourcePreloading;
- (void)_invalidateStoryModel;
- (void)_invalidateStyleLayouts;
- (void)_invalidateStyleLayoutsContent;
- (void)_invalidateStyleManager;
- (void)_invalidateVisibilityAnimator;
- (void)_updateResourcePreloading;
- (void)_updateStoryModel;
- (void)_updateStyleLayouts;
- (void)_updateStyleLayoutsContent;
- (void)_updateVisibilityAnimator:(char)a0;
- (void)displayScaleDidChange;
- (void)referenceDepthDidChange;
- (void)referenceSizeDidChange;

@end
