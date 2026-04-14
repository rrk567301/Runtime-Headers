@interface FaceTimeNotificationCore.OpenMessagesAction : FaceTimeNotificationCore.DownstreamAction {
    void /* unknown type, empty encoding */ declineCall;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
