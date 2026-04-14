@class NSURL;

@interface _AXFMouseCursorGeneratorLayer : NSObject {
    struct CGPDFDocument { } *_pdf;
    struct CGPDFPage { } *_pdfPage;
}

@property (copy, nonatomic) NSURL *_pdfURL;

- (void)dealloc;
- (void).cxx_destruct;
- (struct CGPDFPage { } *)_pdfPage;
- (struct CGSize { double x0; double x1; })_baseSize;
- (struct CGPDFDocument { } *)_pdf;
- (struct CGImage { } *)_createImageForScale:(double)a0 color:(id)a1;

@end
