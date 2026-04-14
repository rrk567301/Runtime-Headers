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

- (void)_submitCommandBuffers:(id *)a0 count:(unsigned long long)a1;
- (BOOL)setGPUPriority:(unsigned long long)a0 offset:(unsigned short)a1;
- (void)addResidencySets:(id *)a0 count:(unsigned long long)a1;
- (id)initWithDevice:(id)a0 descriptor:(id)a1 args:(struct IOGPUDeviceNewCommandQueueArgs { char x0[1024]; int x1; unsigned char x2; unsigned char x3; unsigned char x4[2]; } *)a2 argsSize:(unsigned int)a3;
- (void)setLabel:(id)a0;
- (void)setCompletionQueue:(id)a0;
- (void)removeResidencySet:(id)a0;
- (BOOL)_setGPUPriority:(unsigned long long)a0 backgroundPriority:(unsigned long long)a1;
- (void)submitCommandBuffers:(id *)a0 count:(unsigned long long)a1;
- (void)addInternalResidencySet:(id)a0;
- (unsigned long long)getGPUPriority;
- (unsigned long long)getBackgroundGPUPriority;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (BOOL)setBackgroundGPUPriority:(unsigned long long)a0 offset:(unsigned short)a1;
- (void)removeResidencySets:(id *)a0 count:(unsigned long long)a1;
- (BOOL)setGPUPriority:(unsigned long long)a0;
- (void)dispatchAvailableCompletionNotifications;
- (void)removeInternalResidencySets:(id *)a0 count:(unsigned long long)a1;
- (BOOL)supportsBackgroundAppRole;
- (void)addInternalResidencySets:(id *)a0 count:(unsigned long long)a1;
- (void)addResidencySet:(id)a0;
- (BOOL)setBackgroundGPUPriority:(unsigned long long)a0;
- (void)dealloc;
- (void)removeInternalResidencySet:(id)a0;

@end
