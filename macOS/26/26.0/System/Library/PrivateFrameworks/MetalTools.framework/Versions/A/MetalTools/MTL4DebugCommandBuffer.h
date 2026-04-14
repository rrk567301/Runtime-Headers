@class MTL4RenderPassDescriptor, MTL4DebugCommandAllocator;
@protocol MTL4CommandEncoder;

@interface MTL4DebugCommandBuffer : MTL4ToolsCommandBuffer {
    id<MTL4CommandEncoder> _currentEncoder;
    MTL4DebugCommandAllocator *_debugCommandAllocator;
    unsigned long long _allocatorGeneration;
    struct unordered_multiset<AttachmentDescriptorSimple, AttachmentDescriptorSimple::hash_t, AttachmentDescriptorSimple::equal_t, std::allocator<AttachmentDescriptorSimple>> { struct __hash_table<AttachmentDescriptorSimple, AttachmentDescriptorSimple::hash_t, AttachmentDescriptorSimple::equal_t, std::allocator<AttachmentDescriptorSimple>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<AttachmentDescriptorSimple, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _attachmentSet;
    struct array<AttachmentDescriptorSimple, 8UL> { struct AttachmentDescriptorSimple { void *texture; unsigned long long level; struct _NSRange { unsigned long long location; unsigned long long length; } sliceRange; struct _NSRange { unsigned long long location; unsigned long long length; } depthPlaneRange; unsigned long long storeAction; } __elems_[8]; } _prevAttachments;
    struct array<AttachmentDescriptorSimple, 8UL> { struct AttachmentDescriptorSimple { void *texture; unsigned long long level; struct _NSRange { unsigned long long location; unsigned long long length; } sliceRange; struct _NSRange { unsigned long long location; unsigned long long length; } depthPlaneRange; unsigned long long storeAction; } __elems_[8]; } _currentAttachments;
    struct MTL4DebugRenderPassInfo { MTL4RenderPassDescriptor *resumingRenderPassDescriptor; MTL4RenderPassDescriptor *suspendingRenderPassDescriptor; } _suspendResumeRenderPassInfo;
}

@property (nonatomic) unsigned long long currentState;
@property (readonly, nonatomic) unsigned long long aggregatedEncoderMask;

- (void)dealloc;
- (void)useResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (id)computeCommandEncoder;
- (id).cxx_construct;
- (void)popDebugGroup;
- (void).cxx_destruct;
- (void)pushDebugGroup:(id)a0;
- (void)useResidencySet:(id)a0;
- (void)writeTimestampIntoHeap:(id)a0 atIndex:(unsigned long long)a1;
- (void)_clearSuspendResumeRenderPassInfo;
- (void)_resetRenderPassAttachmentTracking;
- (const void *)attachmentSet;
- (void)beginCommandBufferWithAllocator:(id)a0;
- (void)beginCommandBufferWithAllocator:(id)a0 options:(id)a1;
- (id)commandAllocator;
- (id)computeCommandEncoderWithSubstreamCount:(unsigned int)a0;
- (void)endCommandBuffer;
- (id)initWithCommandBuffer:(id)a0 device:(id)a1;
- (BOOL)isAllocatorGenerationValid;
- (id)machineLearningCommandEncoder;
- (void)onCurrentEncoderEnded;
- (id)renderCommandEncoderWithDescriptor:(id)a0;
- (id)renderCommandEncoderWithDescriptor:(id)a0 options:(unsigned long long)a1;
- (void)resolveCounterHeap:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 intoBuffer:(id)a2 atOffset:(unsigned long long)a3 waitFence:(id)a4 updateFence:(id)a5;
- (void)resolveCounterHeap:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 intoBuffer:(struct MTL4BufferRange { unsigned long long x0; unsigned long long x1; })a2 waitFence:(id)a3 updateFence:(id)a4;
- (id)sampledComputeCommandEncoder:(union { struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x0; struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x1; } *)a0 capacity:(unsigned long long)a1;
- (id)sampledRenderCommandEncoderWithDescriptor:(id)a0 programInfoBuffer:(union { struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x0; struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x1; } *)a1 capacity:(unsigned long long)a2;
- (struct MTL4DebugRenderPassInfo { id x0; id x1; })suspendResumeRenderPassInfo;

@end
