@interface QLSubThumbnailLayer : CALayer {
    struct CGImage { } *image;
}

- (id)initWithCGImage:(struct CGImage { } *)a0;
- (void)dealloc;
- (void)drawInContext:(struct CGContext { } *)a0;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;

@end
