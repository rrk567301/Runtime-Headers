@interface CTXPCSetBusinessMessagingStateRequest : CTXPCSubscriptionContextRequest

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 shouldEnable:(BOOL)a1;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)shouldEnable;

@end
