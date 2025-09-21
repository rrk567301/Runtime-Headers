@class PDFPage, NSMutableArray;

@interface PDFOCREffectLayer : CALayer {
    PDFPage *_page;
    long long _displayBox;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cropBox;
    NSMutableArray *_quadLayers;
}

- (void)setup;
- (void).cxx_destruct;
- (id)initWithPage:(id)a0;
- (void)setDisplayBox:(long long)a0;
- (void)updateVisibleLayers;

@end
