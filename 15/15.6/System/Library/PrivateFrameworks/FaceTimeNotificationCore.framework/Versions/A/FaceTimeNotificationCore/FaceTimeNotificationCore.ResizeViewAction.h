@interface FaceTimeNotificationCore.ResizeViewAction : FaceTimeNotificationCore.DownstreamAction {
    void /* unknown type, empty encoding */ size;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
