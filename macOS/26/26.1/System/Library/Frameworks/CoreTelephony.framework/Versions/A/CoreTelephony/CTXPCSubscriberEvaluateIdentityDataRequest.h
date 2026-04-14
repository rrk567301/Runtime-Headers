@class NSData;

@interface CTXPCSubscriberEvaluateIdentityDataRequest : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) NSData *identity;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 identityData:(id)a1;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
