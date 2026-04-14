@class NSPDFImageRep;

@interface NSMultiplePagePDFImageView : NSView {
    NSPDFImageRep *_imageRep;
}

- (BOOL)isOpaque;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (BOOL)isFlipped;
- (long long)numberOfPages;
- (void)dealloc;
- (id)imageRep;
- (void)setImageRep:(id)a0;

@end
