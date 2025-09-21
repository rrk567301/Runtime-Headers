@class VZVirtualMachine, VZGraphicsDisplay, _VZFramebufferRemoteSessionNotifier;

@interface _VZFramebuffer : NSObject {
    VZVirtualMachine *_virtualMachine;
    VZGraphicsDisplay *_display;
    struct DispatchQueue { struct OpaqueId *_object; } _queue;
    unsigned long long _graphicsDeviceIndex;
    unsigned long long _framebufferIndex;
    unsigned long long _currentFrameRate;
    unsigned long long _protectionOptions;
    BOOL _pendingProtectionOptionsUpdate;
    struct CfPtr<CGColorSpace *> { struct CGColorSpace *_object; } _colorSpace;
    struct vector<FramebufferObserver, std::allocator<FramebufferObserver>> { struct FramebufferObserver *__begin_; struct FramebufferObserver *__end_; struct FramebufferObserver *__cap_; } _observers;
    _VZFramebufferRemoteSessionNotifier *_notifier;
    struct shared_ptr<const VzCore::Hardware::FrameUpdate> { struct FrameUpdate *__ptr_; struct __shared_weak_count *__cntrl_; } _lastFrameUpdate;
    struct shared_ptr<const VzCore::Hardware::CursorUpdate> { struct CursorUpdate *__ptr_; struct __shared_weak_count *__cntrl_; } _lastCursorUpdate;
}

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_takeScreenshotWithCompletionHandler:(id /* block */)a0 imageConversionBlock:(id /* block */)a1;

@end
