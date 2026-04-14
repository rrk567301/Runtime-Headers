@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface GKApplicationStateMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSMutableSet *interestedBundleIDs;
@property (copy, nonatomic) id /* block */ handler;

- (void)dealloc;
- (id)init;
- (id)_userInfoForApp:(id)a0 state:(unsigned int)a1;
- (void)didReceiveDidActivateApplicationNotification:(id)a0;
- (void)didReceiveDidDeactivateApplicationNotification:(id)a0;
- (void)didReceiveDidLaunchApplicationNotification:(id)a0;
- (void)didReceiveDidTerminateApplicationNotification:(id)a0;
- (void)handleStateChangeForRunningApplication:(id)a0 state:(unsigned int)a1;
- (BOOL)startObservingStateChangesForBundleID:(id)a0;
- (void)stopObservingStateChangesForBundleID:(id)a0;

@end
