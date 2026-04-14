@interface RemindersUICore.TTRAutoCategorizationActivityMonitor : NSObject <REMXPCDaemonControllerAutoCategorizationActivityObserver> {
    void /* unknown type, empty encoding */ currentActivity;
    void /* unknown type, empty encoding */ backgroundQueue;
    void /* unknown type, empty encoding */ isMonitoring;
    void /* unknown type, empty encoding */ daemonDidLaunchToken;
    void /* unknown type, empty encoding */ currentActivitySubject;
}

- (id)init;
- (void).cxx_destruct;
- (void)autoCategorizationActivityDidChange:(id)a0;

@end
