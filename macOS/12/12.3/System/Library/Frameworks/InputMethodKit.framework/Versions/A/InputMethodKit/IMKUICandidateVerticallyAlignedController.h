@interface IMKUICandidateVerticallyAlignedController : IMKUIWindowBasedCandidateController

- (double)numberOfColumns;
- (void)moveRight:(id)a0;
- (void)moveLeft:(id)a0;
- (void)moveDown:(id)a0;
- (void)moveUp:(id)a0;
- (void)setupProperties;
- (BOOL)candidateViewCanScroll;
- (struct CGSize { double x0; double x1; })recommendedDocumentSizeWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)layoutConstraintsForData:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lineViewFrameWithNumber:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })preferredCanvasSize;
- (void)arrangeCanvasElements;
- (struct CGSize { double x0; double x1; })customSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })recommendedWindowFrameWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateNumberOfLinesInWindow;
- (id)topVisibleCandidates;
- (struct CGSize { double x0; double x1; })extraSize;
- (void)updateSelectionKeys;
- (void)updateCanvasAfterSizeChange;
- (BOOL)isSortable;

@end
