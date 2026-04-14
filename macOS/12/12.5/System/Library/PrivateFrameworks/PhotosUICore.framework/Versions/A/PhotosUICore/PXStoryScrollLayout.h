@class PXStoryModel, NSString, PXStoryStyleScrollContentLayout, PXStoryPagedScrollContentLayout;
@protocol PXStoryScrollLayoutTargetContentOffsetAdjuster;

@interface PXStoryScrollLayout : PXGScrollLayout <PXGScrollLayoutDelegate, PXChangeObserver> {
    BOOL _isUpdating;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _postUpdateFlags;
    unsigned long long _scrollPositionUpdateReason;
}

@property (readonly, nonatomic) PXStoryPagedScrollContentLayout *pagedScrollContentLayout;
@property (readonly, nonatomic) PXStoryStyleScrollContentLayout *styleScrollContentLayout;
@property (readonly, nonatomic) id modelChangeOrigin;
@property (retain, nonatomic) id<PXStoryScrollLayoutTargetContentOffsetAdjuster> targetContentOffsetAdjuster;
@property (readonly, nonatomic) long long scrollPositionComparedToEnd;
@property (nonatomic) BOOL scrollBeganAtTimelineEnd;
@property (readonly, nonatomic) PXStoryModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)update;
- (void)_updateContentView;
- (id)initWithModel:(id)a0;
- (void)didUpdate;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)referenceSizeDidChange;
- (void)willUpdate;
- (void)scrollLayoutWillBeginScrolling:(id)a0;
- (void)scrollLayoutDidScroll:(id)a0;
- (void)scrollLayoutWillEndScrolling:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)_invalidateContentView;
- (void)_invalidateScrollDecelerationRate;
- (void)_invalidateWantsScrollView;
- (void)isScrollingDidChange;
- (void)_invalidateModelIsScrolling;
- (void)_invalidateScrollViewZPosition;
- (void)contentLayoutDidChange;
- (void)_updateContentScrollPosition;
- (void)_updateScrollDecelerationRate;
- (void)_updateScrollViewZPosition;
- (void)_updateWantsScrollView;
- (void)_updateModelIsScrolling;
- (void)_updateModelScrollPosition;
- (void)_invalidatePostUpdateEntities:(unsigned long long)a0;
- (void)_invalidateModelScrollPosition;
- (void)_invalidateContentScrollPositionWithReason:(unsigned long long)a0;

@end
