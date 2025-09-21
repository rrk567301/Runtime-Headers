@protocol MTLDepthStencilState, MTLRenderPipelineState;

@interface MXIRenderer : NSObject {
    id<MTLRenderPipelineState> _texturePipelineState;
    id<MTLRenderPipelineState> _arrayPipelineState;
    id<MTLDepthStencilState> _depthStateDefault;
    id<MTLDepthStencilState> _depthStateInvZ;
    id<MTLDepthStencilState> _depthStateAlways;
    BOOL _useStencil;
    BOOL _stencilSupport;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 colorPixelFormat:(unsigned long long)a1 depthPixelFormat:(unsigned long long)a2 sampleCount:(long long)a3 error:(id *)a4;
- (void)renderScene:(id)a0 withEncoder:(id)a1 context:(struct MXIRenderingContext { struct { void /* unknown type, empty encoding */ x0[4]; } x0; struct { void /* unknown type, empty encoding */ x0[4]; } x1[2]; struct { void /* unknown type, empty encoding */ x0[4]; } x2[2]; unsigned long long x3; unsigned int x4; unsigned int x5; BOOL x6; })a2;

@end
