@interface POKeyBag : NSObject {
    int _notifyToken;
}

@property (copy) id /* block */ unlockCompletion;
@property (copy) id /* block */ startupCompletion;
@property char firstUnlock;
@property (copy) id /* block */ lockHandler;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)isUserKeybagUnlocked;
- (void)startObservingKeyBagLockStatusChanges;
- (void)waitForKeyBagFirstUnlockOnStartupWithCompletion:(id /* block */)a0;
- (void)waitForKeyBagUnlockWithCompletion:(id /* block */)a0;
- (void)stopObservingKeyBagLockStatusChanges;

@end
