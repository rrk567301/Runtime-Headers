@interface IMKUICandidatePredictionVerticalController : IMKUICandidateVerticalController

- (double)numberOfRows;
- (void)moveDown:(id)a0;
- (void)moveUp:(id)a0;
- (void)arrangeCanvasElements;
- (struct CGSize { double x0; double x1; })customSize;
- (void)updateCandidateSelection;
- (void)willUpdateCandidateCanvas;

@end
