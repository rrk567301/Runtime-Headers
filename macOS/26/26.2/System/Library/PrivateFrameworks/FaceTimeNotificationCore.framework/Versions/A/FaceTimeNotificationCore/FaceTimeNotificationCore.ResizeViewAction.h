@interface FaceTimeNotificationCore.ResizeViewAction : FaceTimeNotificationCore.DownstreamAction {
    void /* unknown type, empty encoding */ size;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;

@end
