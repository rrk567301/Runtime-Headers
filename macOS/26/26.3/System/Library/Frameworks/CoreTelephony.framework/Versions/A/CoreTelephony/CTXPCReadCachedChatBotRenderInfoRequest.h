@class CTLazuliDestination;

@interface CTXPCReadCachedChatBotRenderInfoRequest : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) CTLazuliDestination *destination;

+ (id)allowedClassesForArguments;

- (int)requiredEntitlement;
- (id)ct_shortName;
- (id)initWithContext:(id)a0 destination:(id)a1;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
