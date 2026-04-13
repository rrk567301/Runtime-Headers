@class PDFPageView, PDFView, NSTextView, PDFAnnotation;

@interface PDFKitTextViewPrivate : NSObject {
    NSTextView *textView;
    PDFView *pdfView;
    PDFPageView *pdfPageView;
    PDFAnnotation *annotation;
}

- (void).cxx_destruct;

@end
