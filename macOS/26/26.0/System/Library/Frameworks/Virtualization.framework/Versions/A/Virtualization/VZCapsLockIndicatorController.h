@class _VZKeyboard;
@protocol NSObject;

@interface VZCapsLockIndicatorController : NSObject {
    _VZKeyboard *_keyboard;
    BOOL _savedCapsLockState;
    struct IoConnect<IoConnectMethods{&IOConnectCallMethod, &IOConnectCallStructMethod, &IOConnectMapMemory64, &IOConnectSetNotificationPort}> { unsigned int _object; } _hidEventSystemHandle;
    id<NSObject> _activity;
    id<NSObject> _terminationObserver;
    struct CfPtr<__IOHIDEventSystemClient *> { struct __IOHIDEventSystemClient *_object; } _hidEventSystemClient;
}

- (id)init;
- (id).cxx_construct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
