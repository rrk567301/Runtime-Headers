@class PXGLayout, NSString, NSNumber, PXGScrollViewModel;
@protocol PXGScrollLayoutDelegate;

@interface PXGScrollLayout : PXGLayout <PXGAnchorDelegate, PXGViewSource, PXGScrollViewContainerDelegate, PXChangeObserver, PXGDataSourceDrivenLayout> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    unsigned int _scrollViewSpriteIndex;
    unsigned short _scrollViewMediaVersion;
    BOOL _isUpdatingContentLayout;
    struct { BOOL willBeginScrolling; BOOL didScroll; BOOL willEndScrollingWithVelocityTargetContentOffsetCurrentContentOffset; BOOL didEndScrolling; } _delegateRespondsTo;
}

@property (class, nonatomic, getter=isRunningPPTScrollTest) BOOL runningPPTScrollTest;

@property (readonly, nonatomic) PXGScrollViewModel *scrollViewModel;
@property (nonatomic) BOOL wantsScrollView;
@property (readonly, nonatomic) BOOL isScrolling;
@property (retain, nonatomic) PXGLayout *contentLayout;
@property (weak, nonatomic) id<PXGScrollLayoutDelegate> delegate;
@property (retain, nonatomic) NSNumber *fixedWidth;
@property (retain, nonatomic) NSNumber *fixedHeight;
@property (nonatomic) float scrollViewSpriteZPosition;
@property (nonatomic) long long scrollDecelerationRate;
@property (nonatomic) BOOL clipsToBounds;
@property (nonatomic) BOOL showsHorizontalScrollIndicator;
@property (nonatomic) BOOL showsVerticalScrollIndicator;
@property (nonatomic) BOOL alwaysBounceHorizontal;
@property (nonatomic) BOOL alwaysBounceVertical;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } horizontalScrollIndicatorInsets;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } verticalScrollIndicatorInsets;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } hitTestContentInsets;
@property (nonatomic) BOOL draggingPerformsScroll;
@property (nonatomic) BOOL transfersScrollToContainer;
@property (nonatomic) double horizontalInterPageSpacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)stopScrolling;
- (void)isScrollingDidChange;
- (void)didUpdate;
- (void)_invalidateScrollView;
- (id)init;
- (void)setIsScrolling:(BOOL)a0;
- (void)safeAreaInsetsDidChange;
- (void)update;
- (id)axContainingScrollViewForAXGroup:(id)a0;
- (void).cxx_destruct;
- (void)contentSizeDidChange;
- (id)axSpriteIndexes;
- (void)userInterfaceDirectionDidChange;
- (void)_invalidateContentLayout;
- (void)_updateContentLayout;
- (void)alphaDidChange;
- (struct CGPoint { double x0; double x1; })anchor:(id)a0 visibleRectOriginForProposedVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 forLayout:(id)a2;
- (void)contentLayoutDidChange;
- (id)createAnchorForVisibleAreaIgnoringEdges:(unsigned long long)a0;
- (void)displayScaleDidChange;
- (id)initWithContentLayout:(id)a0;
- (void)insertSublayout:(id)a0 atIndex:(long long)a1;
- (id)layoutForItemChanges;
- (void)referenceSizeDidChange;
- (long long)scrollableAxis;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (Class)viewClassForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)viewEnvironmentDidChange;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)a0 inLayout:(id)a1;
- (void)visibleRectDidChange;
- (void)willUpdate;
- (void)_invalidateLocalContent;
- (void)_updateLocalContent;
- (BOOL)axShouldBeConsideredAsSubgroup;
- (long long)intrinsicScrollRegime;
- (void)lastScrollDirectionDidChange;
- (void)scrollViewContainerDidEndScrolling:(id)a0;
- (void)scrollViewContainerDidScroll:(id)a0;
- (void)scrollViewContainerWillBeginScrolling:(id)a0;
- (void)scrollViewContainerWillEndScrolling:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2 currentContentOffset:(struct CGPoint { double x0; double x1; })a3;
- (void)sublayoutNeedsUpdate:(id)a0;

@end
