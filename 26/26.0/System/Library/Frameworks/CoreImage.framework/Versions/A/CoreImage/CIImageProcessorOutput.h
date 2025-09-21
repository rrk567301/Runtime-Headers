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
- (unsigned int)contextID;
- (void)setError:(id)a0;
- (id)metalContext;
- (id)initWithSurface:(struct __IOSurface { } *)a0 texture:(void *)a1 digest:(unsigned long long)a2 allowSRGB:(BOOL)a3 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 onlyMetal:(BOOL)a5 context:(void *)a6 tileTask:(void *)a7;
- (BOOL)metalCommandBufferRequested;
- (struct CGColorSpace { } *)workingColorSpace;

@end
