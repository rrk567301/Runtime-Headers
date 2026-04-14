@interface CSFirstUnlockMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _firstUnlocked;
}

+ (id)sharedInstance;

- (void)_notifyObserver:(id)a0 withUnlocked:(BOOL)a1;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)_checkFirstUnlocked;
- (BOOL)isFirstUnlocked;
- (void)_didReceiveFirstUnlockInQueue:(BOOL)a0;
- (void)_firstUnlockNotified;
- (id)init;
- (void)_didReceiveFirstUnlock:(BOOL)a0;

@end
