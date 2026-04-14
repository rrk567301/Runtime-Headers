@interface FaceTimeNotificationCore.ConfirmationAlertResponseAction : FaceTimeNotificationCore.UpstreamAction {
    void /* unknown type, empty encoding */ response;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
