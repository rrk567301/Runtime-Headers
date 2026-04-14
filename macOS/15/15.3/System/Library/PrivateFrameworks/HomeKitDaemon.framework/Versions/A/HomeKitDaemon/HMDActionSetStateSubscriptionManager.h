@class NSArray, NSUUID;

@interface HMDActionSetStateSubscriptionManager : HMFObject {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ monitoredActionSets;
}

@property (nonatomic, readonly) NSArray *allMonitoredActionSets;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)actionSetStateDidChange:(id)a0 state:(BOOL)a1;
- (BOOL)isActionSetOn:(id)a0;
- (BOOL)isMonitoringActionSet:(id)a0;
- (void)startMonitoringActionSetUUID:(id)a0 observer:(id)a1;
- (void)stopAllMonitoringForActionSetUUID:(NSUUID *)a0 completion:(void (^)(void))a1;
- (void)stopMonitoringActionSetUUID:(id)a0 observer:(id)a1;

@end
