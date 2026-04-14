@interface FaceTimeNotificationCore.ShowTestCallAction : FaceTimeNotificationCore.UpstreamAction {
    void /* unknown type, empty encoding */ isAudio;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
