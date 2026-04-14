@class NSString, FBSWorkspaceCoupler, BSServiceConnectionListener, NSSet, NSDictionary, FBWorkspaceEndpointPromise, NSMutableSet, BSServiceDomainSpecification;
@protocol FBWorkspaceDomainConnectionDelegate, BSInvalidatable;

@interface FBWorkspaceDomain : NSObject <BSServiceConnectionListenerDelegate> {
    FBSWorkspaceCoupler *_coupler;
    BSServiceDomainSpecification *_specification;
    FBWorkspaceEndpointPromise *_endpointPromise;
    id<BSInvalidatable> _lock_registration;
    BSServiceConnectionListener *_lock_listener;
    id<BSInvalidatable> _lock_activation;
    id<FBWorkspaceDomainConnectionDelegate> _icdLock_indirectConnectionDelegate;
    NSMutableSet *_icdLock_pendingIndirectConnectionBlocks;
    NSDictionary *_preregisteredWorkspaces;
    NSString *_defaultWorkspace;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _icdLock;
    unsigned char _selfAssertRuntime : 2;
    BOOL _usesDefaultShellEndpoint;
    BOOL _injectorEnabled;
    BOOL _assertsVisibility;
    BOOL _monitorAllSuspendableProcesses;
    BOOL _allowsDirectConnections;
    BOOL _lock_injectEndpointToFBSWorkspace;
    BOOL _lock_invalidated;
    NSString *_reconnectShmemIdentifier;
    NSSet *_reconnectableWorkspaces;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)debugDescription;
+ (id)startWorkspaceDomainListener;

- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
