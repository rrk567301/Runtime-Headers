@interface CSFirstUnlockMonitor : CSEventMonitor {
    int _notifyToken;
    char _firstUnlocked;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (char)isFirstUnlocked;
- (void)_startMonitoringWithQueue:(id)a0;
- (char)_checkFirstUnlocked;
- (void)_didReceiveFirstUnlock:(char)a0;
- (void)_didReceiveFirstUnlockInQueue:(char)a0;
- (void)_firstUnlockNotified;
- (void)_notifyObserver:(id)a0 withUnlocked:(char)a1;

@end
