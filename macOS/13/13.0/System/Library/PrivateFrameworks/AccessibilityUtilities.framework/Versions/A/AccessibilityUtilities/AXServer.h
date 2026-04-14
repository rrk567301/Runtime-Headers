@class NSString, AXIPCServer, AXDispatchTimer, AXIPCClient, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AXServer : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientLock;
}

@property (copy, nonatomic) NSString *serverIdentifier;
@property (retain, nonatomic) NSMutableArray *assertionWorkBacklog;
@property (retain, nonatomic) AXDispatchTimer *assertionRetryTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assertionWorkQueue;
@property (retain, nonatomic) AXIPCClient *client;
@property (retain, nonatomic) AXIPCServer *server;
@property (nonatomic) BOOL shouldRegisterClientCallbackSourceOnMainRunloop;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)sendMessage:(id)a0;
- (id)_serviceName;
- (BOOL)_connectIfNecessary;
- (void)_didConnectToClient;
- (void)_wasDisconnectedFromClient;
- (void)_willClearServer;
- (void)sendSimpleMessage:(id)a0;
- (BOOL)sendSimpleMessage:(id)a0 enqueueError:(id *)a1;
- (BOOL)sendSimpleMessageWithResult:(id)a0;
- (id)sendSimpleMessageWithObjectResult:(id)a0;
- (id)_sendMessage:(id)a0 error:(id *)a1;
- (void)sendAsynchronousMessage:(id)a0 replyOnQueue:(id)a1 boolResultHandler:(id /* block */)a2;
- (void)sendAsynchronousMessage:(id)a0 replyOnQueue:(id)a1 objectResultHandler:(id /* block */)a2;
- (void)sendAsynchronousMessage:(id)a0 replyOnQueue:(id)a1 handler:(id /* block */)a2;
- (void)_processAssertionBacklog;
- (void)_initializeAssertionBookkeeping;
- (void)acquireAssertionWithType:(id)a0 identifier:(id)a1;
- (void)relinquishAssertionWithType:(id)a0 identifier:(id)a1;
- (void)_didConnectToServer;
- (BOOL)_connectServerIfNecessary;
- (void)_ensureAssertionsHaveBeenProcessedWithCompletion:(id /* block */)a0;

@end
