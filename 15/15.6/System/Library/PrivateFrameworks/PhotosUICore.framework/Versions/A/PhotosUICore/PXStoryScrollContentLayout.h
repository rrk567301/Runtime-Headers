@protocol PXStoryScrollContentLayoutDelegate;

@interface PXStoryScrollContentLayout : PXGLayout {
    struct { unsigned long long needsUpdate; unsigned long long updated; char isPerformingUpdate; char willPerformUpdate; } _updateFlags;
    struct { char scrollOffsetDidChange; } _delegateRespondsTo;
}

@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } scrollableOutsets;
@property (nonatomic) struct CGPoint { double x; double y; } scrollOffset;
@property (weak, nonatomic) id<PXStoryScrollContentLayoutDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)update;
- (void)_invalidateContentSize;
- (void)_updateContentSize;
- (struct CGPoint { double x0; double x1; })_scrollOffsetForVisibleRectOrigin:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_scrollOffsetFromVisibleRect;
- (void)_setScrollOffset:(struct CGPoint { double x0; double x1; })a0 updateScrollPosition:(char)a1;
- (struct CGPoint { double x0; double x1; })_visibleRectOriginForScrollOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)referenceSizeDidChange;
- (struct CGPoint { double x0; double x1; })scrollOffsetForScrollViewContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })scrollViewContentOffsetForScrollOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)visibleRectDidChange;

@end
