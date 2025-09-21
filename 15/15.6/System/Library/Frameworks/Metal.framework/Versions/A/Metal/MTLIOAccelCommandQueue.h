@class MTLIOAccelDevice;
@protocol MTLDevice;

@interface MTLIOAccelCommandQueue : _MTLCommandQueue {
    struct __IOAccelCommandQueue { } *_commandQueue;
    unsigned long long _priority;
    unsigned long long _backgroundPriority;
}

@property (readonly) MTLIOAccelDevice<MTLDevice> *device;

- (void)dealloc;
- (char)setGPUPriority:(unsigned long long)a0;
- (unsigned long long)getBackgroundGPUPriority;
- (unsigned long long)getGPUPriority;
- (char)setBackgroundGPUPriority:(unsigned long long)a0;
- (char)setBackgroundGPUPriority:(unsigned long long)a0 offset:(unsigned short)a1;
- (void)setCompletionQueue:(id)a0;
- (char)setGPUPriority:(unsigned long long)a0 offset:(unsigned short)a1;
- (void)setLabel:(id)a0;
- (id)initWithDevice:(id)a0 descriptor:(id)a1;
- (char)_setGPUPriority:(unsigned long long)a0 backgroundPriority:(unsigned long long)a1;
- (void)submitCommandBuffers:(const id *)a0 count:(unsigned long long)a1;

@end
