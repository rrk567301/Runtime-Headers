@class NSString, NSHashTable, BSServiceQuality, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface BSXPCServiceConnectionListener : NSObject <BSXPCServiceConnectionListenerConfiguring, BSXPCServiceConnectionParent, BSInvalidatable> {
    NSString *_serviceName;
    unsigned long long _unique;
    NSString *_proem;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSString *_lock_debugDesc;
    NSString *_config_eDesc;
    BSServiceQuality *_config_qos;
    id /* block */ _lock_connectionHandler;
    id /* block */ _lock_errorHandler;
    NSObject<OS_dispatch_queue> *_lock_queue;
    NSObject<OS_xpc_object> *_lock_listener;
    NSHashTable *_lock_childConnections;
    NSObject<OS_xpc_object> *_lock_endpoint;
    char _isXPCService;
    char _lock_nonLaunching;
    char _lock_sealed;
    char _lock_activated;
    char _lock_resumed;
    char _lock_invalidated;
    char _lock_clientInvalidated;
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
- (void)setErrorHandler:(id /* block */)a0;
- (void)setConnectionHandler:(id /* block */)a0;
- (void)setServiceQuality:(id)a0;
- (void)_invalidateChildConnection:(id)a0;
- (void)setEndpointDescription:(id)a0;

@end
