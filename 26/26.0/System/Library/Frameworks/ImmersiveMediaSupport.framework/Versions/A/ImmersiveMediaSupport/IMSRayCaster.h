@class IMSMeshDataBuffers;
@protocol MTLBuffer, MTLDevice, MTLCommandBuffer, MTLComputePipelineState, MTLComputeCommandEncoder;

@interface IMSRayCaster : NSObject {
    id<MTLDevice> device;
    id<MTLComputeCommandEncoder> computeCommandEncoder;
    id<MTLComputePipelineState> computePipelineState;
    id<MTLComputePipelineState> computePipelineStateBatchHit;
    id<MTLCommandBuffer> commandBuffer;
    IMSMeshDataBuffers *meshDataBuffers;
    id<MTLBuffer> vertexBuffer;
    id<MTLBuffer> uvBuffer;
    id<MTLBuffer> indexBuffer;
}

- (void).cxx_destruct;
- (void /* unknown type, empty encoding */)getUVPointByHitTest:(SEL)a0;
- (id)getUVPointsByHitTestBatch:(id)a0;
- (id)init:(id)a0 meshDataBuffers:(id)a1;

@end
