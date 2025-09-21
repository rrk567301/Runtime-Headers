@class MPSImageLanczosScale, NSDictionary, MPSImageBilinearScale;
@protocol MTLComputePipelineState;

@interface ScaleMetal : CommonMetal {
    MPSImageBilinearScale *_bilinearKernel;
    MPSImageLanczosScale *_lanczosKernel;
    id<MTLComputePipelineState> _bilinearScale;
    BOOL _supportsNonuniformThreadgroups;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheLuma;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheChroma;
    NSDictionary *_readAttributes;
    NSDictionary *_writeAttributes;
}

- (int)initWithDevice:(struct __CVBuffer { } *)a0;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)CompileBilinearScaler:(BOOL)a0 withOffsetSupport:(BOOL)a1;
- (int)scaleFrame:(struct __CVBuffer { } *)a0 dstFrame:(struct __CVBuffer { } *)a1 srcRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2 dstRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a3 scaleMethod:(int)a4;
- (int)scaleFrameBilinear:(struct __CVBuffer { } *)a0 dstFrame:(struct __CVBuffer { } *)a1 srcRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2 dstRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a3;
- (int)scaleFrameBilinear_WithOffsetSupport:(struct __CVBuffer { } *)a0 dstFrame:(struct __CVBuffer { } *)a1 srcRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2 dstRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a3 lumaOffsets:(unsigned int[2])a4 chromaOffsets:(unsigned int[2])a5;

@end
