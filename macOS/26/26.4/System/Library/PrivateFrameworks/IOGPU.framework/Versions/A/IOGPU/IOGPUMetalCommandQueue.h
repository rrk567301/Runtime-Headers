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

- (BOOL)supportsBackgroundAppRole;
- (void)addResidencySets:(id *)a0 count:(unsigned long long)a1;
- (void)submitCommandBuffers:(id *)a0 count:(unsigned long long)a1;
- (void)setLabel:(id)a0;
- (void)addInternalResidencySets:(id *)a0 count:(unsigned long long)a1;
- (void)addInternalResidencySet:(id)a0;
- (void)_submitCommandBuffers:(id *)a0 count:(unsigned long long)a1;
- (void)setCompletionQueue:(id)a0;
- (BOOL)setGPUPriority:(unsigned long long)a0 offset:(unsigned short)a1;
- (void)dispatchAvailableCompletionNotifications;
- (BOOL)_setGPUPriority:(unsigned long long)a0 backgroundPriority:(unsigned long long)a1;
- (BOOL)setBackgroundGPUPriority:(unsigned long long)a0;
- (unsigned long long)getBackgroundGPUPriority;
- (BOOL)setGPUPriority:(unsigned long long)a0;
- (void)addResidencySet:(id)a0;
- (void)removeInternalResidencySet:(id)a0;
- (void)removeResidencySet:(id)a0;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (id)initWithDevice:(id)a0 descriptor:(id)a1 args:(struct IOGPUDeviceNewCommandQueueArgs { char x0[1024]; int x1; unsigned char x2; unsigned char x3; unsigned char x4[2]; } *)a2 argsSize:(unsigned int)a3;
- (BOOL)setBackgroundGPUPriority:(unsigned long long)a0 offset:(unsigned short)a1;
- (void)removeResidencySets:(id *)a0 count:(unsigned long long)a1;
- (void)removeInternalResidencySets:(id *)a0 count:(unsigned long long)a1;
- (void)dealloc;
- (unsigned long long)getGPUPriority;

@end
