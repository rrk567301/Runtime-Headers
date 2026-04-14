@class IMSMaskMetadata, MTLRenderPassDescriptor, IMSMeshDataBuffers;
@protocol MTLComputePipelineState, MTLDevice, MTLComputeCommandEncoder, MTLTexture, MTLCommandQueue, MTLRenderPipelineState;

@interface IMSRuntimeMaskRenderer : NSObject {
    IMSMeshDataBuffers *leftIMSMeshDataBuffers;
    IMSMeshDataBuffers *rightIMSMeshDataBuffers;
    IMSMaskMetadata *metadata;
    id<MTLDevice> device;
    id<MTLCommandQueue> commandQueue;
    id<MTLTexture> maskTextureLeft;
    id<MTLTexture> maskTextureRight;
    MTLRenderPassDescriptor *renderToLeftTextureRenderPassDescriptor;
    MTLRenderPassDescriptor *renderToRightTextureRenderPassDescriptor;
    id<MTLRenderPipelineState> renderToTextureRenderPipeline;
    id<MTLComputePipelineState> computePipelineState;
    id<MTLComputeCommandEncoder> computeEncoder;
    id<MTLTexture> stereoMaskTexture;
    id<MTLComputePipelineState> stereoComputePipelineState;
    id<MTLComputeCommandEncoder> stereoComputeEncoder;
}

- (void).cxx_destruct;
- (void)initMetal;
- (id)initWithDevice:(id)a0 metadata:(id)a1;
- (id)initWithDevice:(id)a0 metadata:(id)a1 leftIMSMeshDataBuffers:(id)a2 rightIMSMeshDataBuffers:(id)a3;
- (id)renderToTexture:(BOOL)a0;

@end
