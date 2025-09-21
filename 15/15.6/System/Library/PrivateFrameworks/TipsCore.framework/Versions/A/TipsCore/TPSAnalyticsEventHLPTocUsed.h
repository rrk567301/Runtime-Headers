@interface TPSAnalyticsEventHLPTocUsed : TPSAnalyticsEvent

+ (char)supportsSecureCoding;
+ (id)event;

- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;

@end
