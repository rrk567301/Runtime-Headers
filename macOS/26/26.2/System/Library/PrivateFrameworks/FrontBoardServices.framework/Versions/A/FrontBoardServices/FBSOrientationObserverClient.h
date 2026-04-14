@class BSServiceQueue, NSString, BSServiceConnection, BSServiceConnectionEndpoint;
@protocol FBSOrientationObserverClientDelegate;

@interface FBSOrientationObserverClient : NSObject <FBSOrientationServiceClientInterface, BSInvalidatable> {
    id<FBSOrientationObserverClientDelegate> _delegate;
    BSServiceConnectionEndpoint *_endpoint;
    BSServiceQueue *_calloutQueue;
    BSServiceConnection *_lock_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _lock_interest;
    BOOL _lock_invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_lock_invalidate;
- (void)_setDelegate:(id)a0;
- (void)_lock_activate;
- (void)activeInterfaceOrientationWithCompletion:(id /* block */)a0;
- (void)invalidate;
- (id)_connection;
- (oneway void)activeOrientationDidUpdate:(id)a0;
- (long long)activeInterfaceOrientation;
- (void)_connectionActivated:(id)a0;
- (void)registerOrientationInterest:(unsigned int)a0;
- (id)_lock_remoteTarget;
- (void)_connectionInterrupted:(id)a0;
- (void).cxx_destruct;
- (id)_initWithEndpoint:(id)a0 calloutQueue:(id)a1 delegate:(id)a2;
- (void)_connectionInvalidated:(id)a0;
- (void)activate;
- (id)initWithDelegate:(id)a0;
- (void)_server:(id)a0 registerOrientationInterest:(unsigned int)a1;
- (void)dealloc;

@end
