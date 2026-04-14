@class CCContextDeviceGroup, CCWarpAlgorithmForwardDescriptor, CCVFWMeshGenerationAlgorithm, CCFittingPlaneHybridWarpAlgorithm, __cap_, __end_, CCAdaptiveMeshGenerationAlgorithm, NSArray, CCMinMaxDepthBinAlgorithm;
@protocol MTLArgumentEncoder, MTLIndirectCommandBuffer, MTLBuffer, MTLRenderPipelineState;

@interface CCWarpAlgorithmForward : CCWarpAlgorithm {
    int _algorithms[6];
    CCContextDeviceGroup *_deviceGroup;
    struct vector<id<MTLRenderPipelineState>, std::allocator<id<MTLRenderPipelineState>>> { __end_ **__begin_; __cap_ **x0; id *x1; } _renderPipelineApplyStencil;
    id<MTLRenderPipelineState> _renderPipelineApplyZoomAreaStencil;
    id<MTLRenderPipelineState> _renderPipelineDrawZoomBorder;
    id<MTLRenderPipelineState> _renderPipelineVFWIndirect[256];
    id<MTLRenderPipelineState> _renderPipelineVFRW[256];
    id<MTLRenderPipelineState> _renderPipelineAdaptiveWarp[256];
    id<MTLRenderPipelineState> _renderPipelineVFW[256];
    id<MTLRenderPipelineState> _renderPipelineWarpedDataClear;
    CCWarpAlgorithmForwardDescriptor *_algorithmDescriptor;
    CCMinMaxDepthBinAlgorithm *_maxDepthBinAlgorithm;
    CCVFWMeshGenerationAlgorithm *_vfwMeshGenerationAlgorithm;
    CCFittingPlaneHybridWarpAlgorithm *_fittingPlaneHybridWarpAlgorithm;
    CCAdaptiveMeshGenerationAlgorithm *_adaptiveMeshGenerationAlgorithm;
    long long _numberOfTargets;
    BOOL _deviceSupportsVRR;
    id<MTLArgumentEncoder> _vertexArgumentEncoder;
    id<MTLArgumentEncoder> _fragmentArgumentEncoder;
    id<MTLBuffer> _fragmentArgumentBuffer;
    id<MTLBuffer> _vertexArgumentBuffer;
    id<MTLBuffer> _fragmentArgumentBufferZoom;
    id<MTLBuffer> _vertexArgumentBufferZoom;
    struct CCMTLBufferUniform { id<MTLBuffer> uniformBuffer; void *contents; } _posWarpUniformsBuffer;
    struct CCMTLBufferUniform { id<MTLBuffer> uniformBuffer; void *contents; } _VFRWUniformBuffer;
    struct CCMTLBufferUniform { id<MTLBuffer> uniformBuffer; void *contents; } _textureUniformsBuffer;
    struct CCMTLBufferUniform { id<MTLBuffer> uniformBuffer; void *contents; } _gazeBasedDimmingUniformBuffer;
    struct CCMTLBufferUniform { id<MTLBuffer> uniformBuffer; void *contents; } _posWarpUniformsBufferZoom;
    struct CCMTLBufferUniform { id<MTLBuffer> uniformBuffer; void *contents; } _zoomBorderUniformsBuffer;
    struct CCMTLBufferUniform { id<MTLBuffer> uniformBuffer; void *contents; } _stencilUniformsBuffer;
    id<MTLIndirectCommandBuffer> _indirectCommandBuffer;
    id<MTLBuffer> _vfwMeshBuffer;
    struct CGSize { double width; double height; } _vfwMeshSize;
    int _warpAlgorithm;
    long long _mode;
    NSArray *_algorithmList;
    unsigned long long _adaptiveMeshSizeInBytes;
    long long _imageblockLength;
    struct CGSize { double width; double height; } _vfwDepthTextureSize;
}

- (void)setDescriptor:(id)a0;
- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)buildWithDeviceGroup:(id)a0 renderPipelineLibrary:(id)a1 tiledPipelineLibrary:(id)a2 colorFormats:(id)a3 depthAttachmentFormat:(unsigned long long)a4 outputTextureSizePerEye:(struct CGSize { double x0; double x1; })a5 visibilityGroupID:(long long)a6;

@end
