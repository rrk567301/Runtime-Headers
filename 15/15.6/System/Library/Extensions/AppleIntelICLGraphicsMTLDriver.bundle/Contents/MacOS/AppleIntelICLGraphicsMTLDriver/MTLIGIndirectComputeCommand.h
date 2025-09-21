@class NSString;

@interface MTLIGIndirectComputeCommand : NSObject <MTLIndirectComputeCommandSPI> {
    struct IGAccelIndirectComputeCommandEncoder { char *x0; struct sIGICBComputeHeader *x1; struct sIGICBComputeCommandHeader *x2; unsigned long long x3; } *_pIndirectComputeEncoder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
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
- (id)initWithIndex:(unsigned long long)a0 buffer:(id)a1 header:(struct sIGICBComputeHeader { struct sIndirectCommandBufferDebugHeader { unsigned long long x0; unsigned int x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; unsigned char x9; unsigned char x10; unsigned char x11; unsigned char x12; unsigned long long x13; } x0; unsigned long long x1; unsigned int x2; unsigned int x3; unsigned long long x4; unsigned int x5; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned int x8 : 24; } x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; unsigned int x26; unsigned int x27; unsigned int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned int x32; unsigned int x33; unsigned int x34; unsigned int x35; unsigned int x36; unsigned int x37; unsigned long long x38; unsigned int x39; unsigned int x40; unsigned long long x41; } *)a2 device:(id)a3;
- (unsigned long long)threadgroupMemoryLengthArguments:(unsigned long long)a0;

@end
