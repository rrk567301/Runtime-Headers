@class PDFScrollViewPrivate;

@interface PDFScrollView : NSScrollView {
    PDFScrollViewPrivate *_private;
}

+ (BOOL)isCompatibleWithResponsiveScrolling;

- (void)updateLayout;
- (void)setDocument:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;
- (void)accessibilityPerformAction:(id)a0;
- (void)scrollWheel:(id)a0;
- (void)setAccessibilityFocused:(BOOL)a0;
- (void)smartMagnifyWithEvent:(id)a0;
- (void)magnificationDidChange:(id)a0;
- (id)pdfDocumentView;
- (void)boundsDidChange;
- (void)magnificationWillChange:(id)a0;
- (void)setForcesTopAlignment:(BOOL)a0;
- (void)setPDFView:(id)a0;

@end
