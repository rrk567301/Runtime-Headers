@class NSString;

@interface TPSAnalyticsEventDaemonActive : TPSAnalyticsEvent {
    char _alreadyRunning;
}

@property (retain, nonatomic) NSString *reason;

+ (char)supportsSecureCoding;
+ (id)eventWithReason:(id)a0 alreadyRunning:(char)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)eventName;
- (id)_initWithReason:(id)a0 alreadyRunning:(char)a1;
- (id)mutableAnalyticsEventRepresentation;

@end
