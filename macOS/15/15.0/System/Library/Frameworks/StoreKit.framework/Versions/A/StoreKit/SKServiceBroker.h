@class NSLock, NSXPCConnection;

@interface SKServiceBroker : NSObject {
    NSLock *_serviceConnectionLock;
    NSXPCConnection *_serviceConnection;
}

+ (id)_storeKitClientInterface;
+ (id)_storeKitServiceInterface;
+ (id)defaultBroker;
+ (id)_serviceConnectionWithName:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_serviceConnection;
- (void)_serviceConnectionInvalidated;
- (id)storeKitServiceWithErrorHandler:(id /* block */)a0;
- (id)messageServiceWithErrorHandler:(id /* block */)a0;
- (id)productServiceWithErrorHandler:(id /* block */)a0;
- (id)externalGatewayServiceWithErrorHandler:(id /* block */)a0;
- (id)inAppBindingServiceWithErrorHandler:(id /* block */)a0;
- (id)inAppEngagementServiceWithErrorHandler:(id /* block */)a0;
- (id)overrideServiceWithErrorHandler:(id /* block */)a0;
- (id)overrideSynchronousServiceWithErrorHandler:(id /* block */)a0;
- (id)policyServiceWithErrorHandler:(id /* block */)a0;
- (id)productLookupServiceWithErrorHandler:(id /* block */)a0;
- (id)purchaseIntentServiceWithErrorHandler:(id /* block */)a0;
- (id)storeKitSynchronousServiceWithErrorHandler:(id /* block */)a0;
- (id)storefrontServiceWithErrorHandler:(id /* block */)a0;

@end
