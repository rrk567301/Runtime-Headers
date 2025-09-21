@class RPEndpoint, NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface RPRemoteXPCConnection : NSObject {
    char _invalidateCalled;
    char _invalidateDone;
    NSXPCConnection *_xpcConnection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) RPEndpoint *endpoint;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_activateWithCompletion:(id /* block */)a0;

@end
