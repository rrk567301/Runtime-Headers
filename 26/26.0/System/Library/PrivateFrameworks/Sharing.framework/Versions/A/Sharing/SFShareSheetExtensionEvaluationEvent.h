@class NSString, NSDictionary;

@interface SFShareSheetExtensionEvaluationEvent : NSObject <SFCoreAnalyticsEvent>

@property (class, readonly, copy, nonatomic) NSString *eventName;

@property (copy, nonatomic) NSString *activityType;
@property (copy, nonatomic) NSString *cacheKey;
@property (nonatomic) unsigned long long evaluationMs;
@property (readonly, copy, nonatomic) NSDictionary *eventPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)submitEvent;

@end
