@class hwResourcePoolCount, MTLResourceListPool, IOGPUMetalDeviceShmemPool;

@interface IOGPUMetal4CommandAllocator : _MTL4CommandAllocator {
    struct commandBufferStorageBusyQueue { struct IOGPUMetalCommandBufferStorage *tqh_first; struct IOGPUMetalCommandBufferStorage **tqh_last; } _busyQueue;
    int _busyQueueCount;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct { IOGPUMetalDeviceShmemPool *segmentListShmemPool; IOGPUMetalDeviceShmemPool *kernelCommandShmemPool; IOGPUMetalDeviceShmemPool *sidebandPool; hwResourcePoolCount **hwResourcePools; unsigned int x0; MTLResourceListPool *akResourceListPool; MTLResourceListPool *akPrivateResourceListPool; IOGPUMetalDeviceShmemPool *debugBufferShmemPool; } _storageCreateParams;
    struct IOGPUMetalCommandBufferStoragePool { struct gpuStorageQueue { struct IOGPUMetalCommandBufferStorage *x0; struct IOGPUMetalCommandBufferStorage **x1; } x0; struct os_unfair_lock_s { unsigned int x0; } x1; int x2; int x3; int x4; id x5; struct *x6; } *_commandBufferStoragePool;
    unsigned int _generation;
    BOOL _aliasToDevice;
}

- (void)setCurrentCommandEncoder:(id)a0;
- (void)reset;
- (void)dealloc;
- (id)initWithDevice:(id)a0;
- (unsigned int)getGeneration;
- (unsigned long long)allocatedSize;
- (void)setHwResourcePool:(id *)a0 count:(unsigned int)a1;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (struct IOGPUMetalCommandBufferStorage { id x0; struct IOGPUMetalCommandBufferStoragePool *x1; struct { struct IOGPUMetalCommandBufferStorage *x0; struct IOGPUMetalCommandBufferStorage **x1; } x2; id x3; char *x4; char *x5; char *x6; struct IOGPUMetalCommandBufferSidebandBuffer { id x0; char *x1; char *x2; char *x3; } x7; id x8; char *x9; char *x10; struct IOGPUSegmentListHeader *x11; struct IOGPUSegmentResourceListHeader *x12; struct IOGPUSegmentResourceDescriptorGroup *x13; struct IOGPUResourceList { unsigned int x0[114]; unsigned int *x1; unsigned long long *x2; union { } *x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; struct IOGPUSegmentResourceDescriptorGroup *x12; unsigned long long x13; unsigned long long x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; void /* function */ *x22; void *x23; } x14; id x15; id x16; unsigned long long x17; unsigned long long x18; id *x19; struct IOGPUMetalCommandBufferResourceInfo *x20; unsigned long long x21; id *x22; unsigned int x23; unsigned long long x24; struct IOGPUSegmentListShmemHeader *x25; struct IOGPUSegmentKernelCommmandListHeader *x26; unsigned int x27; unsigned int x28; int x29; int x30; unsigned int x31; struct IOGPUSegmentResourceListHeader *x32; struct IOGPUSegmentResourceDescriptorGroup *x33; unsigned int x34; id x35; char *x36; char *x37; struct sIOGPUKernelCommandSetResourceGroupsArgs *x38; id x39[2]; BOOL x40; } *)getCommandBufferStorage:(unsigned long long)a0 retainReferences:(BOOL)a1;
- (BOOL)initAllocatorWithDevice:(id)a0;
- (id)initWithDeviceAndAliasToDevicePools:(id)a0;
- (void)returnCommandBufferStorage:(struct IOGPUMetalCommandBufferStorage { id x0; struct IOGPUMetalCommandBufferStoragePool *x1; struct { struct IOGPUMetalCommandBufferStorage *x0; struct IOGPUMetalCommandBufferStorage **x1; } x2; id x3; char *x4; char *x5; char *x6; struct IOGPUMetalCommandBufferSidebandBuffer { id x0; char *x1; char *x2; char *x3; } x7; id x8; char *x9; char *x10; struct IOGPUSegmentListHeader *x11; struct IOGPUSegmentResourceListHeader *x12; struct IOGPUSegmentResourceDescriptorGroup *x13; struct IOGPUResourceList { unsigned int x0[114]; unsigned int *x1; unsigned long long *x2; union { } *x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; struct IOGPUSegmentResourceDescriptorGroup *x12; unsigned long long x13; unsigned long long x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; void /* function */ *x22; void *x23; } x14; id x15; id x16; unsigned long long x17; unsigned long long x18; id *x19; struct IOGPUMetalCommandBufferResourceInfo *x20; unsigned long long x21; id *x22; unsigned int x23; unsigned long long x24; struct IOGPUSegmentListShmemHeader *x25; struct IOGPUSegmentKernelCommmandListHeader *x26; unsigned int x27; unsigned int x28; int x29; int x30; unsigned int x31; struct IOGPUSegmentResourceListHeader *x32; struct IOGPUSegmentResourceDescriptorGroup *x33; unsigned int x34; id x35; char *x36; char *x37; struct sIOGPUKernelCommandSetResourceGroupsArgs *x38; id x39[2]; BOOL x40; } *)a0 commandAllocatorGeneration:(unsigned int)a1;

@end
