@interface AKPDFDocumentWrapper : NSObject {
    struct CGPDFDocument { } *_pdfDocument;
}

- (void)dealloc;
- (struct CGPDFDocument { } *)pdfDocument;
- (id)init;
- (id)initWithPDF:(struct CGPDFDocument { } *)a0;

@end
