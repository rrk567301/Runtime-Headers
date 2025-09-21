@class _VZFramebuffer;

@interface _VZFramebufferRemoteSessionNotifier : NSObject {
    _VZFramebuffer *_framebuffer;
    struct DispatchQueue { struct OpaqueId *_object; } _queue;
    BOOL _registeredForNotifications;
}

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;

@end
