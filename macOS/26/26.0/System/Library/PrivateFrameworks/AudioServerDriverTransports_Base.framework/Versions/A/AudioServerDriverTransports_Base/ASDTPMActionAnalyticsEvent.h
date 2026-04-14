@class NSString;

@interface ASDTPMActionAnalyticsEvent : ASDTPMAction

@property (retain, nonatomic) NSString *eventName;

- (int)action;
- (id)eventData;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0 forSequencer:(id)a1;
- (void)sendEventNamed:(id)a0 withData:(id)a1;

@end
