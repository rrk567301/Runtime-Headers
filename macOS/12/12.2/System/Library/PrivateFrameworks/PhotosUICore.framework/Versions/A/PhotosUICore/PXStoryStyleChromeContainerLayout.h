@class PXStoryModel, NSSet, PXStoryViewModel, NSString, PXCArrayStore, PXStoryStyleManager, PXNumberAnimator;

@interface PXStoryStyleChromeContainerLayout : PXGAbsoluteCompositeLayout <PXChangeObserver> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
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
- (void)referenceSizeDidChange;
- (void)screenScaleDidChange;
- (void)referenceDepthDidChange;
- (void)_invalidateStoryModel;
- (void)_updateStoryModel;
- (void)_invalidateStyleManager;
- (void)_invalidateStyleLayouts;
- (void)_updateStyleLayouts;
- (void)_invalidateVisibilityAnimator;
- (void)_updateVisibilityAnimator:(BOOL)a0;
- (void)_invalidateStyleLayoutsContent;
- (void)_updateStyleLayoutsContent;
- (void)_invalidateResourcePreloading;
- (void)_updateResourcePreloading;

@end
