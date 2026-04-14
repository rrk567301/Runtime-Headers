@interface TVAppServices.PunchoutEvent : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ appAdamId;
    void /* unknown type, empty encoding */ bundleId;
    void /* unknown type, empty encoding */ canonicalId;
    void /* unknown type, empty encoding */ channelId;
    void /* unknown type, empty encoding */ externalContentId;
    void /* unknown type, empty encoding */ failureReason;
    void /* unknown type, empty encoding */ isConsented;
    void /* unknown type, empty encoding */ matchTime;
    void /* unknown type, empty encoding */ resumeTimeInSeconds;
    void /* unknown type, empty encoding */ time;
    void /* unknown type, empty encoding */ ttl;
    void /* unknown type, empty encoding */ url;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
