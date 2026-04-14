@protocol MTLTexture;

@interface CIImageProcessorInput : CIImageProcessorInOut <CIImageProcessorInput>

@property (readonly, nonatomic) unsigned long long roiTileIndex;
@property (readonly, nonatomic) unsigned long long roiTileCount;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } region;
@property (readonly, nonatomic) unsigned long long bytesPerRow;
@property (readonly, nonatomic) int format;
@property (readonly, nonatomic) const void *baseAddress;
@property (readonly, nonatomic) struct __IOSurface { } *surface;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) id<MTLTexture> metalTexture;
@property (readonly, nonatomic) unsigned long long digest;

- (void)dealloc;
- (id)initWithSurface:(struct __IOSurface { } *)a0 texture:(void *)a1 digest:(unsigned long long)a2 allowSRGB:(BOOL)a3 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 onlyMetal:(BOOL)a5 context:(void *)a6;
- (id)initWithSurface:(struct __IOSurface { } *)a0 texture:(void *)a1 digest:(unsigned long long)a2 allowSRGB:(BOOL)a3 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 roiTileIndex:(unsigned long long)a5 roiTileCount:(unsigned long long)a6 onlyMetal:(BOOL)a7 context:(void *)a8;

@end
