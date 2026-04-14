@interface MUPDFView : MUPDFViewBase

- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (double)_zoomToFitScaleFactor;
- (void)setMinScaleFactor:(double)a0;
- (void)magnificationDidChange:(id)a0;
- (double)autoScaleFactor;

@end
