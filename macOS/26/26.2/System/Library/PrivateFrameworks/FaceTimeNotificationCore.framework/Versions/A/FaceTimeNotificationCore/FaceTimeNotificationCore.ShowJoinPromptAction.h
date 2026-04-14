@interface FaceTimeNotificationCore.ShowJoinPromptAction : FaceTimeNotificationCore.UpstreamAction {
    void /* unknown type, empty encoding */ joinRequest;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
