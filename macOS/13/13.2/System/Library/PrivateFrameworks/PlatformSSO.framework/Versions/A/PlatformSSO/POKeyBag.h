@interface POKeyBag : NSObject {
    int _notifyToken;
}

@property (copy) id /* block */ unlockCompletion;
@property (copy) id /* block */ startupCompletion;
@property BOOL firstUnlock;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isUserKeybagUnlocked;
- (void)waitForKeyBagFirstUnlockWithCompletion:(id /* block */)a0;
- (void)waitForKeyBagFirstUnlockOnStartupWithCompletion:(id /* block */)a0;
- (void)startObservingKeyBagLockStatusChanges;
- (void)stopObservingKeyBagLockStatusChanges;

@end
