@class NSUUID;

@interface _TtCC13HomeKitDaemon14ActionSetState19SubscriptionManager : HMFObject <HMDActionSetStateSubscriptionManager> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ monitoredActionSets;
}

- (id)init;
- (void).cxx_destruct;
- (void)actionSetStateDidChange:(id)a0 state:(char)a1;
- (char)isActionSetOn:(id)a0;
- (char)isMonitoringActionSet:(id)a0;
- (void)startMonitoringActionSetUUID:(id)a0 observer:(id)a1;
- (void)stopAllMonitoringForActionSetUUID:(NSUUID *)a0 completion:(void (^)(void))a1;
- (void)stopMonitoringActionSetUUID:(id)a0 observer:(id)a1;

@end
