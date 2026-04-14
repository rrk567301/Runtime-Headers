@class CCVFWMeshGenerationAlgorithmDescriptor, CCContextDeviceGroup;
@protocol MTLComputePipelineState, MTLBuffer;

@interface CCVFWMeshGenerationAlgorithm : CCAlgorithm {
    id<MTLComputePipelineState> _generateVFWIndexBufferPSO;
    id<MTLComputePipelineState> _streamReduceDepthBinPSO;
    id<MTLComputePipelineState> _accumulateIndexCountsPSO;
    CCContextDeviceGroup *_deviceGroup;
    CCVFWMeshGenerationAlgorithmDescriptor *_algorithmDescriptor;
    id<MTLBuffer> _reducedArrayBuffer;
    id<MTLBuffer> _reducedVertexCountBuffer;
    id<MTLBuffer> _reducedVertexCountCumulativeBuffer;
    id<MTLBuffer> _reducedArrayBufferProtected;
    id<MTLBuffer> _reducedVertexCountBufferProtected;
    id<MTLBuffer> _reducedVertexCountCumulativeBufferProtected;
    unsigned long long _eyeCount;
}

- (void)setDescriptor:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
