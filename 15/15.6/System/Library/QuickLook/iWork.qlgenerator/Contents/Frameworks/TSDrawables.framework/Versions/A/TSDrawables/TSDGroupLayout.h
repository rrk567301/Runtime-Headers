@class NSOrderedSet, TSDLayoutGeometry, TSUBezierPath;

@interface TSDGroupLayout : TSDContainerLayout <TSDWrappableParent> {
    TSDLayoutGeometry *mDynamicLayoutGeometry;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mBoundsForStandardKnobs;
    TSUBezierPath *mCachedWrapPath;
    TSUBezierPath *mCachedPathForClippingConnectionLines;
    NSOrderedSet *mCachedGroupedChildren;
    double mClampingScaleForChildLayouts;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mBoundsForChildren;
    char mHasInvalidated;
}

@property (readonly, nonatomic) NSOrderedSet *i_groupedChildren;
@property (readonly, nonatomic) char i_isClampedToParentByScaling;
@property (readonly, nonatomic) double i_clampingScaleForChildLayouts;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } i_boundsForChildren;

- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithInfo:(id)a0;
- (struct CGSize { double x0; double x1; })minimumSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRect;
- (char)isDraggable;
- (void)dragBy:(struct CGPoint { double x0; double x1; })a0;
- (char)allowsConnections;
- (id)computeLayoutGeometry;
- (id)descendentWrappables;
- (id)i_computeWrapPath;
- (id)i_wrapPath;
- (void)invalidateExteriorWrap;
- (id)layoutGeometryFromInfo;
- (void)processChangedProperty:(int)a0;
- (void)updateChildrenFromInfo;
- (id)computeInfoGeometryDuringResize;
- (id)reliedOnLayouts;
- (id)additionalDependenciesForChildLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrame;
- (void)beginDynamicOperation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForStandardKnobs;
- (char)canAspectRatioLockBeChangedByUser;
- (void)endDynamicOperation;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (void)p_createDynamicCopies;
- (void)p_destroyDynamicCopies;
- (void)p_invalidateParentForWrap;
- (char)providesGuidesForChildLayouts;
- (char)resizeMayChangeAspectRatio;
- (void)setDynamicGeometry:(id)a0;
- (char)supportsFlipping;
- (char)supportsRotation;
- (id)visibleGeometries;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })baseFrameForFrameForCullingWithAdditionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)pathForClippingConnectionLines;
- (char)descendentWrappablesContainsWrappable:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectInRootForPresentingAnnotationPopoverForSelectionPath:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectInRootForSelectionPath:(id)a0;
- (id)childInfosForChildLayouts;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForCaptionPositioning;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectInRootForCalculatingActivityLineEndpoint;
- (char)supportsParentFlipping;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForCullingWithBaseFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 additionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrameForCaptionEdgeInsetsCalculation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })computeBoundsForStandardKnobs;
- (void)i_clearInvalidationCache;
- (id)i_computeBaseLayoutGeometry;
- (id)i_wrapPathIncludingTitleAndCaption;
- (id)p_childWrapPathsFrom:(id)a0 inDescendents:(id)a1 includingTitleAndCaption:(char)a2;
- (id)p_groupInfo;
- (char)protected_isNonGroupedDescendant:(id)a0;
- (char)shouldBeIncludedInParentFrameForCulling;
- (void)transferLayoutGeometryToInfo:(id)a0 withAdditionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 assertIfInDocument:(char)a2;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformForFindHighlightsOfChild:(id)a0;
- (void)updateLayoutGeometryInPreparationForPartitioning;

@end
