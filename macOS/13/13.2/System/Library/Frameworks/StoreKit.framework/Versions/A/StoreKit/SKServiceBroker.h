@class NSLock, NSXPCConnection;

@interface SKServiceBroker : NSObject {
    NSLock *_serviceConnectionLock;
    NSXPCConnection *_serviceConnection;
}

+ (id)defaultBroker;
+ (id)_storeKitServiceInterface;
+ (id)_storeKitClientInterface;
+ (id)_serviceConnectionWithName:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_serviceConnection;
- (id)storeKitServiceWithErrorHandler:(id /* block */)a0;
- (void)_serviceConnectionInvalidated;
- (id)storeKitService;
- (id)storeKitSynchronousServiceWithErrorHandler:(id /* block */)a0;
- (id)storeKitSynchronousService;

@end
