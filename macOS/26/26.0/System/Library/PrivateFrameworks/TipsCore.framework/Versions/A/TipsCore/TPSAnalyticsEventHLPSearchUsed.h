@interface TPSAnalyticsEventHLPSearchUsed : TPSAnalyticsEvent

+ (BOOL)supportsSecureCoding;
+ (id)event;

- (id)mutableAnalyticsEventRepresentation;
- (id)eventName;

@end
