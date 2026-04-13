@class PXGLayout;

@interface PXStoryTransitionLayout : PXGAbsoluteCompositeLayout {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentFrameOverride;
@property (readonly, nonatomic) PXGLayout *contentLayout;

- (id)init;
- (void).cxx_destruct;
- (void)update;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (void)referenceSizeDidChange;
- (long long)scrollableAxis;
- (id)initWithContentLayout:(id)a0;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (id)createAnchorForVisibleAreaIgnoringEdges:(unsigned long long)a0;
- (void)_invalidateSublayoutPositions;
- (void)_updateSublayoutPositions;

@end
