@class NSMutableArray;
@protocol MTLCommandBuffer;

@interface GFX10AmdMtlAccelerationStructureCmdEncoderTokeniser : NSObject {
    struct atomic<NSString *> { struct __cxx_atomic_impl<NSString *, std::__cxx_atomic_base_impl<NSString *>> { _Atomic id __a_value; } __a_; } label;
    id<MTLCommandBuffer> owner;
    void *interposer;
    NSMutableArray *tokens;
    BOOL bComplete;
}

- (void)dealloc;
- (id).cxx_construct;
- (void)pushDebugGroup:(id)a0;
- (void)useHeaps:(const id *)a0 count:(unsigned long long)a1;
- (void)buildAccelerationStructure:(id)a0 descriptor:(id)a1 scratchBuffer:(id)a2 scratchBufferOffset:(unsigned long long)a3;
- (id)commandBuffer;
- (void)copyAccelerationStructure:(id)a0 toAccelerationStructure:(id)a1;
- (void)copyAndCompactAccelerationStructure:(id)a0 toAccelerationStructure:(id)a1;
- (id)device;
- (void)endEncoding;
- (void)insertDebugSignpost:(id)a0;
- (id)label;
- (void)popDebugGroup;
- (void)refitAccelerationStructure:(id)a0 descriptor:(id)a1 destination:(id)a2 scratchBuffer:(id)a3 scratchBufferOffset:(unsigned long long)a4;
- (void)sampleCountersInBuffer:(id)a0 atSampleIndex:(unsigned long long)a1 withBarrier:(char)a2;
- (void)setLabel:(id)a0;
- (void)updateFence:(id)a0;
- (void)useHeap:(id)a0;
- (void)useResource:(id)a0 usage:(unsigned long long)a1;
- (void)useResources:(const id *)a0 count:(unsigned long long)a1 usage:(unsigned long long)a2;
- (void)waitForFence:(id)a0;
- (void)writeCompactedAccelerationStructureSize:(id)a0 toBuffer:(id)a1 offset:(unsigned long long)a2;
- (void)writeCompactedAccelerationStructureSize:(id)a0 toBuffer:(id)a1 offset:(unsigned long long)a2 sizeDataType:(unsigned long long)a3;
- (void)encode;
- (id)initWithDescriptor:(id)a0 andOwner:(id)a1 withInterposer:(void *)a2;
- (id)initWithOwner:(id)a0 withInterposer:(void *)a1;

@end
