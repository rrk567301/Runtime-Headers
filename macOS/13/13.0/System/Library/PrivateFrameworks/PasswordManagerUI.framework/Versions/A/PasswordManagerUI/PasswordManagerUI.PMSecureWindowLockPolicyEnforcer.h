@interface PasswordManagerUI.PMSecureWindowLockPolicyEnforcer : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ _isLocked;
    void /* unknown type, empty encoding */ keyWindows;
    void /* unknown type, empty encoding */ keyBagObserverCancellable;
    void /* unknown type, empty encoding */ lockTimerCancellable;
}

- (void)windowDidBecomeKey:(id)a0;
- (void)windowDidResignKey:(id)a0;

@end
