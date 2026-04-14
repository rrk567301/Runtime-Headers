@protocol AXLTLockScreenObserverDelegate;

@interface AXLTLockScreenObserver : NSObject {
    int _notifyLockStateToken;
    BOOL _isScreenLocked;
}

@property (weak, nonatomic) id<AXLTLockScreenObserverDelegate> delegate;

- (void).cxx_destruct;
- (id)init;
- (void)_registerScreenNotification;
- (void)_updateScreenLock:(int)a0;

@end
