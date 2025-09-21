@class BSServiceQueue, NSString, BSXPCServiceConnection, BSServiceInterface, BSServiceQuality, BSServiceInitiatingConnectionMultiplexer, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue, NSCopying;

@interface _BSServiceConnectionConfiguration : NSObject <BSServiceConnectionInitiatingOptions, BSServiceConnectionConfiguring, BSServiceConnectionInternalConfiguring, BSServiceInitiatingConnectionLegacyFrontBoardConfiguring, BSServiceListenerConnectionLegacyFrontBoardConfiguring, BSServiceConnectionConfiguring_MessageBatching, BSXPCServiceConnectionConfiguring> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BSXPCServiceConnection *_connection;
    NSString *_service;
    NSString *_instance;
    BSServiceInitiatingConnectionMultiplexer *_multiplexer;
    NSObject<OS_xpc_object> *_clientContext;
    id<NSCopying> _userInfo;
    NSString *_name;
    BSServiceInterface *_interface;
    id _target;
    id /* block */ _activationHandler;
    id /* block */ _interruptionHandler;
    id /* block */ _invalidationHandler;
    BSServiceQueue *_queue;
    BSServiceQuality *_serviceQuality;
    NSObject<OS_dispatch_queue> *_targetQueue;
    BSServiceQueue *_queueOfTargetQueue;
    id /* block */ _batchingHandler;
    id /* block */ _messageHandler;
    id /* block */ _errorHandler;
    unsigned char _state;
    BOOL _requiresMessagingAfterHandshake;
}

- (void)setInterface:(id)a0;
- (void)setServiceQuality:(id)a0;
- (void)setInterfaceTarget:(id)a0;
- (void)setInvalidationHandler:(id /* block */)a0;
- (void)setActivationHandler:(id /* block */)a0;
- (void)encodeContext:(id /* block */)a0;
- (void)setErrorHandler:(id /* block */)a0;
- (void)setName:(id)a0;
- (void)setInterruptionHandler:(id /* block */)a0;
- (id)init;
- (void)setQueue:(id)a0;
- (void)setMessageHandler:(id /* block */)a0;
- (void)setUserInfo:(id)a0;
- (void)setBatchingHandler:(id /* block */)a0;
- (void)setTargetQueue:(id)a0;
- (void).cxx_destruct;
- (void)setMultiplexer:(id)a0;

@end
