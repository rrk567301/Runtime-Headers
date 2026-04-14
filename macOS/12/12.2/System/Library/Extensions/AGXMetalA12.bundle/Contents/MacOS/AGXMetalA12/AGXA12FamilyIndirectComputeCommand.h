@class NSString;

@interface AGXA12FamilyIndirectComputeCommand : IOGPUMetalIndirectComputeCommand <MTLIndirectComputeCommandSPI> {
    void *_encoder;
    unsigned int _index;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setComputePipelineState:(id)a0;
- (void)setKernelBuffer:(id)a0 offset:(unsigned long long)a1 atIndex:(unsigned long long)a2;
- (void)concurrentDispatchThreadgroups:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)concurrentDispatchThreads:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 threadsPerThreadgroup:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
- (void)setThreadgroupMemoryLength:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setStageInRegion:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a0;
- (void)setImageblockWidth:(unsigned long long)a0 height:(unsigned long long)a1;
- (unsigned long long)getThreadgroupMemoryLengthAtIndex:(unsigned long long)a0;
- (struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })getStageInRegion;
- (BOOL)hasBarrier;
- (id)getImageBlockSize;
- (void)setBarrier;
- (void)clearBarrier;
- (id)dispatchThreadgroupsArguments;
- (id)dispatchThreadsArguments;
- (void)reset;
- (unsigned long long)getPipelineStateUniqueIdentifier;
- (void *)getKernelBufferAtIndex:(unsigned long long)a0;
- (unsigned long long)getCommandType;
- (id)initWithEncoder:(void *)a0 withIndex:(unsigned int)a1;

@end
