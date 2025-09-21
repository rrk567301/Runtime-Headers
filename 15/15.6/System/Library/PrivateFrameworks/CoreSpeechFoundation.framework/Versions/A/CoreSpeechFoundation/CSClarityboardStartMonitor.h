@class NSString;

@interface CSClarityboardStartMonitor : CSEventMonitor <CSSystemShellStartProviding> {
    int _notifyToken;
    char _isClarityBoardStarted;
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
- (void)_didReceiveClarityboardStarted:(char)a0;
- (char)_checkClarityBoardStarted;
- (void)_didReceiveClarityboardStartedInQueue:(char)a0;
- (void)_notifyObserver:(id)a0 withStarted:(char)a1;
- (char)isClarityBoardStarted;

@end
