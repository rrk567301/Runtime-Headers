@interface FaceTimeNotificationCore.ShowTestCallAction : FaceTimeNotificationCore.UpstreamAction {
    void /* unknown type, empty encoding */ isAudio;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
