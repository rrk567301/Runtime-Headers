@class NSDictionary;

@interface NSPrintCopyingGraphicsContext : NSCGSContext <NSPrintGraphicsContextAdvancing> {
    NSDictionary *_attributes;
    BOOL _isCopyingToPDF;
}

- (id)attributes;
- (BOOL)isDrawingToScreen;
- (void)dealloc;
- (void)endPage;
- (void)beginDocumentWithTitle:(id)a0;
- (void)beginPageWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)endDocument;
- (id)initWithContextAttributes:(id)a0;

@end
