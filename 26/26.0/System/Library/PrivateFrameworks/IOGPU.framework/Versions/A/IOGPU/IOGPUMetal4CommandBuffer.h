@interface IOGPUMetal4CommandBuffer : _MTL4CommandBuffer {
    struct IOGPUMetalCommandBufferStorage { id x0; struct IOGPUMetalCommandBufferStoragePool *x1; struct { struct IOGPUMetalCommandBufferStorage *x0; struct IOGPUMetalCommandBufferStorage **x1; } x2; id x3; char *x4; char *x5; char *x6; struct IOGPUMetalCommandBufferSidebandBuffer { id x0; char *x1; char *x2; char *x3; } x7; id x8; char *x9; char *x10; struct IOGPUSegmentListHeader *x11; struct IOGPUSegmentResourceListHeader *x12; struct IOGPUSegmentResourceDescriptorGroup *x13; struct IOGPUResourceList { unsigned int x0[114]; unsigned int *x1; unsigned long long *x2; union { } *x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; struct IOGPUSegmentResourceDescriptorGroup *x12; unsigned long long x13; unsigned long long x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; void /* function */ *x22; void *x23; } x14; id x15; id x16; unsigned long long x17; unsigned long long x18; id *x19; struct IOGPUMetalCommandBufferResourceInfo *x20; unsigned long long x21; id *x22; unsigned int x23; unsigned long long x24; struct IOGPUSegmentListShmemHeader *x25; struct IOGPUSegmentKernelCommmandListHeader *x26; unsigned int x27; unsigned int x28; int x29; int x30; unsigned int x31; struct IOGPUSegmentResourceListHeader *x32; struct IOGPUSegmentResourceDescriptorGroup *x33; unsigned int x34; id x35; char *x36; char *x37; struct sIOGPUKernelCommandSetResourceGroupsArgs *x38; id x39[2]; BOOL x40; } *_storage;
    unsigned long long _protectionOptions;
}

- (void)endCurrentSegment;
- (void)growDebugBuffer:(unsigned int)a0;
- (void)setProtectionOptions:(unsigned long long)a0;
- (void)allocateSidebandBuffer:(unsigned int)a0;
- (void)dealloc;
- (id)initWithDevice:(id)a0;
- (void)commitEncoder;
- (struct IOGPUMetalCommandBufferStorage { id x0; struct IOGPUMetalCommandBufferStoragePool *x1; struct { struct IOGPUMetalCommandBufferStorage *x0; struct IOGPUMetalCommandBufferStorage **x1; } x2; id x3; char *x4; char *x5; char *x6; struct IOGPUMetalCommandBufferSidebandBuffer { id x0; char *x1; char *x2; char *x3; } x7; id x8; char *x9; char *x10; struct IOGPUSegmentListHeader *x11; struct IOGPUSegmentResourceListHeader *x12; struct IOGPUSegmentResourceDescriptorGroup *x13; struct IOGPUResourceList { unsigned int x0[114]; unsigned int *x1; unsigned long long *x2; union { } *x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; struct IOGPUSegmentResourceDescriptorGroup *x12; unsigned long long x13; unsigned long long x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; void /* function */ *x22; void *x23; } x14; id x15; id x16; unsigned long long x17; unsigned long long x18; id *x19; struct IOGPUMetalCommandBufferResourceInfo *x20; unsigned long long x21; id *x22; unsigned int x23; unsigned long long x24; struct IOGPUSegmentListShmemHeader *x25; struct IOGPUSegmentKernelCommmandListHeader *x26; unsigned int x27; unsigned int x28; int x29; int x30; unsigned int x31; struct IOGPUSegmentResourceListHeader *x32; struct IOGPUSegmentResourceDescriptorGroup *x33; unsigned int x34; id x35; char *x36; char *x37; struct sIOGPUKernelCommandSetResourceGroupsArgs *x38; id x39[2]; BOOL x40; } *)commandBufferStorage;
- (void)useResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (void)encodeSignalEvent:(id)a0 value:(unsigned long long)a1;
- (void)growKernelCommandBuffer:(unsigned long long)a0;
- (void)getCurrentKernelCommandBufferStart:(void **)a0 current:(void **)a1 end:(void **)a2;
- (void)encodeWaitForEvent:(id)a0 value:(unsigned long long)a1 timeout:(unsigned int)a2;
- (void)getDebugBufferPointerStart:(void **)a0 end:(void **)a1;
- (void)encodeWaitForEvent:(id)a0 value:(unsigned long long)a1;
- (struct IOGPUResourceList { unsigned int x0[114]; unsigned int *x1; unsigned long long *x2; union { } *x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; struct IOGPUSegmentResourceDescriptorGroup *x12; unsigned long long x13; unsigned long long x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; void /* function */ *x22; void *x23; } *)ioGPUResourceList;
- (void *)_reserveKernelCommandBufferSpace:(unsigned long long)a0;
- (void)getCurrentKernelCommandBufferPointer:(void **)a0 end:(void **)a1;
- (void)getSegmentListPointerStart:(void **)a0 current:(void **)a1 end:(void **)a2;
- (id)akResourceList;
- (void)allocDebugBuffer;
- (id)akPrivateResourceList;
- (unsigned long long)protectionOptions;
- (void)beginSegment:(void *)a0;
- (void)setCurrentKernelCommandBufferPointer:(void *)a0;
- (void)useInternalResidencySet:(id)a0;
- (void)growSegmentList;
- (void)growSidebandBuffer:(unsigned int)a0;
- (void)useInternalResidencySets:(const id *)a0 count:(unsigned long long)a1;
- (void)allocCommandBufferResourceAtIndex:(unsigned int)a0;
- (void)setCurrentSegmentListPointer:(void *)a0;
- (void)useResidencySet:(id)a0;
- (void)beginCommandBufferWithAllocator:(id)a0;
- (void)beginCommandBufferWithAllocator:(id)a0 options:(id)a1;
- (void)copyBufferMappingsFromBuffer:(id)a0 toBuffer:(id)a1 operations:(const struct { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; unsigned long long x1; } *)a2 count:(unsigned long long)a3;
- (void)endCommandBuffer;
- (void)resetCommandBuffer;
- (void)updateBufferMappings:(id)a0 heap:(id)a1 operations:(const struct { unsigned long long x0; struct _NSRange { unsigned long long x0; unsigned long long x1; } x1; unsigned long long x2; } *)a2 count:(unsigned long long)a3;
- (void)beginIOGPUCommandBufferWithAllocator:(id)a0 options:(id)a1;
- (void)encodePostMappingWaitEvent:(id)a0 postMappingValue:(unsigned long long)a1 timeout:(unsigned int)a2;
- (void)fillCommandBufferArgs:(struct IOGPUCommandQueueCommandBufferArgs { unsigned int x0; unsigned int x1; unsigned int x2; union { id /* block */ x0; unsigned long long x1; } x3; union { id /* block */ x0; unsigned long long x1; } x4; unsigned int x5; unsigned long long x6; } *)a0;

@end
