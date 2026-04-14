@interface FaceTimeNotificationCore.NoticeButtonClickAction : FaceTimeNotificationCore.DownstreamAction {
    void /* unknown type, empty encoding */ noticeIdentifier;
    void /* unknown type, empty encoding */ buttonIdentifier;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
