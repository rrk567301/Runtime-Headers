@class NSURL;

@interface IFPDFDocument : NSObject

@property struct CGPDFDocument { } *pdfDocument;
@property (readonly) NSURL *url;
@property (readonly) unsigned long long numberOfPages;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)firstPage;
- (id)pageAtIndex:(unsigned long long)a0;

@end
