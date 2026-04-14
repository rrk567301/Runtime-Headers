@interface CSFirstUnlockMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _firstUnlocked;
}

+ (id)sharedInstance;

- (BOOL)isFirstUnlocked;
- (void)_notifyObserver:(id)a0 withUnlocked:(BOOL)a1;
- (BOOL)_checkFirstUnlocked;
- (void)_firstUnlockNotified;
- (void)_didReceiveFirstUnlockInQueue:(BOOL)a0;
- (void)_didReceiveFirstUnlock:(BOOL)a0;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;

@end
