@class NSString;

@interface SiriPrivateLearningAnalytics.PluginSchedulerTimestamp : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ scheduler;
    void /* unknown type, empty encoding */ timestamp;
}

@property (class, nonatomic) char supportsSecureCoding;

@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
