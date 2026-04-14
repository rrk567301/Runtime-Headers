@class NSString;

@interface WKPDFLayerControllerDelegate : NSObject <PDFLayerControllerDelegate>

@property void *pdfPlugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showDefinitionForAttributedString:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)initWithPDFPlugin:(void *)a0;
- (void)updateScrollPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)writeItemsToPasteboard:(id)a0 withTypes:(id)a1;
- (void)performWebSearch:(id)a0;
- (void)performSpotlightSearch:(id)a0;
- (void)openWithNativeApplication;
- (void)saveToPDF;
- (void)pdfLayerController:(id)a0 didChangeActiveAnnotation:(id)a1;
- (void)pdfLayerController:(id)a0 clickedLinkWithURL:(id)a1;
- (void)pdfLayerController:(id)a0 didChangeContentScaleFactor:(double)a1;
- (void)pdfLayerController:(id)a0 didChangeDisplayMode:(int)a1;
- (void)pdfLayerController:(id)a0 didChangeSelection:(id)a1;
- (void)setMouseCursor:(long long)a0;
- (void)didChangeAnnotationState;

@end
