@interface POKeyBag : NSObject {
    int _notifyToken;
}

@property (copy) id /* block */ unlockCompletion;
@property (copy) id /* block */ startupCompletion;
@property BOOL firstUnlock;
@property (copy) id /* block */ lockHandler;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)isUserKeybagUnlocked;
- (void)startObservingKeyBagLockStatusChanges;
- (void)waitForKeyBagFirstUnlockOnStartupWithCompletion:(id /* block */)a0;
- (void)waitForKeyBagUnlockWithCompletion:(id /* block */)a0;
- (void)stopObservingKeyBagLockStatusChanges;

@end
