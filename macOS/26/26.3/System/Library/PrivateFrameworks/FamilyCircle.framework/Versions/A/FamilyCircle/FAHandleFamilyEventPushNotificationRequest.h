@class NSDictionary;

@interface FAHandleFamilyEventPushNotificationRequest : FAFamilyCircleRequest

@property (readonly) NSDictionary *payload;

- (void).cxx_destruct;
- (void)startRequestWithCompletionHandler:(id /* block */)a0;
- (id)initWithPayload:(id)a0;

@end
