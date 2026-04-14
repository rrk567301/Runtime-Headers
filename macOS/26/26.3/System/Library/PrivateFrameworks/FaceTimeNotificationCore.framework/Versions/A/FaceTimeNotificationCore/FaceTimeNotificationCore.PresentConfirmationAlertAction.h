@interface FaceTimeNotificationCore.PresentConfirmationAlertAction : FaceTimeNotificationCore.DownstreamAction {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ conflictingCallId;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
