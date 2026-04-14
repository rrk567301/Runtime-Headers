@interface FaceTimeNotificationCore.ResizeViewAction : FaceTimeNotificationCore.DownstreamAction {
    void /* unknown type, empty encoding */ size;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
