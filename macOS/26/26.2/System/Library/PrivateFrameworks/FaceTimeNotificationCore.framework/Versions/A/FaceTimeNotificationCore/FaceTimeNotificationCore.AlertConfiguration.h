@interface FaceTimeNotificationCore.AlertConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ showDummyUIKitView;
    void /* unknown type, empty encoding */ isAudio;
    void /* unknown type, empty encoding */ ignoresDND;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;

@end
