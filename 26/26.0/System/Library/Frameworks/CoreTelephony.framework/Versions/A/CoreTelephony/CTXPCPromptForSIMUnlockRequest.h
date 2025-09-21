@interface CTXPCPromptForSIMUnlockRequest : CTXPCSubscriptionContextRequest

- (id)ct_shortName;
- (int)requiredEntitlement;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
