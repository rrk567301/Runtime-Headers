@class NSString, BSServiceDispatchQueue, NSMutableSet, BSServiceConnectionListener;

@interface FBInterfaceOrientationServiceServer : NSObject <BSServiceConnectionListenerDelegate, FBSOrientationServiceServerInterface, BSInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BSServiceDispatchQueue *_queue;
    BSServiceConnectionListener *_listener;
    NSMutableSet *_lock_pendingConnections;
    NSMutableSet *_lock_interestedConnections;
    NSMutableSet *_lock_connections;
    BOOL _lock_serviceSuspended;
    long long _lock_interfaceOrientation;
    unsigned long long _lock_sequenceNumber;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)connections;
- (id)listener;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)_lock_registerOrientationInterest:(unsigned int)a0 connection:(id)a1 completion:(id /* block */)a2;
- (void)noteInterfaceOrientationChanged:(long long)a0 animationSettings:(id)a1 direction:(long long)a2;
- (oneway void)registerOrientationInterest:(id)a0 completion:(id /* block */)a1;
- (void)initialize;
- (void)_lock_sendMessageToInterestedClients:(id /* block */)a0;
- (id)interestedConnections;
- (void)invalidate;
- (id)requestActiveOrientation;
- (id)_initWithDomain:(id)a0 service:(id)a1;
- (void)startService;
- (void)_lock_noteInterfaceOrientationChanged:(long long)a0 animationSettings:(id)a1 direction:(long long)a2;
- (id)_currentConnection;
- (id)pendingConnections;
- (void)_connectionInvalidated:(id)a0;
- (void).cxx_destruct;
- (oneway void)requestActiveOrientationCompletion:(id /* block */)a0;
- (id)init;

@end
