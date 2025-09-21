@protocol AXLTLockScreenObserverDelegate;

@interface AXLTLockScreenObserver : NSObject {
    int _notifyLockStateToken;
    char _isScreenLocked;
}

@property (weak, nonatomic) id<AXLTLockScreenObserverDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)_registerScreenNotification;
- (void)_updateScreenLock:(int)a0;

@end
