@class CCMinMaxDepthBinAlgorithmDescriptor, CCContextDeviceGroup, MTLLinkedFunctions, NSArray;
@protocol MTLRenderPipelineState, MTLArgumentEncoder, MTLFunction, MTLVisibleFunctionTable, MTLComputePipelineState, MTLBuffer;

@interface CCMinMaxDepthBinAlgorithm : CCAlgorithm {
    id<MTLComputePipelineState> _computePipelineMinMaxDepthKernels;
    id<MTLComputePipelineState> _computePipelineClearBoundaryToZero;
    id<MTLComputePipelineState> _computePipelineCopy;
    id<MTLComputePipelineState> _computePipelineCopyVirtualPixelStatsToReadbackTexture;
    id<MTLComputePipelineState> _computePipelineDownsampleTexture2x2To1;
    id<MTLComputePipelineState> _computePipelineDownsampleTexture1x2To1;
    id<MTLComputePipelineState> _computePipelineDownSampleTexture1;
    id<MTLComputePipelineState> _computePipelineDownSampleTexture;
    id<MTLComputePipelineState> _computePipelineClearTextureToValue;
    id<MTLComputePipelineState> _computePipelineBufferSumReduction;
    id<MTLComputePipelineState> _computePipelineDepthStatsKernel;
    CCContextDeviceGroup *_deviceGroup;
    CCMinMaxDepthBinAlgorithmDescriptor *_algorithmDescriptor;
    BOOL _isVRRSupported;
    BOOL _useArgumentBuffer;
    unsigned long long _numberOfTargets;
    struct CCMTLBufferUniform { id<MTLBuffer> uniformBuffer; void *contents; } _textureUniformsBuffers[3];
    struct CCMTLBufferUniform { id<MTLBuffer> uniformBuffer; void *contents; } _virtualPixelStatsUniformsBuffers[3];
    id<MTLBuffer> _depthArgumentBufferInternal[3];
    id<MTLArgumentEncoder> _computeArgumentEncoderInternal;
    id<MTLBuffer> _depthArgumentBuffersInline[3];
    id<MTLArgumentEncoder> _computeArgumentEncodersInline;
    id<MTLRenderPipelineState> _cachedInlineRenderPipelineState;
    BOOL _recreateVisibleFunctionTable;
    id<MTLVisibleFunctionTable> _visibleFunctionTable;
    MTLLinkedFunctions *_linkedFunctions;
    id<MTLFunction> _visibleFunctionDownsample32x32;
    id<MTLFunction> _visibleFunctionDownsample32x16;
    id<MTLFunction> _visibleFunctionDownsample16x16;
    NSArray *_virtualPixelStatsBuffers;
    NSArray *_virtualPixelStatsBuffersProtected;
    unsigned long long _frameNumber;
    unsigned long long _inFlightIndex;
    void /* unknown type, empty encoding */ _boundaryTopLeft[2];
    void /* unknown type, empty encoding */ _boundaryBottomRight[2];
    long long _mode;
}

- (void)setDescriptor:(id)a0;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
