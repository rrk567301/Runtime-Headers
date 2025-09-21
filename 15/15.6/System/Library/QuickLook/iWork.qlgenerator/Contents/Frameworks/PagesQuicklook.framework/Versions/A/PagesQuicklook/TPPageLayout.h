@class TSWPPadding, NSString, TPBodyLayout, TSDFill;
@protocol TPSectionTemplateDrawableProvider;

@interface TPPageLayout : TSWPPageLayout <TSWPLayoutParent, TSWPAttachmentNumberProviding, TSWPColumnMetrics, TPAttachmentLayoutParent>

@property (readonly, weak, nonatomic) TPBodyLayout *bodyLayout;
@property (readonly, nonatomic) char allowsFootnotes;
@property (readonly, nonatomic) char canHavePreviousPageFootnotes;
@property (readonly, nonatomic) unsigned long long pageIndex;
@property (readonly, nonatomic) char marginsAreMirrored;
@property (readonly, nonatomic) unsigned long long pageNumber;
@property (readonly, nonatomic) unsigned long long pageCount;
@property (readonly, weak, nonatomic) id<TPSectionTemplateDrawableProvider> sectionTemplateDrawableProvider;
@property (readonly, nonatomic, getter=isValidating) char validating;
@property (readonly, nonatomic) TSDFill *backgroundFill;
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

- (void).cxx_destruct;
- (void)validate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })nonAutosizedFrameForTextLayout:(id)a0;
- (int)verticalAlignmentForTextLayout:(id)a0;
- (void)addAttachmentLayout:(id)a0;
- (unsigned long long)autosizeFlagsForTextLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })autosizedFrameForTextLayout:(id)a0 textSize:(struct CGSize { double x0; double x1; })a1;
- (id)dependentsOfTextLayout:(id)a0;
- (double)gapForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (void)invalidateForAutosizingTextLayout:(id)a0;
- (int)naturalAlignmentForTextLayout:(id)a0;
- (unsigned long long)pageCountForAttachment:(id)a0;
- (unsigned long long)pageNumberForAttachment:(id)a0;
- (Class)repClassForTextLayout:(id)a0;
- (char)textIsVertical;
- (double)widthForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })adjustedInsetsForTarget:(id)a0;
- (char)descendersCannotClip;
- (char)forceParentAutosizedFrameForTextLayout:(id)a0;
- (double)maxAutoGrowBlockHeightForTextLayout:(id)a0;
- (double)maxAutoGrowLineWidthForTextLayout:(id)a0;
- (double)positionForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1 target:(id)a2 outWidth:(double *)a3 outGap:(double *)a4;
- (id)headerFooterProvider;
- (id)existingAttachmentLayoutForInfo:(id)a0;
- (id)layoutForChildInfo:(id)a0;
- (id)layoutsCausingWrapOnTextLayoutTarget:(id)a0 ignoreIntersection:(char)a1;
- (id)layoutsForChildInfo:(id)a0;
- (id)p_childLayoutInParentLayout:(id)a0 forChildInfo:(id)a1;
- (id)primaryLayoutForInfo:(id)a0;

@end
