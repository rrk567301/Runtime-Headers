@interface PDFPageLayerAnnotationEffect : PDFPageLayerEffect

- (id)annotation;
- (void)drawInContext:(struct CGContext { } *)a0;
- (void)update;
- (id)UUID;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pageFrame;

@end
