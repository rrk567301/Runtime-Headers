@interface TPSAnalyticsEventAppDeleted : TPSAnalyticsEvent

@property (nonatomic, getter=isNotificationModelControl) BOOL notificationModelControl;

+ (BOOL)supportsSecureCoding;
+ (id)event;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)eventName;
- (void)setDataProvider:(id)a0;
- (id)notificationsPosted;
- (id)mutableAnalyticsEventRepresentation;
- (id)appLaunches;
- (id)tipViewTotal;
- (id)desiredOutcomeTotal;
- (double)timeSinceLastNotification;

@end
