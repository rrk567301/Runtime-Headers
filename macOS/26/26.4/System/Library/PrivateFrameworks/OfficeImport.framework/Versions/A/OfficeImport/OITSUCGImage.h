@interface OITSUCGImage : OITSUImage {
    struct CGImage { } *mCGImage;
    int mOrientation;
    double mScale;
}

- (struct CGImage { } *)CGImage;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)imageOrientation;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })size;
- (double)scale;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 orientation:(int)a2;
- (struct CGImage { } *)CGImageForSize:(struct CGSize { double x0; double x1; })a0;

@end
