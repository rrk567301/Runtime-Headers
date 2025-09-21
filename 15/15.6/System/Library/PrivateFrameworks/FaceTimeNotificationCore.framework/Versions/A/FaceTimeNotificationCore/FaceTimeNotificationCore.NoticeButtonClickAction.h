@interface FaceTimeNotificationCore.NoticeButtonClickAction : FaceTimeNotificationCore.DownstreamAction {
    void /* unknown type, empty encoding */ noticeIdentifier;
    void /* unknown type, empty encoding */ buttonIdentifier;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
