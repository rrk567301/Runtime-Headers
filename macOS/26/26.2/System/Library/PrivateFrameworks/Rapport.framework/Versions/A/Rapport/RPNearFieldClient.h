@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface RPNearFieldClient : NSObject <RPNearFieldXPCClientInterfaceOld> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
}

@property (readonly, nonatomic) NSXPCConnection *xpcCnx;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ tapEventHandler;
@property (copy, nonatomic) id /* block */ failedDiscovery;
@property (copy, nonatomic) id /* block */ connectionEstablishedHandler;

- (void)invalidate;
- (void)_interrupted;
- (void)_invalidated;
- (id)_ensureXPCStarted;
- (id)_XPCConnectionWithMachServiceName:(id)a0 options:(unsigned long long)a1;
- (void)didConnect;
- (void).cxx_destruct;
- (id)init;
- (void)failDiscoveryWithError:(id)a0;
- (void)receivedAlwaysOnEventWithSuggestedRole:(unsigned int)a0;
- (void)receivedTapEvent:(id)a0;
- (void)stopWithCompletion:(id /* block */)a0;

@end
