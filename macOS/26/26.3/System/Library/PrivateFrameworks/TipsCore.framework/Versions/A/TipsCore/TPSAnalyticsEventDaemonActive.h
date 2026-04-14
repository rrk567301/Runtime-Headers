@class NSString;

@interface TPSAnalyticsEventDaemonActive : TPSAnalyticsEvent {
    BOOL _alreadyRunning;
}

@property (retain, nonatomic) NSString *reason;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithReason:(id)a0 alreadyRunning:(BOOL)a1;

- (id)_initWithReason:(id)a0 alreadyRunning:(BOOL)a1;
- (id)mutableAnalyticsEventRepresentation;
- (id)eventName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
