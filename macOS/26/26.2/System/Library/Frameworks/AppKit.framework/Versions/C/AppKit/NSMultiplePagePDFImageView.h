@class NSPDFImageRep;

@interface NSMultiplePagePDFImageView : NSView {
    NSPDFImageRep *_imageRep;
}

- (void)mouseDown:(id)a0;
- (BOOL)isOpaque;
- (long long)numberOfPages;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isFlipped;
- (void)dealloc;
- (id)imageRep;
- (void)setImageRep:(id)a0;

@end
