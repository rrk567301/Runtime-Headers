@class NSString;

@interface SiriPrivateLearningAnalytics.PluginSchedulerTimestamp : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ scheduler;
    void /* unknown type, empty encoding */ timestamp;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
