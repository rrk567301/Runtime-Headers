@interface CTXPCSetBusinessMessagingStateRequest : CTXPCSubscriptionContextRequest

+ (id)allowedClassesForArguments;

- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 shouldEnable:(char)a1;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;
- (char)shouldEnable;

@end
