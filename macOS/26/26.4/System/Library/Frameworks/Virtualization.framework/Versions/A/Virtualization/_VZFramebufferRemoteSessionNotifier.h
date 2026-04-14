@class _VZFramebuffer;

@interface _VZFramebufferRemoteSessionNotifier : NSObject {
    _VZFramebuffer *_framebuffer;
    struct DispatchQueue { struct OpaqueId *_object; } _queue;
    BOOL _registeredForNotifications;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)dealloc;

@end
