@class NSString;

@interface LAAnalytics : NSObject

@property (readonly, nonatomic) NSString *eventName;

- (void).cxx_destruct;
- (id)initWithEventName:(id)a0;
- (void)send;
- (BOOL)_shouldSendAnalytics;
- (id)buildPayload;

@end
