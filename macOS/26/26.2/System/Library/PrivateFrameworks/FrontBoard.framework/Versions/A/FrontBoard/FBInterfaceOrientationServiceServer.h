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

- (void)initialize;
- (void)invalidate;
- (void)_lock_registerOrientationInterest:(unsigned int)a0 connection:(id)a1 completion:(id /* block */)a2;
- (id)requestActiveOrientation;
- (id)connections;
- (oneway void)requestActiveOrientationCompletion:(id /* block */)a0;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (id)_initWithDomain:(id)a0 service:(id)a1;
- (id)listener;
- (void).cxx_destruct;
- (void)_connectionInvalidated:(id)a0;
- (void)_lock_noteInterfaceOrientationChanged:(long long)a0 animationSettings:(id)a1 direction:(long long)a2;
- (id)pendingConnections;
- (id)_currentConnection;
- (id)init;
- (void)noteInterfaceOrientationChanged:(long long)a0 animationSettings:(id)a1 direction:(long long)a2;
- (oneway void)registerOrientationInterest:(id)a0 completion:(id /* block */)a1;
- (id)interestedConnections;
- (void)startService;
- (void)_lock_sendMessageToInterestedClients:(id /* block */)a0;

@end
