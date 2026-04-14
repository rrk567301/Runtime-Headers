@interface WKPDFPluginScrollbarLayer : CALayer

@property void *pdfPlugin;

- (void)drawInContext:(struct CGContext { } *)a0;
- (id)actionForKey:(id)a0;
- (id)initWithPDFPlugin:(void *)a0;

@end
