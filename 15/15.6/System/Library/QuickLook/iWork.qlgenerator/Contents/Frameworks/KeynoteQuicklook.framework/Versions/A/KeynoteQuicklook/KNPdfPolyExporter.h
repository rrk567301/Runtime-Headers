@interface KNPdfPolyExporter : KNPdfExporter

- (void)drawPolyPageBodyInContext:(struct CGContext { } *)a0 scaledClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (char)drawPolyPageInContext:(struct CGContext { } *)a0 viewScale:(double)a1 unscaledClipRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 createPage:(char)a3;

@end
