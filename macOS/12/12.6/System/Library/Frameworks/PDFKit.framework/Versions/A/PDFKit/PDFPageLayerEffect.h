@class PDFPageLayerEffectPrivate;

@interface PDFPageLayerEffect : CALayer {
    PDFPageLayerEffectPrivate *_private;
}

+ (id)createPDFNoteLayerEffectForAnnotation:(id)a0 withLayer:(id)a1;
+ (id)createPDFSelectionLayerEffectsForSelections:(id)a0 withLayer:(id)a1;
+ (id)createPDFCoachmarkLayerEffectsWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withLayer:(id)a1;
+ (id)createPDFAnnotationLayerEffectForAnnotation:(id)a0 withLayer:(id)a1;
+ (id)createPDFMarkupLayerEffectsForAnnotation:(id)a0 withLayer:(id)a1;
+ (id)createFlashEffectForPDFLinkAnnotation:(id)a0 withLayer:(id)a1 forType:(long long)a2;
+ (id)createPDFScannerResultLayerEffectsForScannerResult:(id)a0 withLayer:(id)a1;

- (void).cxx_destruct;
- (void)update;
- (id)UUID;
- (id)annotation;
- (void)addSelection:(id)a0;
- (void)setSelections:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pageFrame;
- (BOOL)shouldRotateContent;
- (id)pdfResult;
- (id)initWithPDFPageLayer:(id)a0;
- (void)updateColor:(unsigned long long)a0;
- (void)setPageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
