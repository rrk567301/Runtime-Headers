@interface CSScreenLockMonitor : CSEventMonitor {
    BOOL _isScreenLocked;
}

+ (id)sharedInstance;

- (BOOL)isScreenLocked;
- (BOOL)_queryIsScreenLocked;
- (void)_notifyObserver:(id)a0 isScreenLocked:(BOOL)a1;
- (void)screenLockStateChanged;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;
- (void)dealloc;

@end
