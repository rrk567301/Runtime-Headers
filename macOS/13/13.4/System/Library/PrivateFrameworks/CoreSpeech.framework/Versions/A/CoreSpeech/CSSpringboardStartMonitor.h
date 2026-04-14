@interface CSSpringboardStartMonitor : CSEventMonitor {
    int _notifyToken;
    BOOL _isSpringBoardStarted;
}

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (BOOL)_checkSpringBoardStarted;
- (void)_didReceiveSpringboardStarted:(BOOL)a0;
- (void)_didReceiveSpringboardStartedInQueue:(BOOL)a0;
- (void)_notifyObserver:(id)a0 withStarted:(BOOL)a1;
- (void)_startMonitoringWithQueue:(id)a0;
- (BOOL)isSpringboardStarted;

@end
