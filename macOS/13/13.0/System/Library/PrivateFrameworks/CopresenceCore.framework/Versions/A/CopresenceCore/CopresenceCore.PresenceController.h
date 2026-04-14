@interface CopresenceCore.PresenceController : NSObject <SKPresenceDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ activityID;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ presence;
    void /* unknown type, empty encoding */ isPresent;
    void /* unknown type, empty encoding */ members;
}

- (void)presentDevicesChangedForPresence:(id)a0;
- (void)invitedHandlesChangedForPresence:(id)a0;
- (void)presenceDaemonDisconnected:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
