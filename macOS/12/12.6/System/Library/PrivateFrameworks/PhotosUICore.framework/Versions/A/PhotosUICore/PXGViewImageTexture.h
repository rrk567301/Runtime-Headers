@interface PXGViewImageTexture : PXGImageTexture {
    BOOL _isOpaque;
}

@property (readonly, nonatomic) struct CGImage { } *imageRef;
@property (readonly, nonatomic) unsigned int orientation;

- (void)dealloc;
- (BOOL)isOpaque;
- (struct CGSize { double x0; double x1; })pixelSize;
- (int)presentationType;
- (id)initWithImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1;
- (long long)estimatedByteSize;

@end
