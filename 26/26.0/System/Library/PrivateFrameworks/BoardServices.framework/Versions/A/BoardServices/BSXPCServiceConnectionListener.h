@class NSString, BSServiceDispatchQueue, NSHashTable, BSServiceDomainSpecification, NSObject, BSXPCServiceConnectionEndpoint;
@protocol OS_xpc_object;

@interface BSXPCServiceConnectionListener : NSObject <BSXPCServiceConnectionListenerConfiguring, BSXPCServiceConnectionParent, BSInvalidatable> {
    unsigned long long _unique;
    NSString *_proem;
    BSServiceDomainSpecification *_specification;
    NSString *_eDesc;
    BSServiceDispatchQueue *_queue;
    id /* block */ _lock_connectionHandler;
    id /* block */ _lock_errorHandler;
    NSObject<OS_xpc_object> *_lock_listener;
    NSHashTable *_lock_childConnections;
    BSXPCServiceConnectionEndpoint *_lock_endpoint;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _isAnonymous;
    BOOL _isXPCService;
    BOOL _lock_sealed;
    BOOL _lock_activated;
    BOOL _lock_resumed;
    BOOL _lock_invalidated;
    BOOL _lock_clientInvalidated;
}

@property (readonly, nonatomic, getter=_isInvalidated) BOOL _invalidated;
@property (readonly, nonatomic, getter=_isClientInvalidated) BOOL _clientInvalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setConnectionHandler:(id /* block */)a0;
- (void)_noteChildConnectionDidInvalidate:(id)a0;
- (void)dealloc;
- (void)setErrorHandler:(id /* block */)a0;
- (void)invalidate;
- (id)init;
- (void).cxx_destruct;

@end
