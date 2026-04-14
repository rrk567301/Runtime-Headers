@interface CSScreenLockMonitor : CSEventMonitor {
    BOOL _isScreenLocked;
}

+ (id)sharedInstance;

- (BOOL)isScreenLocked;
- (BOOL)_queryIsScreenLocked;
- (void)screenLockStateChanged;
- (void)dealloc;
- (void)_notifyObserver:(id)a0 isScreenLocked:(BOOL)a1;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (id)init;

@end
