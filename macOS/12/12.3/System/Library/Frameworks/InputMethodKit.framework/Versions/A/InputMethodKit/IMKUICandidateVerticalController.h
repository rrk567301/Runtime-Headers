@interface IMKUICandidateVerticalController : IMKUIWindowBasedCandidateController

@property (readonly, nonatomic) double minimumSelectionViewWidth;

- (double)numberOfRows;
- (BOOL)isExpanded;
- (double)maxHeight;
- (id)layoutConstraintsForData:(id)a0;
- (void)arrangeCanvasElements;
- (struct CGSize { double x0; double x1; })customSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })recommendedWindowFrameWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)topVisibleCandidates;
- (struct CGSize { double x0; double x1; })extraSize;
- (void)updateSelectionKeys;
- (void)updateCanvasAfterSizeChange;
- (BOOL)isSortable;

@end
