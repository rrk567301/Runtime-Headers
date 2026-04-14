@class NSString;

@interface TPSAnalyticsEventDaemonActive : TPSAnalyticsEvent {
    BOOL _alreadyRunning;
}

@property (retain, nonatomic) NSString *reason;

+ (id)eventWithReason:(id)a0 alreadyRunning:(BOOL)a1;
+ (BOOL)supportsSecureCoding;

- (id)eventName;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initWithReason:(id)a0 alreadyRunning:(BOOL)a1;
- (id)mutableAnalyticsEventRepresentation;

@end
