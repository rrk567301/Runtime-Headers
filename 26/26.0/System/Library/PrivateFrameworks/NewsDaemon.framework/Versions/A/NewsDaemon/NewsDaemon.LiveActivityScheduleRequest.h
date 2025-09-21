@interface NewsDaemon.LiveActivityScheduleRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ liveActivityID;
    void /* unknown type, empty encoding */ options;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
