@class MTLIOAccelDevice;
@protocol MTLDevice;

@interface MTLIOAccelCommandQueue : _MTLCommandQueue {
    struct __IOAccelCommandQueue { } *_commandQueue;
    unsigned long long _priority;
    unsigned long long _backgroundPriority;
}

@property (readonly) MTLIOAccelDevice<MTLDevice> *device;

- (void)setCompletionQueue:(id)a0;
- (void)dealloc;
- (BOOL)_setGPUPriority:(unsigned long long)a0 backgroundPriority:(unsigned long long)a1;
- (unsigned long long)getGPUPriority;
- (BOOL)setGPUPriority:(unsigned long long)a0 offset:(unsigned short)a1;
- (BOOL)setBackgroundGPUPriority:(unsigned long long)a0;
- (BOOL)setGPUPriority:(unsigned long long)a0;
- (unsigned long long)getBackgroundGPUPriority;
- (void)setLabel:(id)a0;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (BOOL)setBackgroundGPUPriority:(unsigned long long)a0 offset:(unsigned short)a1;
- (void)submitCommandBuffers:(const id *)a0 count:(unsigned long long)a1;

@end
