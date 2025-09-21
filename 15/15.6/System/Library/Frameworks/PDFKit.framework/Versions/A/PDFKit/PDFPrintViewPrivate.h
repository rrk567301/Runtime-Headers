@class NSString, PDFDocument;

@interface PDFPrintViewPrivate : NSObject {
    PDFDocument *document;
    NSString *printJobTitle;
    int pageIndex;
    char autoRotate;
    char rotateRight;
    long long scaleMode;
}

- (void).cxx_destruct;

@end
