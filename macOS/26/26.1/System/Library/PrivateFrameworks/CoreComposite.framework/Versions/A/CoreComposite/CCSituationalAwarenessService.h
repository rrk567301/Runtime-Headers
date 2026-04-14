@class CCContextDeviceGroup, CCSituationalAwarenessServiceDescriptor, CCLane, CCSimpleRenderPass;
@protocol MTLBuffer, MTLRenderPipelineState;

@interface CCSituationalAwarenessService : CCService {
    CCContextDeviceGroup *_deviceGroup;
    CCSituationalAwarenessServiceDescriptor *_situationalAwarenessServiceDescriptor;
    CCSimpleRenderPass *_sawdPass;
    BOOL _deviceSupportsVRR;
    id<MTLRenderPipelineState> _sawdPipeline;
    id<MTLRenderPipelineState> _sawdBreakthroughPipeline;
    id<MTLRenderPipelineState> _sawdFullyTransparentBreakthroughPipeline;
    id<MTLRenderPipelineState> _sawdLowLightHandsPipeline;
    CCLane *resourceDisplayTexture;
    CCLane *resourceSAWDMeshBuffer;
    CCLane *resourceDisplayCameras;
    CCLane *resourceDefaultOutputColorData;
    CCLane *resourceWarpAlgorithm;
    struct CCMTLBufferUniform { id<MTLBuffer> uniformBuffer; void *contents; } _uniformsBuffer[2];
    struct CCMTLBufferUniform { id<MTLBuffer> uniformBuffer; void *contents; } _instanceUniformsMatrixBuffer;
    struct CCRenderCommandEncoderMethods { Class _classId; struct CCObjCMethodWrapper<CCRenderCommandEncoderMethods, void, id<MTLDepthStencilState>> { SEL _sel; void /* function */ *_function; } setDepthStencilState; struct CCObjCMethodWrapper<CCRenderCommandEncoderMethods, void, unsigned int> { SEL _sel; void /* function */ *_function; } setStencilReferenceValue; struct CCObjCMethodWrapper<CCRenderCommandEncoderMethods, void, MTLViewport> { SEL _sel; void /* function */ *_function; } setViewport; struct CCObjCMethodWrapper<CCRenderCommandEncoderMethods, void, const MTLViewport[], unsigned long> { SEL _sel; void /* function */ *_function; } setViewports; struct CCObjCMethodWrapper<CCRenderCommandEncoderMethods, void, unsigned long, const MTLVertexAmplificationViewMapping *> { SEL _sel; void /* function */ *_function; } setVertexAmplificationCount; struct CCObjCMethodWrapper<CCRenderCommandEncoderMethods, void, NSString *> { SEL _sel; void /* function */ *_function; } pushDebugGroup; struct CCObjCMethodWrapper<CCRenderCommandEncoderMethods, void> { SEL _sel; void /* function */ *_function; } popDebugGroup; struct CCObjCMethodWrapper<CCRenderCommandEncoderMethods, void, id<MTLRenderPipelineState>> { SEL _sel; void /* function */ *_function; } setRenderPipelineState; struct CCObjCMethodWrapper<CCRenderCommandEncoderMethods, void, id<MTLBuffer>, unsigned long, unsigned long> { SEL _sel; void /* function */ *_function; } setVertexBufferAtIndex; struct CCObjCMethodWrapper<CCRenderCommandEncoderMethods, void, const void *, unsigned long, unsigned long> { SEL _sel; void /* function */ *_function; } setVertexBytesAtIndex; struct CCObjCMethodWrapper<CCRenderCommandEncoderMethods, void, unsigned long, unsigned long> { SEL _sel; void /* function */ *_function; } setVertexBufferOffsetAtIndex; struct CCObjCMethodWrapper<CCRenderCommandEncoderMethods, void, const void *, unsigned long, unsigned long> { SEL _sel; void /* function */ *_function; } setFragmentBytesAtIndex; struct CCObjCMethodWrapper<CCRenderCommandEncoderMethods, void, id<MTLBuffer>, unsigned long, unsigned long> { SEL _sel; void /* function */ *_function; } setFragmentBufferAtIndex; struct CCObjCMethodWrapper<CCRenderCommandEncoderMethods, void, unsigned long, unsigned long> { SEL _sel; void /* function */ *_function; } setFragmentBufferOffsetAtIndex; struct CCObjCMethodWrapper<CCRenderCommandEncoderMethods, void, id<MTLTexture>, unsigned long> { SEL _sel; void /* function */ *_function; } setFragmentTextureAtIndex; struct CCObjCMethodWrapper<CCRenderCommandEncoderMethods, void, MTLPrimitiveType, unsigned long, MTLIndexType, id<MTLBuffer>, unsigned long, unsigned long> { SEL _sel; void /* function */ *_function; } drawIndexedPrimitivesIndexInstance; struct CCObjCMethodWrapper<CCRenderCommandEncoderMethods, void, MTLPrimitiveType, unsigned long, MTLIndexType, id<MTLBuffer>, unsigned long> { SEL _sel; void /* function */ *_function; } drawIndexedPrimitives; struct CCObjCMethodWrapper<CCRenderCommandEncoderMethods, void, MTLPrimitiveType, unsigned long, unsigned long> { SEL _sel; void /* function */ *_function; } drawPrimitives; struct CCObjCMethodWrapper<CCRenderCommandEncoderMethods, void, MTLPrimitiveType, unsigned long, unsigned long, unsigned long> { SEL _sel; void /* function */ *_function; } drawPrimitivesInstanceCount; struct CCObjCMethodWrapper<CCRenderCommandEncoderMethods, void, MTLCullMode> { SEL _sel; void /* function */ *_function; } setCullMode; struct CCObjCMethodWrapper<CCRenderCommandEncoderMethods, void, MTLTriangleFillMode> { SEL _sel; void /* function */ *_function; } setTriangleFillMode; } _renderCommandEncoder;
    unsigned long long _dataFormatVersion;
}

+ (id)new;

- (BOOL)setDescriptor:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (void)releaseBuffers;
- (void)addAllocations:(id)a0;
- (BOOL)preBuildService;
- (BOOL)buildWithDeviceGroup:(id)a0;
- (BOOL)reallocateBuffersWithDeviceGroup:(id)a0;
- (void)removeAllocations:(id)a0;
- (BOOL)updateLanes:(id)a0;

@end
