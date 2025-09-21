@interface CSScreenLockMonitor : CSEventMonitor {
    char _isScreenLocked;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (char)isScreenLocked;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_notifyObserver:(id)a0 isScreenLocked:(char)a1;
- (char)_queryIsScreenLocked;
- (void)screenLockStateChanged;

@end
