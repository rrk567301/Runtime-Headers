@class PXGStackedSublayoutComposition, PXSectionedDataSource, NSString, PXStoryFeedViewModel, PXStoryFeedItemDecorationSource;

@interface PXStoryFeedContentLayout : PXGCompositeLayout <PXGSublayoutProvider, PXChangeObserver> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
}

@property (readonly, nonatomic) PXGStackedSublayoutComposition *composition;
@property (readonly, nonatomic) PXStoryFeedItemDecorationSource *decorationSource;
@property (retain, nonatomic) PXSectionedDataSource *presentedDataSource;
@property (readonly, nonatomic) PXStoryFeedViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)update;
- (id)initWithViewModel:(id)a0;
- (void)safeAreaInsetsDidChange;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (long long)scrollableAxis;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (id)layout:(id)a0 createSublayoutAtIndex:(long long)a1;
- (long long)anchoredSublayoutIndex;
- (struct CGSize { double x0; double x1; })layout:(id)a0 estimatedContentSizeForSublayoutAtIndex:(long long)a1 referenceSize:(struct CGSize { double x0; double x1; })a2;
- (id)itemPlacementControllerForItemReference:(id)a0;
- (void)_invalidateFeedSectionSublayouts;
- (void)_invalidateFeedSelectionSnapshot;
- (void)_invalidateCompositionParameters;
- (void)_updateFeedSectionSublayouts;
- (void)_updateFeedSelectionSnapshot;
- (void)_updateCompositionParameters;

@end
