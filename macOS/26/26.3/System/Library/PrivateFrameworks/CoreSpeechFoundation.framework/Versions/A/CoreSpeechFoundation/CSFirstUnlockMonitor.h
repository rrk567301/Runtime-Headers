@interface CSFirstUnlockMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _firstUnlocked;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;
- (BOOL)isFirstUnlocked;
- (BOOL)_checkFirstUnlocked;
- (void)_didReceiveFirstUnlockInQueue:(BOOL)a0;
- (void)_notifyObserver:(id)a0 withUnlocked:(BOOL)a1;
- (void)_didReceiveFirstUnlock:(BOOL)a0;
- (void)_firstUnlockNotified;

@end
