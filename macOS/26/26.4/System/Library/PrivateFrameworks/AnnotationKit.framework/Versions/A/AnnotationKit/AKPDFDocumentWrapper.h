@interface AKPDFDocumentWrapper : NSObject {
    struct CGPDFDocument { } *_pdfDocument;
}

- (id)init;
- (struct CGPDFDocument { } *)pdfDocument;
- (void)dealloc;
- (id)initWithPDF:(struct CGPDFDocument { } *)a0;

@end
