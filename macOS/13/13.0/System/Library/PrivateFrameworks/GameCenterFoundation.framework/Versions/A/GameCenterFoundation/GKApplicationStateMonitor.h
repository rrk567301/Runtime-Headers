@class NSObject;
@protocol OS_dispatch_queue;

@interface GKApplicationStateMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) id /* block */ handler;

- (void)dealloc;
- (id)init;
- (void)didReceiveDidLaunchApplicationNotification:(id)a0;
- (void)didReceiveDidTerminateApplicationNotification:(id)a0;
- (void)didReceiveDidActivateApplicationNotification:(id)a0;
- (void)didReceiveDidDeactivateApplicationNotification:(id)a0;
- (BOOL)observingStateChangesForBundleID:(id)a0;
- (void)startObservingStateChangesForBundleID:(id)a0;
- (id)_userInfoForApp:(id)a0 state:(unsigned int)a1;
- (void)handleStateChangeForRunningApplication:(id)a0 state:(unsigned int)a1;

@end
