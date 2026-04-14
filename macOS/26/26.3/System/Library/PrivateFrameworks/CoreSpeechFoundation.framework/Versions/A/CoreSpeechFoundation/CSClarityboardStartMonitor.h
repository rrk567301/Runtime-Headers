@class NSString;

@interface CSClarityboardStartMonitor : CSEventMonitor <CSSystemShellStartProviding> {
    int _notifyToken;
    BOOL _isClarityBoardStarted;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (id)init;
- (BOOL)isSystemShellStarted;
- (void)_notifyObserver:(id)a0 withStarted:(BOOL)a1;
- (void)_didReceiveClarityboardStarted:(BOOL)a0;
- (BOOL)_checkClarityBoardStarted;
- (void)_didReceiveClarityboardStartedInQueue:(BOOL)a0;
- (BOOL)isClarityBoardStarted;

@end
