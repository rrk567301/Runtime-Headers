@class PXGLayout;

@interface PXGTransitioningLayout : PXGAbsoluteCompositeLayout {
    struct { unsigned long long needsUpdate; unsigned long long updated; char isPerformingUpdate; char willPerformUpdate; } _updateFlags;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentFrameOverride;
@property (readonly, nonatomic) PXGLayout *contentLayout;

- (id)init;
- (void).cxx_destruct;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (void)update;
- (void)_invalidateSublayoutPositions;
- (void)_updateSublayoutPositions;
- (id)createAnchorForVisibleAreaIgnoringEdges:(unsigned long long)a0;
- (char)disableDebugAssertionForAnchorUpdatesWithZeroContentSize;
- (id)initWithContentLayout:(id)a0;
- (void)referenceSizeDidChange;
- (long long)scrollableAxis;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;

@end
