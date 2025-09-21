@interface CSScreenLockMonitor : CSEventMonitor {
    BOOL _isScreenLocked;
}

+ (id)sharedInstance;

- (BOOL)isScreenLocked;
- (void)_notifyObserver:(id)a0 isScreenLocked:(BOOL)a1;
- (void)dealloc;
- (void)screenLockStateChanged;
- (id)init;
- (BOOL)_queryIsScreenLocked;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;

@end
