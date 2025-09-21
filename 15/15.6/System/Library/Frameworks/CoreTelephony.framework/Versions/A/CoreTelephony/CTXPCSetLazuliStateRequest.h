@interface CTXPCSetLazuliStateRequest : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) char shouldEnable;

+ (id)allowedClassesForArguments;

- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 shouldEnable:(char)a1;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
