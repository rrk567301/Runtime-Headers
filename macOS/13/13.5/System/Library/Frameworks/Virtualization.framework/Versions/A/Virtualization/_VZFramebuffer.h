@class VZVirtualMachine, NSObject;
@protocol OS_dispatch_queue;

@interface _VZFramebuffer : NSObject {
    VZVirtualMachine *_virtualMachine;
    struct DispatchQueue { struct CfPtr<NSObject<OS_dispatch_queue> *> { NSObject<OS_dispatch_queue> *_ptr; } _queue; } _queue;
    unsigned long long _graphicsDeviceIndex;
    unsigned long long _framebufferIndex;
    unsigned long long _currentFrameRate;
    struct vector<Observer, std::allocator<Observer>> { struct Observer *__begin_; struct Observer *__end_; struct __compressed_pair<Observer *, std::allocator<Observer>> { struct Observer *__value_; } __end_cap_; } _observers;
    struct shared_ptr<const VzCore::Hardware::FrameUpdate> { struct FrameUpdate *__ptr_; struct __shared_weak_count *__cntrl_; } _lastFrameUpdate;
    struct shared_ptr<const VzCore::Hardware::CursorUpdate> { struct CursorUpdate *__ptr_; struct __shared_weak_count *__cntrl_; } _lastCursorUpdate;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)takeScreenshotWithCompletionHandler:(id /* block */)a0;

@end
