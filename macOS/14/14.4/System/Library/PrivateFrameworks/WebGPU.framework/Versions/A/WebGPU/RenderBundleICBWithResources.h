@protocol MTLIndirectCommandBuffer, MTLDepthStencilState, MTLRenderPipelineState, MTLBuffer;

@interface RenderBundleICBWithResources : NSObject {
    struct Vector<WebGPU::BindableResources, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { struct BindableResources *m_buffer; unsigned int m_capacity; unsigned int m_size; } _resources;
}

@property (readonly, nonatomic) id<MTLIndirectCommandBuffer> indirectCommandBuffer;
@property (readonly, nonatomic) id<MTLRenderPipelineState> currentPipelineState;
@property (readonly, nonatomic) id<MTLDepthStencilState> depthStencilState;
@property (readonly, nonatomic) unsigned long long cullMode;
@property (readonly, nonatomic) unsigned long long frontFace;
@property (readonly, nonatomic) unsigned long long depthClipMode;
@property (readonly, nonatomic) float depthBias;
@property (readonly, nonatomic) float depthBiasSlopeScale;
@property (readonly, nonatomic) float depthBiasClamp;
@property (readonly, nonatomic) id<MTLBuffer> fragmentDynamicOffsetsBuffer;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void *)resources;
- (id)initWithICB:(id)a0 pipelineState:(id)a1 depthStencilState:(id)a2 cullMode:(unsigned long long)a3 frontFace:(unsigned long long)a4 depthClipMode:(unsigned long long)a5 depthBias:(float)a6 depthBiasSlopeScale:(float)a7 depthBiasClamp:(float)a8 fragmentDynamicOffsetsBuffer:(id)a9;

@end
