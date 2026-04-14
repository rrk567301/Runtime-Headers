@class NSPDFImageRep;

@interface NSMultiplePagePDFImageView : NSView {
    NSPDFImageRep *_imageRep;
}

- (void)dealloc;
- (BOOL)isFlipped;
- (BOOL)isOpaque;
- (void)mouseDown:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)numberOfPages;
- (id)imageRep;
- (void)setImageRep:(id)a0;

@end
