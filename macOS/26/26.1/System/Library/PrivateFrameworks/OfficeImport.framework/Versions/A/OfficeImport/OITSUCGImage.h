@interface OITSUCGImage : OITSUImage {
    struct CGImage { } *mCGImage;
    int mOrientation;
    double mScale;
}

- (struct CGImage { } *)CGImage;
- (double)scale;
- (int)imageOrientation;
- (struct CGSize { double x0; double x1; })size;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(int)a2;
- (struct CGImage { } *)CGImageForSize:(struct CGSize { double x0; double x1; })a0;

@end
