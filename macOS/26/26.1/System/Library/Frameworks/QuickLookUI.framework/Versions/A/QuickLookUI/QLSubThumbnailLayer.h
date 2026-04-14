@interface QLSubThumbnailLayer : CALayer {
    struct CGImage { } *image;
}

- (void)dealloc;
- (id)initWithCGImage:(struct CGImage { } *)a0;
- (void)drawInContext:(struct CGContext { } *)a0;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0;

@end
