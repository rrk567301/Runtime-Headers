@class _VZKeyboard;
@protocol NSObject;

@interface VZCapsLockIndicatorController : NSObject {
    _VZKeyboard *_keyboard;
    BOOL _savedCapsLockState;
    struct IoObject { unsigned int _object; } _hidEventSystemHandle;
    id<NSObject> _activity;
    id<NSObject> _terminationObserver;
    struct CfPtr<__IOHIDEventSystemClient *> { struct __IOHIDEventSystemClient *_ptr; } _hidEventSystemClient;
}

@property (class, readonly) VZCapsLockIndicatorController *controller;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)keyboard;
- (void)attachKeyboard:(id)a0;
- (BOOL)detachKeyboard:(id)a0;

@end
