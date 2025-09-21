@class TSWPPadding, NSString, TNPageContentLayout, TNAdditionalPageContentLayout;

@interface TNPageLayoutContainer : TNPageLayoutAbstract <TSKChangeSourceObserver, TSWPLayoutParent, TSWPColumnMetrics, TSWPStorageObserver>

@property (retain) TNAdditionalPageContentLayout *overlayContentLayout;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } contentFrame;
@property (readonly) TNPageContentLayout *contentLayout;
@property (readonly) char pageLayoutDirectionIsRTL;
@property (readonly, nonatomic) char wantsOverlayContentLayout;
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
- (void)addChild:(id)a0;
- (void)setChildren:(id)a0;
- (struct CGColor { } *)backgroundColor;
- (unsigned long long)pageCount;
- (unsigned long long)pageNumber;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bodyRect;
- (void)parentDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })nonAutosizedFrameForTextLayout:(id)a0;
- (int)verticalAlignmentForTextLayout:(id)a0;
- (unsigned long long)autosizeFlagsForTextLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })autosizedFrameForTextLayout:(id)a0 textSize:(struct CGSize { double x0; double x1; })a1;
- (id)computeLayoutGeometry;
- (id)dependentsOfTextLayout:(id)a0;
- (double)gapForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (void)invalidateForAutosizingTextLayout:(id)a0;
- (void)invalidateSize;
- (Class)repClassForTextLayout:(id)a0;
- (Class)repClassOverride;
- (char)textIsVertical;
- (void)updateChildrenFromInfo;
- (double)widthForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1;
- (id)dependentLayouts;
- (void)storage:(id)a0 didChangeRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 delta:(long long)a2 broadcastKind:(unsigned long long)a3;
- (void)willBeAddedToLayoutController:(id)a0;
- (void)willBeRemovedFromLayoutController:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })adjustedInsetsForTarget:(id)a0;
- (char)descendersCannotClip;
- (double)positionForColumnIndex:(unsigned long long)a0 bodyWidth:(double)a1 target:(id)a2 outWidth:(double *)a3 outGap:(double *)a4;
- (void)processChanges:(id)a0 forChangeSource:(id)a1;
- (void)_addOverlayContentLayout;
- (void)_removeOverlayContentLayout;
- (void)_updateOverlayContentLayout;
- (char)containsLayoutForInfo:(id)a0;
- (Class)contentLayoutClassOverride;
- (char)hasValidatedHeadersAndFooters;
- (id)headerFooterProvider;
- (id)initWithPageController:(id)a0 pageCoordinate:(struct TSUCellCoord { unsigned int x0; unsigned short x1; char x2; char x3; })a1;
- (id)p_pageInfo;
- (void)performBlockForEachHeaderFooterLayout:(id /* block */)a0;
- (id)printableInfoProvider;

@end
