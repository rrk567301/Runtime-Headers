@class PDFView, PDFDocument, AKController;
@protocol PDFAKControllerDelegateProtocol;

@interface PDFAKDocumentAdaptorPrivate : NSObject {
    BOOL isTornDown;
    PDFDocument *pdfDocument;
    PDFView *pdfView;
    AKController *akController;
    id<PDFAKControllerDelegateProtocol> pdfAKControllerDelegate;
    double modelBaseScaleFactor;
}

- (void).cxx_destruct;

@end
