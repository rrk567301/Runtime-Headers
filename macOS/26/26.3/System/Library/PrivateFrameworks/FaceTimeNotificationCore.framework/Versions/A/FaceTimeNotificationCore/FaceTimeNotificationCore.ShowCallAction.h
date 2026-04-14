@interface FaceTimeNotificationCore.ShowCallAction : FaceTimeNotificationCore.UpstreamAction {
    void /* unknown type, empty encoding */ call;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
