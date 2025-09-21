@class NSXPCConnection, SUCoreLog, SUCoreConnectClientPolicy, NSObject;
@protocol OS_dispatch_queue;

@interface SUCoreConnectClient : NSObject <SUCoreConnectClientProtocol>

@property (retain, nonatomic) NSXPCConnection *serverConnection;
@property (readonly, retain, nonatomic) SUCoreConnectClientPolicy *policy;
@property (readonly, retain, nonatomic) SUCoreLog *logger;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } stateLock;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *clientDelegateCallbackQueue;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *clientCompletionQueue;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *clientMessageQueue;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *clientReplyCompletionQueue;

+ (id)_sharedClientLogger;

- (void)connectClientSendServerMessage:(id)a0 proxyObject:(id)a1 replyQueue:(id)a2 isSynchronous:(BOOL)a3 withReply:(id /* block */)a4;
- (BOOL)_connectMessageMatchesClient:(id)a0 errorPtr:(id *)a1;
- (void)dealloc;
- (void)connectClientSendServerMessage:(id)a0 proxyObject:(id)a1 withReply:(id /* block */)a2;
- (void)connectToServerWithSynchronousCompletion:(id /* block */)a0;
- (void)_invalidateConnectionIfNonPersistent:(id)a0;
- (void)connectClientSendServerMessage:(id)a0;
- (void)connectProtocolFromServerSendClientMessage:(id)a0 reply:(id /* block */)a1;
- (id)connectClientSendSynchronousServerMessage:(id)a0 proxyObject:(id)a1 errorPtr:(id *)a2;
- (id)_internalConnectToServer;
- (void)connectProtocolFromServerSendClientMessage:(id)a0;
- (void)connectProtocolFromServerRequestClientID:(id /* block */)a0;
- (id)initWithClientPolicy:(id)a0;
- (void)forceCloseConnection;
- (void).cxx_destruct;
- (void)connectToServerWithCompletion:(id /* block */)a0;
- (void)_droppedConnection:(id)a0;

@end
