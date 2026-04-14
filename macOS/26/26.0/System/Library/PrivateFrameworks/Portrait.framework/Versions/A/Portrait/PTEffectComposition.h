@class PTMetalContext;
@protocol MTLComputePipelineState, MTLTexture;

@interface PTEffectComposition : NSObject {
    PTMetalContext *_metalContext;
    id<MTLComputePipelineState> _composite;
    struct __CVMetalTextureCache { } *metalTextureCache;
    id<MTLTexture> _sourceMipmap;
}

- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (void /* unknown type, empty encoding */)computeDownsamplingFactorWithInputSource:(id)a0 inputTarget:(id)a1 renderRequest:(id)a2;
- (unsigned int)render:(id)a0 renderRequest:(id)a1;

@end
