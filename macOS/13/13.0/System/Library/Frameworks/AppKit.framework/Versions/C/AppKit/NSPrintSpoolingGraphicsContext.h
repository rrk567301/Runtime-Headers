@class NSPrintInfo;

@interface NSPrintSpoolingGraphicsContext : NSCGSContext <NSPrintGraphicsContextAdvancing> {
    NSPrintInfo *_printInfo;
    BOOL _needsToEndDocument;
    struct CGContext { } *_blackHoleContext;
}

- (void)dealloc;
- (id)attributes;
- (void *)graphicsPort;
- (BOOL)isDrawingToScreen;
- (void)beginDocumentWithTitle:(id)a0;
- (void)beginPageWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)endPage;
- (void)endDocument;
- (id)initWithPrintInfo:(id)a0;

@end
