@class WBSDispatchSourceTimer;

@interface PrivateBrowsingController : NSObject {
    char _shouldBeLockedIfPossible;
    char _privateBrowsingRequiresAuthentication;
    char _isPasscodeAuthenticationAvailable;
    WBSDispatchSourceTimer *_backgroundLockTimer;
    id _keybagLockStatusChangeObserver;
}

@property (class, readonly, nonatomic) PrivateBrowsingController *sharedController;

@property (readonly, nonatomic, getter=isEnabledInAnyWindow) char enabledInAnyWindow;
@property (readonly, nonatomic, getter=isLocked) char locked;
@property (nonatomic) char privateBrowsingRequiresAuthentication;
@property (readonly, nonatomic) char canRequireAuthenticationForPrivateBrowsing;

- (id)init;
- (void).cxx_destruct;
- (void)lock;
- (void)unlock;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_lockAutomaticallyIfNeeded;
- (char)_shouldLock;
- (void)_touchIDAvailabilityMayHaveChanged;
- (char)_updateLockedState;
- (void)_updatePrivateBrowsingRequiresAuthentication;
- (void)updateBackgroundLockTimer;

@end
