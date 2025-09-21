@class TSWPTOCLayoutHint;

@interface TSWPTOCLayout : TSWPShapeLayout {
    TSWPTOCLayoutHint *_hint;
    unsigned long long _initialCharIndex;
    unsigned long long _storageChangeCount;
    char _textIsVertical;
}

@property (nonatomic) struct CGSize { double width; double height; } maxSize;
@property (readonly, nonatomic) unsigned long long initialCharIndex;
@property (readonly, nonatomic) TSWPTOCLayoutHint *hint;
@property (readonly, nonatomic, getter=isLastLayoutInTOC) char lastLayoutInTOC;

- (void).cxx_destruct;
- (id)initWithInfo:(id)a0;
- (unsigned long long)columnCount;
- (char)isDraggable;
- (id)layoutMargins;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })nonAutosizedFrameForTextLayout:(id)a0;
- (char)shrinkTextToFit;
- (int)verticalAlignmentForTextLayout:(id)a0;
- (char)alwaysStartsNewTarget;
- (unsigned long long)autosizeFlagsForTextLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })autosizedFrameForTextLayout:(id)a0 textSize:(struct CGSize { double x0; double x1; })a1;
- (id)computeLayoutGeometry;
- (double)gapForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (void)invalidateForAutosizingTextLayout:(id)a0;
- (Class)repClassForTextLayout:(id)a0;
- (char)textLayoutShouldLayoutVertically:(id)a0;
- (char)textLayoutShouldWrapAroundExternalDrawables:(id)a0;
- (double)widthForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForStandardKnobs;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })adjustedInsetsForTarget:(id)a0;
- (char)descendersCannotClip;
- (double)maxAutoGrowBlockHeightForTextLayout:(id)a0;
- (double)positionForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1 target:(id)a2 outWidth:(double *)a3 outGap:(double *)a4;
- (id)commandToClampModelToLayoutSizeWithAdditionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)initWithInfo:(id)a0 initialCharIndex:(unsigned long long)a1 textIsVertical:(char)a2 maxSize:(struct CGSize { double x0; double x1; })a3;

@end
