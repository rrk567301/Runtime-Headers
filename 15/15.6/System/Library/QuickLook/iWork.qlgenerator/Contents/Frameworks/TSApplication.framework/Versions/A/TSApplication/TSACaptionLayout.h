@class TSDLayoutGeometry, NSString, TSDPathSource;

@interface TSACaptionLayout : TSWPShapeLayout <TSDWrappable, TSTTablePartitionerParticipating> {
    TSDPathSource *_layoutPathSource;
}

@property (readonly, nonatomic) char hasAlpha;
@property (copy, nonatomic) TSDLayoutGeometry *geometry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (void)validate;
- (void)setParent:(id)a0;
- (void)invalidatePath;
- (char)isDraggable;
- (char)autosizes;
- (char)allowsConnections;
- (unsigned long long)autosizeFlagsForTextLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })autosizedFrameForTextLayout:(id)a0 textSize:(struct CGSize { double x0; double x1; })a1;
- (id)computeLayoutGeometry;
- (void)processChangedProperty:(int)a0;
- (char)textLayoutShouldWrapAroundExternalDrawables:(id)a0;
- (id)reliedOnLayouts;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })computeLayoutTransform;
- (id)dependentLayouts;
- (char)isInGroup;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (id)pathSource;
- (char)shouldValidate;
- (char)supportsRotation;
- (double)maxAutoGrowBlockHeightForTextLayout:(id)a0;
- (id)reliedOnLayoutsForTextLayout:(id)a0;
- (id)p_captionLayout;
- (struct CGSize { double x0; double x1; })p_sizeForProposedSize:(struct CGSize { double x0; double x1; })a0 zeroSize:(struct CGSize { double x0; double x1; })a1;
- (char)isDynamicallyChangingAvailableSpaceForContainedChild;
- (struct CGPoint { double x0; double x1; })offsetForPlacement:(id)a0;
- (id)p_captionInfo;
- (id)p_parentInfo;
- (id)p_parentLayout;
- (struct CGPoint { double x0; double x1; })p_pointInFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forAnchorLocation:(long long)a1;
- (char)p_textIsCompletelyOverflowed;
- (id)p_titleInfo;
- (id)p_titleLayout;
- (char)participatesInLastRowHeight;
- (char)supportsParentFlipping;
- (char)wantsNormalLayoutDuringDynamicRotation;

@end
