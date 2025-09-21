@class MTLRenderPassDescriptor;
@protocol MTLCommandQueue, MTLDevice, MTLBuffer, MTLTexture, MTLComputePipelineState, MTLRenderPipelineState;

@interface CMPhotoMetal : NSObject {
    id<MTLDevice> _mDevice;
    id<MTLComputePipelineState> _mComputePSO;
    MTLRenderPassDescriptor *_renderToTextureRenderPassDescriptor;
    id<MTLRenderPipelineState> _renderPipeline;
    id<MTLCommandQueue> _mCommandQueue;
    id<MTLTexture> _mSrcTex;
    id<MTLTexture> _mDstTex;
    id<MTLBuffer> _mSrcBuf;
    id<MTLBuffer> _mDstBuf;
    unsigned long long mb_width;
    unsigned long long mb_height;
    unsigned long long meta_size;
    unsigned long long meta_length;
    unsigned short _mask;
    struct { BOOL flip_x; BOOL flip_y; BOOL transpose; unsigned int width; unsigned int height; unsigned int src_stride; unsigned int dst_stride; } config;
}

- (void)setRotation:(int)a0;
- (void)encodeComputeCommand:(id)a0;
- (id)initWithDevice:(id)a0 rotate:(BOOL)a1 intc:(struct { BOOL x0; BOOL x1; BOOL x2; char x3; } *)a2;
- (void)prepareDst:(struct __IOSurface { } *)a0 rotate:(BOOL)a1;
- (void)prepareSrc:(struct __IOSurface { } *)a0 rotate:(BOOL)a1;
- (id)prepareTexture:(struct __IOSurface { } *)a0 usage:(unsigned long long)a1;
- (void)sendComputeCommand;
- (void)sendRenderCommand;

@end
