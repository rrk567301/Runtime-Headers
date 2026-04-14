@class NSString;

@interface IMAMSMetricsEvent : AMSMetricsEvent

@property (retain, nonatomic) NSString *pageType;

- (id)eventType;
- (void)setEventType:(id)a0;
- (id)init;

@end
