@interface WKPDFPluginScrollbarLayer : CALayer

@property void *pdfPlugin;

- (id)actionForKey:(id)a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (id)initWithPDFPlugin:(void *)a0 shouldFlip:(BOOL)a1;

@end
