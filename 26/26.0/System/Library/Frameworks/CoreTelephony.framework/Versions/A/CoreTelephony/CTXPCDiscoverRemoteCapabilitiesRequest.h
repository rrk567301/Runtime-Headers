@class CTLazuliOperationID, CTLazuliDestination;

@interface CTXPCDiscoverRemoteCapabilitiesRequest : CTXPCSubscriptionContextRequest

@property (readonly, nonatomic) CTLazuliDestination *destination;
@property (readonly, nonatomic) CTLazuliOperationID *operationID;

+ (id)allowedClassesForArguments;

- (id)ct_shortName;
- (int)requiredEntitlement;
- (id)initWithContext:(id)a0 destination:(id)a1 operationID:(id)a2;
- (void)performRequestWithHandler:(id)a0 completionHandler:(id /* block */)a1;

@end
