@class NSString, MTLIGAccelBuffer, MTLIGAccelDevice;

@interface MTLIGAccelIndirectComputeCommandEncoder : NSObject <MTLIndirectComputeCommandEncoderSPI> {
    struct sIGICBComputeHeader { struct sIndirectCommandBufferDebugHeader { unsigned long long headerSize; unsigned int commandTypes; unsigned char inheritPipelineState; unsigned char inheritBuffers; unsigned char maxVertexBufferBindCount; unsigned char maxFragmentBufferBindCount; unsigned char maxKernelBufferBindCount; unsigned char maxObjectBufferBindCount; unsigned char maxMeshBufferBindCount; unsigned char supportRayTracing; unsigned char supportDynamicAttributeStride; unsigned char maxKernelThreadgroupMemoryBindCount; unsigned char maxObjectThreadgroupMemoryBindCount; unsigned long long maxCount; } common; unsigned long long id; unsigned int headerSize; unsigned int bufferSize; unsigned long long gpuAddress; unsigned int maxTotalThreadsPerThreadGroup; struct { unsigned char type : 1; unsigned char inheritPipelineState : 1; unsigned char inheritArguments : 1; unsigned char supportsNonUniformDispatch : 1; unsigned char WaStallBeforePostSyncOpOnGPGPU : 1; unsigned char telemetry : 1; unsigned char gtpin : 1; unsigned char hasDynamicStride : 1; unsigned int  : 24; } ; unsigned int maxCount; unsigned int maxKernelBindingIndex; unsigned int commandTypes; unsigned int encodeStatus; unsigned int optimizeStatus; unsigned int executionOffset; unsigned int commandHeaderOffset; unsigned int commandHeaderStride; unsigned int commandHeaderSize; unsigned int preambleOffset; unsigned int preambleSize; unsigned int commandOffset; unsigned int commandSize; unsigned int commandStride; unsigned int commandErrorOffset; unsigned int sshBaseOffset; unsigned int sshSize; unsigned int sshBTECount; unsigned int dsbCmdHeaderOffset; unsigned int dshBaseOffset; unsigned int dshSize; unsigned int dshIABSamplerHeapBaseOffset; unsigned int dshIABSamplerHeapSize; unsigned int dshIDTablesBaseOffset; unsigned int dshIDTablesTotalSize; unsigned int dshIDTableCount; unsigned int dshIDTableSize; unsigned int dshIDTableEntrySize; unsigned int dshDataBaseOffset; unsigned int dshPerCommandDataSize; unsigned int dshTotalDataSize; unsigned long long scratchPageAddress; unsigned int initMediaIDLoads; unsigned int lastPatchedEndIndex; unsigned long long dshAllocatorID; } _header;
    MTLIGAccelDevice *_device;
    MTLIGAccelBuffer *_buffer;
    id *_commandList;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
