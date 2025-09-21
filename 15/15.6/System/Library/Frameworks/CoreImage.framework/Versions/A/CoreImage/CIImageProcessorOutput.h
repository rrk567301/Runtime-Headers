@protocol MTLTexture, MTLCommandBuffer;

@interface CIImageProcessorOutput : CIImageProcessorInOut <CIImageProcessorOutput> {
    id<MTLCommandBuffer> _cmdBuffer;
    void *_task;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } region;
@property (readonly, nonatomic) unsigned long long bytesPerRow;
@property (readonly, nonatomic) int format;
@property (readonly, nonatomic) void *baseAddress;
@property (readonly, nonatomic) struct __IOSurface { } *surface;
@property (readonly, nonatomic) struct __CVBuffer { } *pixelBuffer;
@property (readonly, nonatomic) id<MTLTexture> metalTexture;
@property (readonly, nonatomic) id<MTLCommandBuffer> metalCommandBuffer;
@property (readonly, nonatomic) unsigned long long digest;

- (void)dealloc;
- (void)setError:(id)a0;
- (unsigned int)contextID;
- (id)initWithSurface:(struct __IOSurface { } *)a0 texture:(struct Texture { union { unsigned long long x0; struct { unsigned int x0; unsigned int x1; } x1; struct { void *x0; void *x1; } x2; struct _cl_mem *x3; } x0; })a1 digest:(unsigned long long)a2 allowSRGB:(BOOL)a3 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 context:(void *)a5 tileTask:(void *)a6;
- (BOOL)metalCommandBufferRequested;
- (id)metalContext;
- (struct CGColorSpace { } *)workingColorSpace;

@end
