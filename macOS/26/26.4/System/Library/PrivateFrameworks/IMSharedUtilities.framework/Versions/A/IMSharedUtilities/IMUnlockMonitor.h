@interface IMUnlockMonitor : NSObject {
    void /* unknown type, empty encoding */ keybagChangeIOKitToken;
    void /* unknown type, empty encoding */ firstKeybagUnlockToken;
    void /* unknown type, empty encoding */ keybagChangeToken;
    void /* unknown type, empty encoding */ sbLockChangeToken;
    void /* unknown type, empty encoding */ initializedBeforeFirstUnlock;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ listeners;
    void /* unknown type, empty encoding */ stringboardLockstateNotifificationKey;
}

+ (id)sharedInstance;

- (void)removeListener:(id)a0;
- (void)addListener:(id)a0;
- (BOOL)isUnderFirstDataProtectionLock;
- (BOOL)isSystemLocked;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasReceivedFirstUnlockNotification;

@end
