@class BSMutableIntegerMap, NSString, BSServiceInterface, BSServiceDispatchQueue, BSAtomicSignal, BSServiceConnectionListener, NSObject;
@protocol BKHIDDomainIncomingServiceConnectionHandler, BKHIDDomainServiceDelegate, OS_os_log;

@interface BKHIDDomainServiceServer : NSObject <_BKHIDDomainIncomingServiceConnectionHandler, BSInvalidatable> {
    BSServiceConnectionListener *_connectionListener;
    id<BKHIDDomainServiceDelegate> _delegate;
    id<BKHIDDomainIncomingServiceConnectionHandler> _incomingConnectionHandler;
    BSServiceInterface *_interface;
    id _serviceTarget;
    BSServiceDispatchQueue *_queue;
    NSObject<OS_os_log> *_log;
    NSString *_entitlement;
    NSString *_serviceName;
    BSMutableIntegerMap *_lock_activeConnectionsByPID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BSAtomicSignal *_invalidSignal;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enumerateUserInfoWithBlock:(id /* block */)a0;
- (id)initWithDelegate:(id)a0 incomingServiceConnectionHandler:(id)a1 serverTarget:(id)a2 serverProtocol:(id)a3 clientProtocol:(id)a4 serviceName:(id)a5 queue:(id)a6 log:(id)a7 entitlement:(id)a8;
- (void)invalidate;
- (id)userInfoForConnection:(id)a0;
- (void)rejectIncomingServiceConnection:(id)a0;
- (id /* block */)didRespondBlockForConnection:(id)a0;
- (id)remoteTargetForServiceConnection:(id)a0;
- (id)connectionForPID:(int)a0;
- (BOOL)responsePendingForConnection:(id)a0;
- (void)acceptIncomingServiceConnection:(id)a0;
- (id)currentConnection;
- (void)activate;
- (void)setUserInfo:(id)a0 forConnection:(id)a1;
- (void).cxx_destruct;

@end
