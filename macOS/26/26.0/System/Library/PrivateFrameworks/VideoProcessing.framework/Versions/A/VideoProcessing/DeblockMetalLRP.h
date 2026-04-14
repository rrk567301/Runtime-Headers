@class NSDictionary;
@protocol MTLDevice, MTLLibrary, MTLCommandQueue, MTLComputePipelineState;

@interface DeblockMetalLRP : NSObject {
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    id<MTLLibrary> _library;
    id<MTLComputePipelineState> _inloopDeblockV;
    id<MTLComputePipelineState> _inloopDeblockH;
    unsigned int _horizontalOffset;
    unsigned int _verticalOffset;
    BOOL _gpuHasCompressedRMWSupport;
    struct CF<__CVPixelBufferPool *> { struct __CVPixelBufferPool *value_; } _bufPool;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheChromaIn;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheChromaOutV;
    NSDictionary *_readWriteAttributes;
}

- (int)initWithDevice:(struct __CVBuffer { } *)a0;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)compileFunction:(id)a0 constantValues:(id)a1;
- (void)compileDeblockFilters;
- (int)deblockFrame:(struct __CVBuffer { } *)a0 withQP:(int)a1 preserveOffset:(BOOL)a2 needDecompress:(BOOL)a3;
- (int)initPixelBufferPool:(struct __CVBuffer { } *)a0;
- (int)validateDeblock:(struct __CVBuffer { } *)a0 withQP:(int)a1 preserveOffset:(BOOL)a2;

@end
