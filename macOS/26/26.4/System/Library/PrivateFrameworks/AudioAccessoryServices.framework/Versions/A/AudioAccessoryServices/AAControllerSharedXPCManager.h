@class NSObject, NSMutableSet, NSMutableArray;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface AAControllerSharedXPCManager : NSObject {
    NSObject<OS_xpc_object> *_sharedXPCConnection;
    BOOL _connectionEstablished;
    NSMutableArray *_pendingActivations;
}

@property (retain, nonatomic) NSMutableSet *registeredControllers;
@property (retain, nonatomic) NSMutableArray *pendingMessages;
@property (nonatomic) BOOL invalidateCalled;
@property (nonatomic) BOOL connectionActive;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *managerQueue;

+ (id)sharedManager;

- (void)_handleConnectionInterruption;
- (void)unregisterController:(id)a0;
- (void)_handleConnectionInvalidation;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_invalidateConnection;
- (id)init;
- (void)dealloc;
- (void)_handleXPCEvent:(id)a0;
- (void)_activateSharedConnection;
- (void)_distributeXPCMessage:(id)a0;
- (void)_ensureSharedConnectionWithCompletion:(id /* block */)a0;
- (void)_handleActivationReply:(id)a0;
- (void)_processPendingMessages;
- (void)_sendMessage:(id)a0 controller:(id)a1 queue:(id)a2 replyHandler:(id /* block */)a3;
- (void)registerController:(id)a0 completion:(id /* block */)a1;
- (void)sendMessage:(id)a0 controller:(id)a1 queue:(id)a2 replyHandler:(id /* block */)a3;

@end
