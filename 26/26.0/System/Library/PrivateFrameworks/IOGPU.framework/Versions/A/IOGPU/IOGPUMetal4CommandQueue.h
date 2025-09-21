@class NSCountedSet, IOGPUMetal4CommandBuffer, IOGPUMetal4CommandAllocator, NSObject;
@protocol MTLSharedEventSPI, OS_dispatch_queue;

@interface IOGPUMetal4CommandQueue : _MTL4CommandQueue {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mappingLock;
    IOGPUMetal4CommandBuffer *_mappingCommandBuffer;
    id<MTLSharedEventSPI> _postMappingEvent;
    unsigned long long _postMappingValue;
    BOOL _disableAsyncMapping;
    BOOL _tier1ResourceMapping;
    struct __IOGPUCommandQueue { } *_commandQueue;
    int _qosLevel;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSCountedSet *_resourceGroups[2];
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _resourceGroupsLock;
    IOGPUMetal4CommandAllocator *_commandAllocator;
    unsigned long long _lastSubmissionID;
}

- (void)dealloc;
- (id)initWithDevice:(id)a0;
- (void)removeResidencySets:(id *)a0 count:(unsigned long long)a1;
- (BOOL)supportsBackgroundAppRole;
- (void)removeInternalResidencySet:(id)a0;
- (id)initWithDevice:(id)a0 descriptor:(id)a1 args:(struct IOGPUDeviceNewCommandQueueArgs { char x0[1024]; int x1; unsigned char x2; unsigned char x3; unsigned char x4[2]; } *)a2 argsSize:(unsigned int)a3;
- (void)removeResidencySet:(id)a0;
- (void)addInternalResidencySets:(id *)a0 count:(unsigned long long)a1;
- (void)removeInternalResidencySets:(id *)a0 count:(unsigned long long)a1;
- (void)addResidencySet:(id)a0;
- (void)addResidencySets:(id *)a0 count:(unsigned long long)a1;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (void)addInternalResidencySet:(id)a0;
- (id)commandAllocator;
- (void)copyBufferMappingsFromBuffer:(id)a0 toBuffer:(id)a1 operations:(const struct { struct _NSRange { unsigned long long x0; unsigned long long x1; } x0; unsigned long long x1; } *)a2 count:(unsigned long long)a3;
- (id)preCommit:(const id *)a0 count:(unsigned long long)a1 options:(id)a2;
- (void)signalEvent:(id)a0 value:(unsigned long long)a1;
- (void)updateBufferMappings:(id)a0 heap:(id)a1 operations:(const struct { unsigned long long x0; struct _NSRange { unsigned long long x0; unsigned long long x1; } x1; unsigned long long x2; } *)a2 count:(unsigned long long)a3;
- (void)waitForEvent:(id)a0 value:(unsigned long long)a1;
- (void)waitForEvent:(id)a0 value:(unsigned long long)a1 timeout:(unsigned short)a2;
- (void)_commit:(const id *)a0 count:(unsigned long long)a1 commitFeedback:(id)a2;
- (void)allocateMappingCommandBuffer;
- (void)commandBufferComplete:(id)a0 commandAllocator:(id)a1 commandAllocatorGeneration:(unsigned int)a2 storage:(struct IOGPUMetalCommandBufferStorage { id x0; struct IOGPUMetalCommandBufferStoragePool *x1; struct { struct IOGPUMetalCommandBufferStorage *x0; struct IOGPUMetalCommandBufferStorage **x1; } x2; id x3; char *x4; char *x5; char *x6; struct IOGPUMetalCommandBufferSidebandBuffer { id x0; char *x1; char *x2; char *x3; } x7; id x8; char *x9; char *x10; struct IOGPUSegmentListHeader *x11; struct IOGPUSegmentResourceListHeader *x12; struct IOGPUSegmentResourceDescriptorGroup *x13; struct IOGPUResourceList { unsigned int x0[114]; unsigned int *x1; unsigned long long *x2; union { } *x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; struct IOGPUSegmentResourceDescriptorGroup *x12; unsigned long long x13; unsigned long long x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; void /* function */ *x22; void *x23; } x14; id x15; id x16; unsigned long long x17; unsigned long long x18; id *x19; struct IOGPUMetalCommandBufferResourceInfo *x20; unsigned long long x21; id *x22; unsigned int x23; unsigned long long x24; struct IOGPUSegmentListShmemHeader *x25; struct IOGPUSegmentKernelCommmandListHeader *x26; unsigned int x27; unsigned int x28; int x29; int x30; unsigned int x31; struct IOGPUSegmentResourceListHeader *x32; struct IOGPUSegmentResourceDescriptorGroup *x33; unsigned int x34; id x35; char *x36; char *x37; struct sIOGPUKernelCommandSetResourceGroupsArgs *x38; id x39[2]; BOOL x40; } *)a3 submissionID:(unsigned long long)a4 startTime:(unsigned long long)a5 completionTime:(unsigned long long)a6 kernelError:(unsigned int)a7 error:(id)a8 commitFeedback:(id)a9 commitComplete:(BOOL)a10;
- (void)commitFillArgs:(id *)a0 count:(unsigned long long)a1 args:(unsigned long long)a2 argsSize:(unsigned int)a3 commitFeedback:(id)a4;
- (void)commitMappingCommandBuffer;
- (void)endTier1MappingCommands;
- (id)initIOGPUMTL4CommandQueue:(id)a0 descriptor:(id)a1 args:(struct IOGPUDeviceNewCommandQueueArgs { char x0[1024]; int x1; unsigned char x2; unsigned char x3; unsigned char x4[2]; } *)a2 argsSize:(unsigned int)a3;

@end
