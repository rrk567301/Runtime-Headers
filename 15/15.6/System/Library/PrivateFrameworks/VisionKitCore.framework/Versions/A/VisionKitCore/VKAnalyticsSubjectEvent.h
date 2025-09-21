@interface VKAnalyticsSubjectEvent : VKAnalyticsEvent

@property (nonatomic) long long eventType;
@property (nonatomic) long long interactionType;
@property (nonatomic) char subjectFound;
@property (nonatomic) double processingDuration;

- (id)description;
- (long long)type;
- (id)eventKey;
- (id)coreAnalyticsDictionary;
- (char)cleansesBundleID;
- (id)initWithEventType:(long long)a0 interactionType:(long long)a1 subjectFound:(char)a2 processingDuration:(double)a3 customIdentifier:(id)a4;

@end
