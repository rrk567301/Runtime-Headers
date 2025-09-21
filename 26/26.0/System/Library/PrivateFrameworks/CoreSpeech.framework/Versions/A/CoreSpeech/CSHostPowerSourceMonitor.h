@interface CSHostPowerSourceMonitor : CSEventMonitor {
    struct __CFRunLoopSource { } *_powerRunLoopSource;
}

+ (id)sharedInstance;

- (id)init;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (void)_handleChangeInPowerSource;
- (void)_didReceiveHostSystemStateChangeNotification:(long long)a0;
- (long long)_getHostPowerSource;
- (void)_notifyObserver:(id)a0 withHostPowerSource:(long long)a1;
- (long long)currentPowerSource;

@end
