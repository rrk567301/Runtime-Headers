@class NSLock, NSXPCConnection;

@interface SKServiceBroker : NSObject {
    NSLock *_serviceConnectionLock;
    NSXPCConnection *_serviceConnection;
}

+ (id)defaultBroker;
+ (id)_serviceConnectionWithName:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)_serviceConnection;
- (void)_serviceConnectionInvalidated;
- (id)storeKitServiceWithErrorHandler:(id /* block */)a0;
- (id)messageServiceWithErrorHandler:(id /* block */)a0;
- (id)productServiceWithErrorHandler:(id /* block */)a0;
- (id)externalGatewayServiceWithErrorHandler:(id /* block */)a0;
- (id)inAppEngagementServiceWithErrorHandler:(id /* block */)a0;
- (id)offerEligibilityServiceWithErrorHandler:(id /* block */)a0;
- (id)policyServiceWithErrorHandler:(id /* block */)a0;
- (id)productLookupServiceWithErrorHandler:(id /* block */)a0;
- (id)storeKitSynchronousServiceWithErrorHandler:(id /* block */)a0;

@end
