@interface FaceTimeNotificationCore.LockScreenStatusUpdateAction : FaceTimeNotificationCore.UpstreamAction {
    void /* unknown type, empty encoding */ isScreenOn;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;

@end
