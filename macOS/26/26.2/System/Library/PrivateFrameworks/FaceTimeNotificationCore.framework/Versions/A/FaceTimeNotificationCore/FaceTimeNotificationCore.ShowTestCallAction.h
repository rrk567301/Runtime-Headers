@interface FaceTimeNotificationCore.ShowTestCallAction : FaceTimeNotificationCore.UpstreamAction {
    void /* unknown type, empty encoding */ isAudio;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;

@end
