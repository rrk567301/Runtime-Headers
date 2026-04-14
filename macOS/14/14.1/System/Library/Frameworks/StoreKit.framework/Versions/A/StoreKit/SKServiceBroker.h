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
- (id)productServiceWithErrorHandler:(id /* block */)a0;
- (id)inAppBindingServiceWithErrorHandler:(id /* block */)a0;
- (id)manageSubscriptionsServiceWithErrorHandler:(id /* block */)a0;
- (id)policyServiceWithErrorHandler:(id /* block */)a0;
- (id)productLookupServiceWithErrorHandler:(id /* block */)a0;
- (id)storeKitSynchronousServiceWithErrorHandler:(id /* block */)a0;

@end
