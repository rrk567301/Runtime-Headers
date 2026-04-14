@protocol MTLIndirectCommandBuffer, PGTask_Resource;

@interface PGIndirectCommandBufferResource : PGResource {
    id<PGTask_Resource> _task;
    unsigned long long _indirectCommandBufferlength;
    unsigned long long _indirectCommandBufferVirtualOffset;
    struct { unsigned short commandTypeOffset; unsigned short barrierOffset; unsigned short kernelDispatchArgumentsOffset; unsigned short tessellationFactorOffset; unsigned int pipelineStateOffset; unsigned int vertexBufferBindOffset; unsigned int fragmentBufferBindOffset; unsigned int objectBufferBindOffset; unsigned int meshBufferBindOffset; unsigned int kernelBufferBindOffset; unsigned int attributeStrideOffset; unsigned int objectThreadgroupMemoryLengthOffset; unsigned int threadgroupMemoryLengthOffset; unsigned int commandArgumentsOffset; unsigned int commandSize; } _commandLayout;
    struct PGIndirectCommandBufferFlags { unsigned char inheritPipelineState : 1; unsigned char inheritBuffers : 1; unsigned char supportDynamicAttributeStride : 1; unsigned int commandTypes; unsigned long long maxVertexBufferBindCount; unsigned long long maxFragmentBufferBindCount; unsigned long long maxKernelBufferBindCount; unsigned long long maxKernelThreadgroupMemoryBindCount; } _flags;
    id<MTLIndirectCommandBuffer> _indirectCommandBuffer;
}

- (void)dealloc;
- (void)discard;
- (void)evictWithCPU;
- (id)getIndirectCommandBuffer;
- (id)getResource;
- (id)initWithTask:(id)a0 descriptor:(const struct { unsigned long long x0; unsigned int x1; } *)a1 indirectCommandBuffer:(id)a2 commandLayout:(struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; })a3 flags:(struct PGIndirectCommandBufferFlags { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned int x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; })a4;
- (BOOL)needsCPUPaging;
- (void)prepareWithCPU;
- (void)synchronizeWithCPU;

@end
