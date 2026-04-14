@class NSString;

@interface HMAccessorySettingsMessageDispatcherStartSendingMessageEvent : HMCoreAnalyticsMetricEvent

@property (readonly, copy) NSString *messageName;

- (void).cxx_destruct;
- (id)eventPayload;
- (id)initWithMessageName:(id)a0;

@end
