@interface PasswordManagerUI.PMSecureWindowLockPolicyEnforcer : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ _isLocked;
    void /* unknown type, empty encoding */ initialLockStateRequestCompletionHandler;
    void /* unknown type, empty encoding */ _didCompleteInitialLockStateRequest;
    void /* unknown type, empty encoding */ lockImmediatelyOnWindowClosed;
    void /* unknown type, empty encoding */ activeLockableViewIDs;
    void /* unknown type, empty encoding */ keyWindows;
    void /* unknown type, empty encoding */ keyBagObserverCancellable;
    void /* unknown type, empty encoding */ lockTimerCancellable;
    void /* unknown type, empty encoding */ lockOverridingTaskIDs;
    void /* unknown type, empty encoding */ sharedLockState;
    void /* unknown type, empty encoding */ didRequestLockStateDueToTimer;
}

- (void)windowDidBecomeKey:(id)a0;
- (void)windowDidResignKey:(id)a0;

@end
