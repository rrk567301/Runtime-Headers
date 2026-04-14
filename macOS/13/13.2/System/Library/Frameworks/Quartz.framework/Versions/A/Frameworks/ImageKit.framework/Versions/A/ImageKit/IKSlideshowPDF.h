@class PDFDocument;

@interface IKSlideshowPDF : IKSlideshowElement

@property (retain) PDFDocument *pdfDocument;

- (struct CGImage { } *)thumbnail;
- (void)setThumbnail:(struct CGImage { } *)a0;
- (void)load:(BOOL)a0;
- (id)debugState;
- (void)loadThumbnail:(BOOL)a0 currentCount:(unsigned long long)a1;
- (void)setMarkedForExport:(BOOL)a0;
- (void)loadThumbnailIfNeeded;
- (void)loadThumbnail:(BOOL)a0;
- (id)initWithPDFDocument:(id)a0 dataSourceHandler:(id)a1 index:(unsigned long long)a2 subIndex:(unsigned long long)a3;
- (void)setupSiblings;

@end
