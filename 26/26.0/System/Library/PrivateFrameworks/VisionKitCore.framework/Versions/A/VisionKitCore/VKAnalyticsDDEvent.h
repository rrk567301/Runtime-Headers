@interface VKAnalyticsDDEvent : VKAnalyticsEvent

@property (nonatomic) long long eventType;
@property (nonatomic) unsigned long long dataDetectorTypes;

- (id)eventKey;
- (long long)type;
- (id)description;
- (id)coreAnalyticsDictionary;
- (id)initWithElement:(id)a0 eventType:(long long)a1 customIdentifier:(id)a2;

@end
