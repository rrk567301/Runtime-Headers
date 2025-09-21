@interface FaceTimeNotificationCore.ConfirmationAlertResponseAction : FaceTimeNotificationCore.UpstreamAction {
    void /* unknown type, empty encoding */ response;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
