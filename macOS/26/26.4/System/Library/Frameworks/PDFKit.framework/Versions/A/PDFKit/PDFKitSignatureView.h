@class PDFPageView, NSView, PDFView, PDFAnnotation;

@interface PDFKitSignatureView : NSObject

@property (retain) NSView *view;
@property (retain) PDFAnnotation *annotation;
@property (retain) PDFView *pdfView;
@property (retain) PDFPageView *pdfPageView;

- (id)layer;
- (BOOL)becomeFirstResponder;
- (void)_setup;
- (void)removeFromSuperview;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)rotateByAngle:(double)a0;
- (void)_applyScale:(double)a0 toView:(id)a1;
- (void)_didChangeZoomFactor:(id)a0;
- (void)_updateScaleFactor;
- (id)initWithAnnotation:(id)a0 pdfPageView:(id)a1 pdfView:(id)a2;

@end
