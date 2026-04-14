@interface NewsDaemon.LiveActivityScheduleRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ liveActivityID;
    void /* unknown type, empty encoding */ options;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
