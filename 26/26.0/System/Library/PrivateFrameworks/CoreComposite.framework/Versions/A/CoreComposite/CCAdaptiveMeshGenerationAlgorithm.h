@class CCAdaptiveMeshGenerationAlgorithmDescriptor, NSMutableArray, CCContextDeviceGroup;
@protocol MTLComputePipelineState, MTLBuffer;

@interface CCAdaptiveMeshGenerationAlgorithm : CCAlgorithm {
    id<MTLComputePipelineState> _computePipelineGenerateQuadtree;
    id<MTLComputePipelineState> _computePipelineBalanceQuadtree;
    id<MTLComputePipelineState> _computePipelineTriangulateQuadtree;
    CCContextDeviceGroup *_deviceGroup;
    CCAdaptiveMeshGenerationAlgorithmDescriptor *_algorithmDescriptor;
    BOOL _isVRRSupported;
    unsigned long long _avfwQuadCountBudget;
    NSMutableArray *_quadTreeTextures;
    NSMutableArray *_quadCountBuffersForAVFW;
    NSMutableArray *_quadTreeDepthTextures;
}

@property (nonatomic) unsigned long long adaptiveMeshSizeInBytes;
@property (retain, nonatomic) id<MTLBuffer> supportedLevelBuffer;

- (void)setDescriptor:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
