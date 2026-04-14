@class PDFAccessibilityEffectLayerPrivate;

@interface PDFAccessibilityEffectLayer : CALayer {
    PDFAccessibilityEffectLayerPrivate *_private;
}

- (void).cxx_destruct;
- (void)setup;
- (void)setDisplayBox:(long long)a0;
- (id)initWithPage:(id)a0;
- (void)_iterateCGPDFNode:(struct CGPDFTaggedNode { } *)a0 fromLayout:(struct CGPDFLayout { } *)a1;
- (void)updateVisibleLayers;
- (id)_addRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withColor:(id)a1 ofThickness:(double)a2 withString:(id)a3;
- (void)_addRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
