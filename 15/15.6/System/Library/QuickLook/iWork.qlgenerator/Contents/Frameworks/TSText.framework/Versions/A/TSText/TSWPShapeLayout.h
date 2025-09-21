@class TSWPLayout, NSString, TSWPPadding, TSDWrapSegments, TSWPStorage;
@protocol TSWPShapeLayoutDelegate;

@interface TSWPShapeLayout : TSDShapeLayout <TSWPLayoutParent, TSWPColumnMetrics, TSWPStorageObserver, TSKChangeSourceObserver, TSWPStyleProviding> {
    TSDWrapSegments *_cachedInteriorWrapSegments;
    char _observingStorage;
    TSWPStorage *_observedStorage;
}

@property (nonatomic) char isTransferringLayoutGeometryToInfo;
@property (readonly, nonatomic) TSWPLayout *containedLayout;
@property (readonly, nonatomic) char autosizes;
@property (weak, nonatomic) id<TSWPShapeLayoutDelegate> delegate;
@property (readonly, nonatomic) char shouldShowInstructionalText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (readonly, nonatomic) unsigned long long columnCount;
@property (readonly, nonatomic) char alwaysStartsNewTarget;
@property (readonly, nonatomic) char shrinkTextToFit;
@property (readonly, nonatomic) char columnsAreLeftToRight;
@property (readonly, nonatomic) double textScaleFactor;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithInfo:(id)a0;
- (void)validate;
- (void)setGeometry:(id)a0;
- (void)invalidatePath;
- (id)styleProvider;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })nonAutosizedFrameForTextLayout:(id)a0;
- (int)verticalAlignmentForTextLayout:(id)a0;
- (unsigned long long)autosizeFlagsForTextLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })autosizedFrameForTextLayout:(id)a0 textSize:(struct CGSize { double x0; double x1; })a1;
- (id)dependentsOfTextLayout:(id)a0;
- (double)gapForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (id)interiorClippingPath;
- (void)invalidateSize;
- (void)processChangedProperty:(int)a0;
- (Class)repClassForTextLayout:(id)a0;
- (char)textLayoutShouldLayoutVertically:(id)a0;
- (char)textLayoutShouldWrapAroundExternalDrawables:(id)a0;
- (id)textWrapper;
- (void)updateChildrenFromInfo;
- (double)widthForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (void)createContainedLayoutForEditing;
- (struct CGPoint { double x0; double x1; })autosizePositionOffset;
- (struct CGPoint { double x0; double x1; })autosizePositionOffsetForFixedWidth:(char)a0 height:(char)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })autosizedTransform;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })autosizedTransformForInfoGeometry:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })computeLayoutTransform;
- (void)createContainedLayoutForInstructionalText;
- (id)dependentLayouts;
- (id)interiorWrapPath;
- (char)isInvisibleAutosizingShape;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (id)pathSource;
- (char)providesGuidesForChildLayouts;
- (char)shouldValidate;
- (void)willBeAddedToLayoutController:(id)a0;
- (void)willBeRemovedFromLayoutController:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })adjustedInsetsForTarget:(id)a0;
- (char)descendersCannotClip;
- (double)positionForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1 target:(id)a2 outWidth:(double *)a3 outGap:(double *)a4;
- (id)styleProviderForTextLayout:(id)a0;
- (char)wantsToProvideStylesForTextLayout:(id)a0;
- (void)processChanges:(id)a0 forChangeSource:(id)a1;
- (char)parentAutosizes;
- (id)interiorWrapSegments;
- (char)shouldInvalidateSizeWhenInvalidateSizeOfReliedOnLayout:(id)a0;
- (id)childInfosForChildLayouts;
- (id)bidirectionalSizeDependentLayouts;
- (void)transferLayoutGeometryToInfo:(id)a0 withAdditionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 assertIfInDocument:(char)a2;
- (char)shouldAssertDependenciesAreCorrect;

@end
