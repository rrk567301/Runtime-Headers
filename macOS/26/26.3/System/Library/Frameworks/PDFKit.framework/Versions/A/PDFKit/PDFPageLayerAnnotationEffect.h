@interface PDFPageLayerAnnotationEffect : PDFPageLayerEffect

- (id)annotation;
- (void)update;
- (id)UUID;
- (void)drawInContext:(struct CGContext { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })pageFrame;

@end
