@interface TPSAnalyticsEventAppDeleted : TPSAnalyticsEvent

+ (BOOL)supportsSecureCoding;
+ (id)event;

- (id)eventName;
- (id)notificationsPosted;
- (id)mutableAnalyticsEventRepresentation;
- (id)appLaunches;
- (id)tipViewTotal;
- (id)desiredOutcomeTotal;
- (double)timeSinceLastNotification;

@end
