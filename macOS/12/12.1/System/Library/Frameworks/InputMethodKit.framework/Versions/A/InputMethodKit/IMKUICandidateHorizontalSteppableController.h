@interface IMKUICandidateHorizontalSteppableController : IMKUICandidateHorizontalController

- (double)numberOfColumns;
- (id)layoutConstraintsForData:(id)a0;
- (void)didUpdateTopVisibleLine;
- (void)arrangeCanvasElements;
- (struct CGSize { double x0; double x1; })customSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })recommendedWindowFrameWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateAuxiliaryViews;
- (void)updateSelectionKeys;
- (void)updateStepper;
- (void)stepperViewUpArrowPressed;
- (void)stepperViewDownArrowPressed;

@end
