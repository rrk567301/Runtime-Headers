@interface TPSAnalyticsEventAppDeleted : TPSAnalyticsEvent

+ (BOOL)supportsSecureCoding;
+ (id)event;

- (id)mutableAnalyticsEventRepresentation;
- (id)eventName;
- (id)appLaunches;
- (id)desiredOutcomeTotal;
- (id)notificationsPosted;
- (double)timeSinceLastNotification;
- (id)tipViewTotal;

@end
