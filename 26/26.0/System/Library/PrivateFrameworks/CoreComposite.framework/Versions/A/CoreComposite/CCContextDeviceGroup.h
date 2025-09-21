@class CCDeviceCapabilities, CCRenderContext;
@protocol MTLLibrary, MTLBuffer, MTLDevice;

@interface CCContextDeviceGroup : NSObject {
    id<MTLBuffer> _dummyOneByteBuffer;
    CCDeviceCapabilities *_capabilities;
    unsigned long long _protectionOptions;
    CCRenderContext *_renderContext;
    id<MTLBuffer> _fullScreenQuadVertexBuffer;
    id<MTLBuffer> _fullScreenQuadIndexBuffer;
    BOOL _areAllocationsResident;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mtlDeviceLock;
    id<MTLDevice> _mtlDevice;
    id<MTLLibrary> _defaultMTLLib;
}

+ (id)computePSOCacheForKernel:(id)a0 supportIndirectCommandBuffers:(BOOL)a1;
+ (id)computePipelineStateCache;
+ (id)computePipelineStateWithLinkedFunctionCache;
+ (id)createSharedTexture:(unsigned long long)a0 textureSize:(struct CGSize { double x0; double x1; })a1 name:(id)a2 type:(unsigned long long)a3 length:(unsigned long long)a4 usage:(unsigned long long)a5 protectionOptions:(unsigned long long)a6 mtlDevice:(id)a7;
+ (id)functionTable;
+ (id)precompiledArchivesDynamicMethod;
+ (id)renderPSOCacheForVertexFunction:(id)a0 fragmentFunction:(id)a1 pixelFormats:(id)a2 vertexDescriptor:(id)a3 depthAttachmentFormat:(unsigned long long)a4 supportIndirectCommandBuffers:(BOOL)a5 visibilityGroupID:(long long)a6 maxVertexAmplificationCount:(unsigned long long)a7 blendDescriptor:(struct CCBlendDescriptor { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; } *)a8;
+ (id)renderPipelineStateCache;
+ (id)tilePSOCacheForKernel:(id)a0 threadgroupSizeMatchesTileSize:(BOOL)a1;
+ (id)tilePipelineStateCache;

- (id)captureState;
- (id)captureScope;
- (void).cxx_destruct;
- (id)createComputePipelineWithKernelDynamicMethod:(id)a0 functionConstants:(id)a1;
- (id)initWithMTLDeviceDynamicMethod:(id)a0;
- (void)lockMTLDeviceGroupDynamicMethod;
- (id)captureOutput;
- (id)createBufferBackedReadWriteTextureDynamicMethod:(unsigned long long)a0 textureSize:(struct CGSize { double x0; double x1; })a1 name:(id)a2 mipmapLevelCount:(unsigned long long)a3;
- (id)createBufferWithBytesDynamicMethod:(const void *)a0 length:(unsigned long long)a1;
- (id)createBufferWithRasterizationRateMapDynamicMethod:(id)a0;
- (id)createCPUReadWriteTextureDynamicMethod:(unsigned long long)a0 textureSize:(struct CGSize { double x0; double x1; })a1 name:(id)a2;
- (id)createComputePipelineWithKernelDynamicMethod:(id)a0;
- (id)createReadWriteTextureArrayDynamicMethod:(unsigned long long)a0 textureSize:(struct CGSize { double x0; double x1; })a1 arrayLength:(unsigned long long)a2 name:(id)a3;
- (id)createReadWriteTextureDynamicMethod:(unsigned long long)a0 textureSize:(struct CGSize { double x0; double x1; })a1 name:(id)a2;
- (id)createTextureWithDescriptorDynamicMethod:(id)a0;
- (id)defaultMTLLibDynamicMethod;
- (id)internalCreateComputePipelineWithKernelDynamicMethod:(id)a0 functionConstants:(id)a1;
- (BOOL)isIndirectFunction:(id)a0;
- (id)mtlDeviceDynamicMethod;
- (void)setCaptureOutput:(id)a0;
- (void)setCaptureScope:(id)a0;
- (void)setCaptureState:(id)a0;
- (BOOL)startGPUCaptureDynamicMethod;
- (BOOL)startGPUCaptureDynamicMethodToFile:(id)a0;
- (BOOL)startGPUCaptureToDestination:(id)a0 destination:(long long)a1;
- (void)stopGPUCaptureDynamicMethod;
- (void)unlockMTLDeviceGroupDynamicMethod;

@end
