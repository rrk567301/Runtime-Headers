@class PXStoryFeedContentLayout, NSString, PXStoryFeedViewModel;

@interface PXStoryFeedViewLayout : PXGScrollLayout <PXGScrollLayoutDelegate> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    BOOL _isClearingLastVisibleAreaAnchoringInformation;
}

@property (readonly, nonatomic) PXStoryFeedContentLayout *feedContentLayout;
@property (readonly, nonatomic) PXStoryFeedViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)update;
- (id)initWithViewModel:(id)a0;
- (void)_updateContentSize;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)referenceSizeDidChange;
- (long long)scrollableAxis;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (void)clearLastVisibleAreaAnchoringInformation;
- (unsigned long long)contentChangeTrend;
- (void)_invalidateContentSize;
- (id)itemPlacementControllerForItemReference:(id)a0;
- (void)scrollLayoutWillEndScrolling:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)_invalidateScrollParameters;
- (void)_updateAnchorForVisibleArea;
- (void)_updateScrollParameters;
- (void)_invalidateAnchorForVisibleArea;

@end
