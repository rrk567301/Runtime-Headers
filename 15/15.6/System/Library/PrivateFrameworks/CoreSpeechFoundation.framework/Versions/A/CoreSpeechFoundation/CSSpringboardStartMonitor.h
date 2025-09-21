@class NSString;

@interface CSSpringboardStartMonitor : CSEventMonitor <CSSystemShellStartProviding> {
    int _notifyToken;
    char _isSpringBoardStarted;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (char)isSystemShellStarted;
- (char)_checkSpringBoardStarted;
- (void)_didReceiveSpringboardStarted:(char)a0;
- (void)_didReceiveSpringboardStartedInQueue:(char)a0;
- (void)_notifyObserver:(id)a0 withStarted:(char)a1;
- (char)isSpringboardStarted;

@end
