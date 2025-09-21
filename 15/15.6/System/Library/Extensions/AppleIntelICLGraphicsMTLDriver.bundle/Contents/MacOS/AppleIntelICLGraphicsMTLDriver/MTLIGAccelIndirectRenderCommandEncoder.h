@class NSString, MTLIGAccelBuffer, MTLIGAccelDevice;

@interface MTLIGAccelIndirectRenderCommandEncoder : NSObject <MTLIndirectRenderCommandEncoderSPI> {
    struct sIGIndirectRenderCommandHeader { struct sIndirectCommandBufferDebugHeader { unsigned long long headerSize; unsigned int commandTypes; unsigned char inheritPipelineState; unsigned char inheritBuffers; unsigned char maxVertexBufferBindCount; unsigned char maxFragmentBufferBindCount; unsigned char maxKernelBufferBindCount; unsigned char maxObjectBufferBindCount; unsigned char maxMeshBufferBindCount; unsigned char supportRayTracing; unsigned char supportDynamicAttributeStride; unsigned char maxKernelThreadgroupMemoryBindCount; unsigned char maxObjectThreadgroupMemoryBindCount; unsigned long long maxCount; } common; unsigned int sentinelStart; unsigned int headerSize; unsigned int bufferSize; unsigned int maxVertexBindCount; unsigned int maxFragmentBindCount; unsigned int executionOffset; unsigned long long id; unsigned long long gpuAddress; struct sICBHeaderFlags { unsigned char type : 1; unsigned char inheritArguments : 1; unsigned char inheritPipeline : 1; unsigned char telemetry : 1; unsigned char gtpin : 1; unsigned char hasEDRAM : 1; unsigned char hasDynamicStride : 1; unsigned int  : 25; } flags; unsigned int encodeStatus; unsigned int patchStatus; unsigned int optimizeStatus; unsigned int pad1; struct sICBWorkaroundFlags { unsigned char WaForceCB0ToBeZeroWhenSendingPC : 1; unsigned int reserved2 : 31; } waFlags; unsigned int patchOffset; unsigned int patchPsoOffset; unsigned int patchDrawOffset; unsigned int patchDrawStride; struct { unsigned int stride; unsigned int vsLength; unsigned int vsOffset; unsigned int hsLength; unsigned int hsOffset; unsigned int dsLength; unsigned int dsOffset; unsigned int psLength; unsigned int psOffset; } patchPso; unsigned int preambleOffset; unsigned int commandStride; unsigned int commandOffset; unsigned int commandErrorOffset; unsigned int constantOffset; unsigned int constantStride; unsigned int constantVsLength; unsigned int constantVsOffset; unsigned int constantVsBufferOffset; unsigned int constantHsLength; unsigned int constantHsOffset; unsigned int constantHsBufferOffset; unsigned int constantDsLength; unsigned int constantDsOffset; unsigned int constantDsBufferOffset; unsigned int constantPsLength; unsigned int constantPsOffset; unsigned int constantPsBufferOffset; unsigned int constantPsGlobalLength; unsigned int constantPsGlobalOffset; unsigned int constantDsbLength; unsigned int constantDsbOffset; unsigned long long pipeControlAddress; unsigned int sentinelEnd; } _header;
    MTLIGAccelDevice *_device;
    MTLIGAccelBuffer *_buffer;
    id *_commandList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
