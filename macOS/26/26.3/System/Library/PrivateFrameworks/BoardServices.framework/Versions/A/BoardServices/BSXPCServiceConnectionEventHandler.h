@class BSXPCServiceConnectionProxy, NSString, BSXPCCoder, BSServiceQueue, BSServiceInterface, BSXPCServiceConnection, RBSTarget, NSObject, BSServiceDispatchQueue;
@protocol OS_xpc_object;

@interface BSXPCServiceConnectionEventHandler : NSObject {
    RBSTarget *_assertionTarget;
    BSXPCServiceConnection *_lock_connection;
    NSObject<OS_xpc_object> *_lock_activeXPCConnection;
    BSServiceDispatchQueue *_lock_xpcConnectionTargetQueue;
    BSXPCServiceConnectionProxy *_lock_remoteTarget;
    id _interfaceTarget;
    id /* block */ _connectionHandler;
    id /* block */ _noMoreChildrenHandler;
    id /* block */ _messageHandler;
    id /* block */ _errorHandler;
    id /* block */ _activationHandler;
    id /* block */ _interruptionHandler;
    id /* block */ _invalidationHandler;
    id /* block */ _batchingHandler;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _lock_activationGeneration;
    BOOL _nonLaunchingAware;
    id _calloutContext;
    NSString *_name;
    BSServiceQueue *_queue;
    BSServiceInterface *_interface;
    BSXPCCoder *_initiatingContext;
}

- (id)init;
- (void).cxx_destruct;

@end
