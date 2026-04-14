@interface FaceTimeNotificationCore.ShowDialPromptAction : FaceTimeNotificationCore.UpstreamAction {
    void /* unknown type, empty encoding */ dialRequest;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
