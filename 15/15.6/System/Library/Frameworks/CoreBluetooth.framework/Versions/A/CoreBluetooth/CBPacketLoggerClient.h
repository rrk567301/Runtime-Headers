@class NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CBPacketLoggerClient : NSObject <CBActivatable, CBErrorReporting, CBInterruptable> {
    char _activateCalled;
    char _invalidateCalled;
    char _invalidateDone;
    NSObject<OS_xpc_object> *_xpcCnx;
}

@property (copy, nonatomic) id /* block */ rawPacketHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (copy, nonatomic) id /* block */ interruptionHandler;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_activateWithCompletion:(id /* block */)a0;
- (id)_ensureXPCStarted;
- (void)_interrupted;
- (void)_activateXPC:(char)a0 completion:(id /* block */)a1;
- (void)_xpcReceivedEvent:(id)a0;
- (void)_xpcReceivedPacket:(id)a0;

@end
