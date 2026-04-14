@interface FaceTimeNotificationCore.NoticeButtonClickAction : FaceTimeNotificationCore.DownstreamAction {
    void /* unknown type, empty encoding */ noticeIdentifier;
    void /* unknown type, empty encoding */ buttonIdentifier;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
