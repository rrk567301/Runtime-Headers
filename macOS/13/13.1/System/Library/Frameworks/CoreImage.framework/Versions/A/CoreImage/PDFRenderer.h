@interface PDFRenderer : CGRenderer {
    struct __CFDictionary { } *info;
    struct __CFData { } *data;
    struct CGDataConsumer { } *dataConsumer;
}

- (void)dealloc;
- (id)init;
- (void)setFileURL:(id)a0;
- (BOOL)setCanvasWidth:(unsigned int)a0 height:(unsigned int)a1;
- (void)setFileTitle:(id)a0;
- (void)flushRender;
- (const struct __CFData { } *)pdfdata;

@end
