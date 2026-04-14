@interface FaceTimeNotificationCore.PresentConfirmationAlertAction : FaceTimeNotificationCore.DownstreamAction {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ conflictingCallId;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
