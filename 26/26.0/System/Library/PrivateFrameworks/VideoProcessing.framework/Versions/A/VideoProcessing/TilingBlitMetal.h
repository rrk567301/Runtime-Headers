@class NSDictionary;
@protocol MTLComputePipelineState;

@interface TilingBlitMetal : CommonMetal {
    id<MTLComputePipelineState> _detileLumaPipeline;
    id<MTLComputePipelineState> _detileChromaPipeline;
    id<MTLComputePipelineState> _tileLumaPipeline;
    id<MTLComputePipelineState> _tileChromaPipeline;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheSrcLuma;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheSrcChroma;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheDstLuma;
    struct CF<__CVMetalTextureCache *> { struct __CVMetalTextureCache *value_; } _textureCacheDstChroma;
    NSDictionary *_readAttributes;
    NSDictionary *_writeAttributes;
}

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)compileFunction:(id)a0;
- (int)detileTiledFrame:(struct __CVBuffer { } *)a0 intoLinearFrame:(struct __CVBuffer { } *)a1 codecType:(int)a2 useOffsets:(BOOL)a3;
- (int)initWithDevice:(struct __CVBuffer { } *)a0 codecType:(int)a1;
- (int)tileLinearFrame:(struct __CVBuffer { } *)a0 intoTiledFrame:(struct __CVBuffer { } *)a1 codecType:(int)a2 useOffsets:(BOOL)a3;

@end
