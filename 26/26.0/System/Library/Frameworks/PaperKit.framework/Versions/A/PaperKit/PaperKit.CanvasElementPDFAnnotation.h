@interface PaperKit.CanvasElementPDFAnnotation : PDFAnnotation {
    void /* unknown type, empty encoding */ render;
    void /* unknown type, empty encoding */ containerBounds;
    void /* unknown type, empty encoding */ _akAnnotation;
    void /* unknown type, empty encoding */ writePaperKitAnnotation;
    void /* unknown type, empty encoding */ subelementId;
    void /* unknown type, empty encoding */ writingAKAnnotation;
}

- (id)copyWithZone:(void *)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)drawWithBox:(long long)a0 inContext:(struct CGContext { } *)a1;
- (void)_addAKAnnotationToDictionary:(struct __CFDictionary { } *)a0;
- (void)addControl;
- (id)akAnnotation;
- (Class)annotationSubclassForPopup;
- (id)initCommonWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary { } *)a0 forPage:(id)a1;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forType:(id)a1 withProperties:(id)a2;
- (id)initWithCGPDFAnnotation:(struct CGPDFAnnotation { } *)a0 forPage:(id)a1;
- (void)setIsFullyConstructed:(BOOL)a0;

@end
