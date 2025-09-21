@class RPEndpoint, NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface RPRemoteXPCConnection : NSObject {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcConnection;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) RPEndpoint *endpoint;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection;

- (void)_activateWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_invalidated;
- (void)_invalidate;
- (id)init;
- (void).cxx_destruct;

@end
