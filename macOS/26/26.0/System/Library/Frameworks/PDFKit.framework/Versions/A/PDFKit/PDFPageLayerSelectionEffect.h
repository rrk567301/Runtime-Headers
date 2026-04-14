@interface PDFPageLayerSelectionEffect : PDFPageLayerEffect

- (void)update;
- (void)addSelection:(id)a0;
- (void)updateColor:(unsigned long long)a0;
- (void)setSelections:(id)a0;
- (void)_generateRects;
- (id)compositingFilterWithRenderingProperties:(id)a0;
- (id)initWithPDFPageLayer:(id)a0;
- (void)updateCompositingMode;

@end
