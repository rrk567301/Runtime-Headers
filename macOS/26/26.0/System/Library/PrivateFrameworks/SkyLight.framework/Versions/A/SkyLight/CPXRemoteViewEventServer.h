@class NSString, NSMutableSet, BSServiceConnectionListener;
@protocol CPXRemoteViewEventServerConfig;

@interface CPXRemoteViewEventServer : NSObject <BSServiceConnectionListenerDelegate, BSInvalidatable> {
    NSMutableSet *_pendingLock_pendingConnections;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _pendingLock;
    BSServiceConnectionListener *_listener;
    id<CPXRemoteViewEventServerConfig> _config;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)dealloc;
- (void)invalidate;
- (id)init;
- (id)initWithConfig:(id)a0;
- (id)endpoint;
- (void).cxx_destruct;
- (void)didUpdateRemoteViewEventManagerForSession;
- (unsigned long long)pendingConnectionsCount;

@end
