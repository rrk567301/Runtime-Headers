@class BSXPCServiceConnectionEventHandler, NSString, RBSTarget, BSXPCServiceConnectionContext, BSAuditToken, BSXPCServiceConnectionPeer, BSXPCServiceConnectionActivationMessage, NSObject, NSMutableArray, BSXPCServiceConnectionMessageReply, BSXPCServiceConnectionMessage, BSXPCServiceConnectionMessageBatch;
@protocol BSXPCServiceConnectionParent, BSServiceDispatchingQueue, OS_xpc_object, OS_dispatch_queue;

@interface BSXPCServiceConnection : NSObject <BSXPCServiceConnectionParent, BSXPCServiceConnectionMessageDelegate, BSInvalidatable> {
    NSString *_proem;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _batchLock;
    unsigned int _lock_activationGeneration;
    BSXPCServiceConnectionPeer *_lock_peer;
    BSAuditToken *_lock_auditToken;
    NSObject<OS_dispatch_queue> *_configured_underlyingTargetQueue;
    id<BSServiceDispatchingQueue> _configured_connectionQueue;
    id /* block */ _configured_batchingHandler;
    NSObject<OS_xpc_object> *_lock_lastKnownConnection;
    NSObject<OS_xpc_object> *_lock_connection;
    NSMutableArray *_lock_childConnections;
    NSMutableArray *_lock_connectionActivatedEvents;
    NSMutableArray *_lock_connectionEstablishedEvents;
    BSXPCServiceConnectionActivationMessage *_lock_activationMessage;
    BSXPCServiceConnectionMessageReply *_lock_activationReply;
    BSXPCServiceConnectionMessage *_lock_invalidationMessage;
    BSXPCServiceConnectionMessageBatch *_batchLock_batchMessage;
    BSXPCServiceConnectionEventHandler *_lock_eventHandler;
    id<BSXPCServiceConnectionParent> _lock_parent;
    char _lock_configured;
    char _lock_activated;
    char _lock_sendsMustWaitForEstablished;
    char _lock_established;
    char _lock_remotelyInvalidated;
    char _lock_clientInvalidated;
    char _lock_clientInvalidatedExplicitly;
    char _lock_invalidated;
    RBSTarget *_remoteAssertionTarget;
    BSXPCServiceConnectionContext *_context;
}

@property (readonly, nonatomic, getter=_isInvalidated) char _invalidated;
@property (readonly, nonatomic, getter=_isClientInvalidated) char _clientInvalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_invalidateChildConnection:(id)a0;
- (char)shouldSendMessage:(id)a0;
- (void)updateAuditTokenFromReplyMessage:(id)a0 fromActivationGeneration:(unsigned int)a1;

@end
