@interface IMDReparentingMonitor : NSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ registrationQueue;
    void /* unknown type, empty encoding */ state;
}

@property (class, nonatomic, readonly) IMDReparentingMonitor *sharedMonitor;

- (void).cxx_destruct;
- (id)init;
- (void)cloudkitStateEnabledReturnedWithNotification:(id)a0;

@end
