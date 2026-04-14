@interface CSClamshellStateMonitor : CSEventMonitor {
    struct IONotificationPort { } *_notificationPort;
    unsigned int _serviceNotification;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;
- (void)_didReceiveClamshellStateChangeNotification:(BOOL)a0;
- (void)_notifyObserver:(id)a0 withClamshellState:(BOOL)a1;
- (BOOL)isClamshellClosed;

@end
