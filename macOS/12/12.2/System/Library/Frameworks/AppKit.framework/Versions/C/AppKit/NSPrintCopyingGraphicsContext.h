@class NSDictionary;

@interface NSPrintCopyingGraphicsContext : NSCGSContext <NSPrintGraphicsContextAdvancing> {
    NSDictionary *_attributes;
    BOOL _isCopyingToPDF;
}

- (void)dealloc;
- (id)attributes;
- (id)initWithContextAttributes:(id)a0;
- (BOOL)isDrawingToScreen;
- (void)endDocument;
- (void)beginDocumentWithTitle:(id)a0;
- (void)beginPageWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)endPage;

@end
