@interface PDFPageLayerAnnotationEffect : PDFPageLayerEffect

- (id)UUID;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)update;
- (id)annotation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pageFrame;

@end
