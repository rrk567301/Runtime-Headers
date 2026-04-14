@class BSXPCServiceConnectionMessage, BSXPCServiceConnectionActivationMessage, BSServiceQueue, NSObject, BSXPCServiceConnectionMessageReply, BSXPCServiceConnectionContext, NSMutableArray, BSXPCServiceConnectionEventHandler, BSXPCServiceConnectionMessageBatch, NSString, BSXPCServiceConnectionEventObservers, RBSTarget, BSAuditToken, BSXPCServiceConnectionPeer, BSServiceDispatchQueue;
@protocol OS_xpc_object, BSXPCServiceConnectionParent;

@interface BSXPCServiceConnection : NSObject <BSXPCServiceConnectionParent, BSXPCServiceConnectionMessageDelegate, BSInvalidatable> {
    NSString *_proem;
    BSXPCServiceConnectionPeer *_lock_peer;
    BSAuditToken *_lock_auditToken;
    BSServiceDispatchQueue *_configured_underlyingTargetQueue;
    BSServiceQueue *_configured_connectionQueue;
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
    BSXPCServiceConnectionEventObservers *_lock_eventObservers;
    id<BSXPCServiceConnectionParent> _lock_parent;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _batchLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _lock_activationGeneration;
    unsigned int _lock_childrenGeneration;
    unsigned char _lock_clientInvalidated : 2;
    BOOL _lock_clientInvalidatedExplicitly;
    BOOL _lock_configured;
    BOOL _lock_activated;
    BOOL _lock_sendsMustWaitForEstablished;
    BOOL _lock_established;
    BOOL _lock_remotelyInvalidated;
    BOOL _lock_invalidated;
    BOOL _lock_explicitlyRevoked;
    RBSTarget *_remoteAssertionTarget;
    BSXPCServiceConnectionContext *_context;
}

@property (readonly, nonatomic, getter=_isInvalidated) BOOL _invalidated;
@property (readonly, nonatomic, getter=_isClientInvalidated) BOOL _clientInvalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_noteChildConnectionDidInvalidate:(id)a0;
- (void)dealloc;
- (void)invalidate;
- (id)init;
- (BOOL)shouldSendMessage:(id)a0;
- (void)updateAuditTokenFromReplyMessage:(id)a0 fromActivationGeneration:(unsigned int)a1;
- (void).cxx_destruct;

@end
