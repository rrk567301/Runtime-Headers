@class __end_, NSUUID, _VZFramebuffer, VZVirtualMachine, VZVirtualMachineView, __cap_;

@interface VZGraphicsDisplay : NSObject {
    VZVirtualMachine *_virtualMachine;
    struct DispatchQueue { struct OpaqueId *_object; } _queue;
    _VZFramebuffer *_framebuffer;
    unsigned long long _graphicsDeviceIndex;
    unsigned long long _framebufferIndex;
    BOOL _supportsReconfiguration;
    NSUUID *_uuid;
    VZVirtualMachineView *_liveResizeConnectedView;
    struct optional<_VZVirtualMachineGraphicsOrientation> { union { char __null_state_; long long __val_; } ; BOOL __engaged_; } _viewOrientation;
    int _resizeState;
    struct DispatchSourceTimer { struct OpaqueId *_object; } _resizeAwaitingSizeFailsafeTimer;
    struct DispatchSourceTimer { struct OpaqueId *_object; } _resizeQuiesceTimer;
    unsigned int _resizeQuiesceFrameCount;
    struct vector<__weak id<VZGraphicsDisplayObserver>, std::allocator<__weak id<VZGraphicsDisplayObserver>>> { __end_ **__begin_; __cap_ **x0; id *x1; } _observers;
}

@property (readonly) struct CGSize { double x0; double x1; } sizeInPixels;

- (id)_configuration;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id).cxx_construct;
- (void)dealloc;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)_uuid;
- (id)_graphicsDevice;
- (struct variant<VzCore::VirtualMachineConfiguration::GraphicsDevices::ParavirtualizedGraphics::Display, VzCore::VirtualMachineConfiguration::GraphicsDevices::Virtio::Scanout> { struct __impl<VzCore::VirtualMachineConfiguration::GraphicsDevices::ParavirtualizedGraphics::Display, VzCore::VirtualMachineConfiguration::GraphicsDevices::Virtio::Scanout> { union __union<std::__variant_detail::_Trait::_Available, 0UL, VzCore::VirtualMachineConfiguration::GraphicsDevices::ParavirtualizedGraphics::Display, VzCore::VirtualMachineConfiguration::GraphicsDevices::Virtio::Scanout> { char x0; struct __alt<0UL, VzCore::VirtualMachineConfiguration::GraphicsDevices::ParavirtualizedGraphics::Display> { struct Display { struct Size<unsigned long long> { unsigned long long x0; unsigned long long x1; } x0; unsigned long long x1; int x2; int x3; struct optional<std::string> { union { char x0; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x1; } x0; BOOL x1; } x4; struct Uuid { unsigned char x0[16]; } x5; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 1UL, VzCore::VirtualMachineConfiguration::GraphicsDevices::Virtio::Scanout> { char x0; struct __alt<1UL, VzCore::VirtualMachineConfiguration::GraphicsDevices::Virtio::Scanout> { struct Scanout { struct Rect<unsigned int> { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; } x0; struct Uuid { unsigned char x0[16]; } x1; } x0; } x1; union __union<std::__variant_detail::_Trait::_Available, 2UL> { } x2; } x2; } x0; unsigned int x1; } x0; })_displayConfiguration;
- (long long)_graphicsOrientation;
- (id)_initDetached;
- (BOOL)_matchesConfiguration:(id)a0;
- (BOOL)_matchesSize:(struct CGSize { double x0; double x1; })a0;
- (void)_setGraphicsDevice:(id)a0;
- (void)_takeScreenshotWithCompletionHandler:(id /* block */)a0;
- (id)initWithVirtualMachine:(id)a0 graphicsDeviceIndex:(unsigned long long)a1 framebufferIndex:(unsigned long long)a2 uuid:(id)a3;
- (BOOL)reconfigureWithConfiguration:(id)a0 error:(id *)a1;
- (BOOL)reconfigureWithSizeInPixels:(struct CGSize { double x0; double x1; })a0 error:(id *)a1;

@end
