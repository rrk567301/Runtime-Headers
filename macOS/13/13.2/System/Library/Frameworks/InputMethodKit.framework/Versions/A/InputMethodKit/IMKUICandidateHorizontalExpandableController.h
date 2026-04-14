@interface IMKUICandidateHorizontalExpandableController : IMKUICandidateHorizontalController

@property (nonatomic) BOOL expandedInternal;
@property (nonatomic) long long UIState;

- (void)moveRight:(id)a0;
- (void)moveLeft:(id)a0;
- (double)numberOfRows;
- (void)moveDown:(id)a0;
- (void)moveUp:(id)a0;
- (double)numberOfColumns;
- (BOOL)isExpanded;
- (void)expand;
- (void)collapse;
- (void)setDocumentSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateLayout:(id)a0;
- (struct CGSize { double x0; double x1; })preferredCanvasSize;
- (void)arrangeCanvasElements;
- (struct CGSize { double x0; double x1; })customSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })recommendedWindowFrameWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)candidateViewCanScroll;
- (id)layoutConstraintsForData:(id)a0;
- (void)updateAuxiliaryViews;
- (BOOL)flattensViewArchitecture;
- (id)topVisibleCandidates;
- (BOOL)shouldLimitWindowSizeToCanvasSize;
- (void)arrowViewPressed:(id)a0;
- (void)calibrateLayoutForExpandedHorizontalView;
- (void)calibrateLayoutForCollapsedHorizontalView;
- (void)setWindowFrameWithAnimation:(BOOL)a0;
- (void)expandWindowWithAnimation;
- (void)collapseWindowWithAnimation;
- (void)collapseWindowWithoutAnimation;
- (id)elementsPresentInLine:(id)a0 andLine:(id)a1;
- (void)moveElementsInFromTheLeft:(id)a0 inLine:(id)a1;
- (void)setOriginalFramesForNewLine:(id)a0 originalLine:(id)a1;
- (void)prepareNewLayoutForAnimation:(id)a0;
- (void)updateSelectionKeys;
- (BOOL)canExpand;
- (void)selectNextSortingMethod;
- (void)selectPreviousSortingMethod;
- (void)selectSortingMethod:(id)a0 expand:(BOOL)a1;
- (void)selectDefaultSortingMethod;
- (void)forceCollapse;
- (void)didSelectSortingMode:(id)a0;
- (void)windowDidHide;
- (void)updateCanvasAfterSizeChange;
- (void)windowAnimationDidFinish;
- (void)resizeWindowIfNecessary:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateHighlightForLineView:(id)a0;
- (BOOL)isSortable;
- (double)auxiliaryViewWidth;
- (struct CGSize { double x0; double x1; })customSizeForExpansion:(BOOL)a0;

@end
