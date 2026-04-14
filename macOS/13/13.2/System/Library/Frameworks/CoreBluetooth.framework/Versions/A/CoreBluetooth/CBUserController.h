@class NSObject, NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface CBUserController : NSObject {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_invalidated;
- (void)_interrupted;
- (BOOL)_ensureXPCStarted;
- (void)appleAudioAccessoryLimitedLoggingWithCompletion:(id /* block */)a0;
- (void)setAppleAudioAccessoryLimitedLogging:(BOOL)a0 completion:(id /* block */)a1;
- (void)getDistributedLoggingStatusWithCompletion:(id /* block */)a0;
- (void)setDistributedLoggingStatus:(unsigned int)a0 completion:(id /* block */)a1;
- (void)getCurrentUserGivenNameWithCompletion:(id /* block */)a0;

@end
