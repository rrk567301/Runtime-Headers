@interface CTXPCSelectNetworkRequest : CTXPCSubscriptionContextPrivateRequest

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (id)initWithContext:(id)a0 network:(id)a1;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
