@interface QLSubThumbnailLayer : CALayer {
    struct CGImage { } *image;
}

- (void)dealloc;
- (char)containsPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0;

@end
