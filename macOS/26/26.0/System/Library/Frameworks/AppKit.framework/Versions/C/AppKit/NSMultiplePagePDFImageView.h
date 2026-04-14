@class NSPDFImageRep;

@interface NSMultiplePagePDFImageView : NSView {
    NSPDFImageRep *_imageRep;
}

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (BOOL)isOpaque;
- (void)dealloc;
- (long long)numberOfPages;
- (BOOL)isFlipped;
- (id)imageRep;
- (void)setImageRep:(id)a0;

@end
