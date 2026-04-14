@interface PXGViewImageTexture : PXGImageTexture {
    BOOL _isContentOpaque;
    float _alpha;
    float _suppressContentsRect;
}

@property (readonly, nonatomic) struct CGImage { } *imageRef;
@property (readonly, nonatomic) unsigned int orientation;

- (BOOL)isOpaque;
- (struct CGSize { double x0; double x1; })pixelSize;
- (void)dealloc;
- (unsigned char)presentationType;
- (id)copyWithOrientationTransform:(SEL)a0 alpha:(float)a1 suppressContentsRect:(float)a2;
- (long long)estimatedByteSize;
- (id)initWithImage:(struct CGImage { } *)a0 orientation:(unsigned int)a1 alpha:(float)a2 suppressContentsRect:(float)a3;

@end
