@class HMDAnalyticsUpdateEventTriggerData;

@interface HomeKitEventTriggerUpdateLogEvent : HMMLogEvent

@property (readonly, nonatomic) HMDAnalyticsUpdateEventTriggerData *analyticsData;

- (void).cxx_destruct;
- (id)init;

@end
