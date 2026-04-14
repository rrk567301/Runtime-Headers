@interface CSScreenLockMonitor : CSEventMonitor {
    BOOL _isScreenLocked;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (BOOL)isScreenLocked;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)screenLockStateChanged;
- (BOOL)_queryIsScreenLocked;
- (void)_notifyObserver:(id)a0 isScreenLocked:(BOOL)a1;

@end
