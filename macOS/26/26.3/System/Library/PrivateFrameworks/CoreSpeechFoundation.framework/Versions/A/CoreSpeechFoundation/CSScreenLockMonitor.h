@interface CSScreenLockMonitor : CSEventMonitor {
    BOOL _isScreenLocked;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (BOOL)isScreenLocked;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;
- (void)screenLockStateChanged;
- (void)dealloc;
- (BOOL)_queryIsScreenLocked;
- (void)_notifyObserver:(id)a0 isScreenLocked:(BOOL)a1;

@end
