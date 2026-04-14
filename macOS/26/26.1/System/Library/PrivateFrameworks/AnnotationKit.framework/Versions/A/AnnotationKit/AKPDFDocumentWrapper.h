@interface AKPDFDocumentWrapper : NSObject {
    struct CGPDFDocument { } *_pdfDocument;
}

- (struct CGPDFDocument { } *)pdfDocument;
- (void)dealloc;
- (id)init;
- (id)initWithPDF:(struct CGPDFDocument { } *)a0;

@end
