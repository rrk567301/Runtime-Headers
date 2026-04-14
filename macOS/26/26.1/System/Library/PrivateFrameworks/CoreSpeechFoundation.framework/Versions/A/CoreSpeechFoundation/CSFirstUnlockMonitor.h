@interface CSFirstUnlockMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _firstUnlocked;
}

+ (id)sharedInstance;

- (void)_firstUnlockNotified;
- (BOOL)isFirstUnlocked;
- (void)_didReceiveFirstUnlockInQueue:(BOOL)a0;
- (BOOL)_checkFirstUnlocked;
- (void)_didReceiveFirstUnlock:(BOOL)a0;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0 withUnlocked:(BOOL)a1;
- (void)_stopMonitoring;
- (id)init;

@end
