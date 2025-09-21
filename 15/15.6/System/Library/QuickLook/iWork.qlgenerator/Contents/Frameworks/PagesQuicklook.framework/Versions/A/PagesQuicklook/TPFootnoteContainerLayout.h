@class NSString, TSWPPadding;
@protocol TSWPFootnoteMarkProvider;

@interface TPFootnoteContainerLayout : TSDLayout <TSWPColumnMetrics, TSWPLayoutParent, TSWPFootnoteMarkProvider> {
    char _vertical;
    double _lineWidth;
    double _footnoteSpacing;
    id<TSWPFootnoteMarkProvider> _footnoteMarkProvider;
}

@property (readonly, nonatomic) char isEmpty;
@property (readonly, nonatomic) double blockHeight;
@property (readonly, nonatomic) double maxBlockHeight;
@property (nonatomic) char includeFootnoteSeparatorLine;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } footnoteSeparatorLineFrame;
@property (readonly, nonatomic) TSWPPadding *layoutMargins;
@property (readonly, nonatomic) unsigned long long columnCount;
@property (readonly, nonatomic) char alwaysStartsNewTarget;
@property (readonly, nonatomic) char shrinkTextToFit;
@property (readonly, nonatomic) char columnsAreLeftToRight;
@property (readonly, nonatomic) double textScaleFactor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setLineWidth:(double)a0;
- (void)validate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })nonAutosizedFrameForTextLayout:(id)a0;
- (int)verticalAlignmentForTextLayout:(id)a0;
- (unsigned long long)autosizeFlagsForTextLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })autosizedFrameForTextLayout:(id)a0 textSize:(struct CGSize { double x0; double x1; })a1;
- (id)computeLayoutGeometry;
- (id)dependentsOfTextLayout:(id)a0;
- (double)gapForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (void)invalidateForAutosizingTextLayout:(id)a0;
- (Class)repClassForTextLayout:(id)a0;
- (Class)repClassOverride;
- (char)shouldProvideSizingGuides;
- (char)textIsVertical;
- (char)textLayoutShouldLayoutVertically:(id)a0;
- (double)widthForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (id)markStringForFootnoteReferenceStorage:(id)a0;
- (void)setFootnoteSpacing:(long long)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })adjustedInsetsForTarget:(id)a0;
- (char)descendersCannotClip;
- (double)maxAutoGrowBlockHeightForTextLayout:(id)a0;
- (double)positionForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1 target:(id)a2 outWidth:(double *)a3 outGap:(double *)a4;
- (void)addFootnoteLayout:(id)a0;
- (id)initWithFootnoteMarkProvider:(id)a0 vertical:(char)a1 lineWidth:(double)a2 maxFootnoteBlockHeight:(double)a3 footnoteSpacing:(double)a4;
- (id)markStringForFootnoteReferenceStorage:(id)a0 ignoreDeletedFootnotes:(char)a1 forceDocumentEndnotes:(char)a2;
- (void)removeAllFootnoteLayouts;
- (void)removeFootnoteLayout:(id)a0;
- (void)removeFootnoteLayoutWithInfo:(id)a0;
- (char)textIsVerticalForFootnoteReferenceStorage:(id)a0;
- (void)trimFootnoteLayoutsFromIndex:(unsigned long long)a0;

@end
