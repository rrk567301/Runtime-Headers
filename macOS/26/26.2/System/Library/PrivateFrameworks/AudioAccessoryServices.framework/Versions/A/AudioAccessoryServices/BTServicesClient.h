@class NSObject, NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface BTServicesClient : NSObject {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (void)invalidate;
- (void)_interrupted;
- (void)_invalidated;
- (id)_ensureXPCStarted;
- (void)diagnosticShow:(id)a0 completion:(id /* block */)a1;
- (void)diagnosticControl:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isSystemContext;
- (void)showHIDConnectedBannerAperture:(id)a0 completion:(id /* block */)a1;

@end
