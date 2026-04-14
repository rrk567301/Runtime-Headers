@protocol MTLTexture;

@interface PTMSRResizeAdditionalOutput : NSObject

@property (readonly) id<MTLTexture> texture;
@property struct __CVBuffer { } *pixelbuffer;
@property struct __IOSurface { } *ioSurface;
@property int sourcePyramidIndex;
@property BOOL allowCompressed;
@property BOOL enabled;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 colorSpace:(struct CGColorSpace { } *)a1 pixelFormat:(unsigned int)a2 allowCompressed:(BOOL)a3 metalDevice:(id)a4;

@end
