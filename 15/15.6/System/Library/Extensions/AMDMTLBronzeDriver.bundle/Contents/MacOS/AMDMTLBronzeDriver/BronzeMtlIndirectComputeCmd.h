@class NSString, BronzeMtlBuffer, BronzeMtlDevice;

@interface BronzeMtlIndirectComputeCmd : NSObject <MTLIndirectComputeCommandSPI> {
    struct BronzeMtlIndirectComputeCmdMembers { BronzeMtlBuffer *icb; struct IndirectCommandBufferHeader *icbHeader; unsigned int cmdIndex; BronzeMtlDevice *device; unsigned long long cmdBuf; unsigned long long tblBuf; } m_members;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setKernelBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)clearBarrier;
- (void)concurrentDispatchThreadgroups:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)concurrentDispatchThreads:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (id)dispatchThreadgroupsArguments;
- (id)dispatchThreadsArguments;
- (unsigned long long)getCommandType;
- (id)getImageBlockSize;
- (unsigned long long)getKernelAttributeStrideAtIndex:(unsigned long long)a0;
- (unsigned long long)getKernelBufferAddressAtIndex:(unsigned long long)a0;
- (void *)getKernelBufferAtIndex:(unsigned long long)a0;
- (unsigned long long)getOptimizedStatus;
- (unsigned long long)getPipelineStateUniqueIdentifier;
- (struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })getStageInRegion;
- (unsigned long long)getThreadgroupMemoryLengthAtIndex:(unsigned long long)a0;
- (char)hasBarrier;
- (void)reset;
- (void)setBarrier;
- (void)setComputePipelineState:(id)a0;
- (void)setImageblockWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (void)setKernelBuffer:(id)a0 offset:(unsigned long long)a1 attributeStride:(unsigned long long)a2 atIndex:(unsigned long long)a3;
- (void)setStageInRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a0;
- (void)setThreadgroupMemoryLength:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (id)getPipelineState;
- (id)initWithBuffer:(id)a0 device:(id)a1 atIndex:(unsigned int)a2;

@end
