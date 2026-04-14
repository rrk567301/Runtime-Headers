@interface CSFirstUnlockMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _firstUnlocked;
}

+ (id)sharedInstance;

- (void)_didReceiveFirstUnlock:(BOOL)a0;
- (void)_didReceiveFirstUnlockInQueue:(BOOL)a0;
- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)_checkFirstUnlocked;
- (void)_firstUnlockNotified;
- (BOOL)isFirstUnlocked;
- (void)_stopMonitoring;
- (void)_notifyObserver:(id)a0 withUnlocked:(BOOL)a1;

@end
