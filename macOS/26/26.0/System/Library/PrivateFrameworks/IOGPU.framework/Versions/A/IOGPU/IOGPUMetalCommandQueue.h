@class NSCountedSet, IOGPUMetalDevice;
@protocol MTLDevice;

@interface IOGPUMetalCommandQueue : _MTLCommandQueue {
    struct __IOGPUCommandQueue { } *_commandQueue;
    BOOL _disableAsyncCompletionDispatch;
    unsigned long long _priority;
    unsigned long long _backgroundPriority;
    NSCountedSet *_resourceGroups[2];
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _resourceGroupsLock;
}

@property (readonly) IOGPUMetalDevice<MTLDevice> *device;

- (void)setCompletionQueue:(id)a0;
- (void)dealloc;
- (BOOL)_setGPUPriority:(unsigned long long)a0 backgroundPriority:(unsigned long long)a1;
- (void)removeResidencySets:(id *)a0 count:(unsigned long long)a1;
- (BOOL)supportsBackgroundAppRole;
- (void)removeInternalResidencySet:(id)a0;
- (id)initWithDevice:(id)a0 descriptor:(id)a1 args:(struct IOGPUDeviceNewCommandQueueArgs { char x0[1024]; int x1; unsigned char x2; unsigned char x3; unsigned char x4[2]; } *)a2 argsSize:(unsigned int)a3;
- (void)_submitCommandBuffers:(id *)a0 count:(unsigned long long)a1;
- (unsigned long long)getGPUPriority;
- (void)removeResidencySet:(id)a0;
- (void)dispatchAvailableCompletionNotifications;
- (BOOL)setGPUPriority:(unsigned long long)a0 offset:(unsigned short)a1;
- (void)addInternalResidencySets:(id *)a0 count:(unsigned long long)a1;
- (void)removeInternalResidencySets:(id *)a0 count:(unsigned long long)a1;
- (void)addResidencySet:(id)a0;
- (BOOL)setBackgroundGPUPriority:(unsigned long long)a0;
- (void)addResidencySets:(id *)a0 count:(unsigned long long)a1;
- (BOOL)setGPUPriority:(unsigned long long)a0;
- (unsigned long long)getBackgroundGPUPriority;
- (void)setLabel:(id)a0;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (BOOL)setBackgroundGPUPriority:(unsigned long long)a0 offset:(unsigned short)a1;
- (void)addInternalResidencySet:(id)a0;
- (void)submitCommandBuffers:(id *)a0 count:(unsigned long long)a1;

@end
