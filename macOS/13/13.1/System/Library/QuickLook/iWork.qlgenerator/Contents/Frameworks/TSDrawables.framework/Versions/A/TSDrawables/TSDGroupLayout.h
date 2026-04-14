@class NSOrderedSet, TSDLayoutGeometry, TSUBezierPath;

@interface TSDGroupLayout : TSDContainerLayout <TSDWrappableParent> {
    TSDLayoutGeometry *mDynamicLayoutGeometry;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mBoundsForStandardKnobs;
    TSUBezierPath *mCachedWrapPath;
    TSUBezierPath *mCachedPathForClippingConnectionLines;
    NSOrderedSet *mCachedGroupedChildren;
    double mClampingScaleForChildLayouts;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mBoundsForChildren;
    BOOL mHasInvalidated;
}

@property (readonly, nonatomic) NSOrderedSet *i_groupedChildren;
@property (readonly, nonatomic) BOOL i_isClampedToParentByScaling;
@property (readonly, nonatomic) double i_clampingScaleForChildLayouts;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } i_boundsForChildren;

- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithInfo:(id)a0;
- (struct CGSize { double x0; double x1; })minimumSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRect;
- (BOOL)isDraggable;
- (void)dragBy:(struct CGPoint { double x0; double x1; })a0;
- (id)computeLayoutGeometry;
- (id)layoutGeometryFromInfo;
- (id)descendentWrappables;
- (void)updateChildrenFromInfo;
- (void)processChangedProperty:(int)a0;
- (id)i_computeWrapPath;
- (id)i_wrapPath;
- (void)invalidateExteriorWrap;
- (BOOL)allowsConnections;
- (void)beginDynamicOperation;
- (void)endDynamicOperation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForStandardKnobs;
- (void)setDynamicGeometry:(id)a0;
- (BOOL)resizeMayChangeAspectRatio;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (id)computeInfoGeometryDuringResize;
- (id)additionalDependenciesForChildLayout:(id)a0;
- (id)reliedOnLayouts;
- (id)visibleGeometries;
- (BOOL)providesGuidesForChildLayouts;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrame;
- (BOOL)supportsRotation;
- (BOOL)supportsFlipping;
- (void)p_createDynamicCopies;
- (void)p_destroyDynamicCopies;
- (void)p_invalidateParentForWrap;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })baseFrameForFrameForCullingWithAdditionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)pathForClippingConnectionLines;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectInRootForSelectionPath:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectInRootForPresentingAnnotationPopoverForSelectionPath:(id)a0;
- (BOOL)descendentWrappablesContainsWrappable:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForCaptionPositioning;
- (id)childInfosForChildLayouts;
- (BOOL)supportsParentFlipping;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForCullingWithBaseFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 additionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (void)i_clearInvalidationCache;
- (void)transferLayoutGeometryToInfo:(id)a0 withAdditionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 assertIfInDocument:(BOOL)a2;
- (void)updateLayoutGeometryInPreparationForPartitioning;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrameForCaptionEdgeInsetsCalculation;
- (id)i_wrapPathIncludingTitleAndCaption;
- (BOOL)shouldBeIncludedInParentFrameForCulling;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectInRootForCalculatingActivityLineEndpoint;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeBoundsForStandardKnobs;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForFindHighlightsOfChild:(id)a0;
- (id)p_groupInfo;
- (id)i_computeBaseLayoutGeometry;
- (BOOL)protected_isNonGroupedDescendant:(id)a0;
- (id)p_childWrapPathsFrom:(id)a0 inDescendents:(id)a1 includingTitleAndCaption:(BOOL)a2;

@end
