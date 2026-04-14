@class NSString;

@interface IMAMSMetricsEvent : AMSMetricsEvent

@property (retain, nonatomic) NSString *pageType;

- (id)eventType;
- (id)init;
- (void)setEventType:(id)a0;

@end
