@class NSString, NSDictionary, NSArray, NSSet, BSServiceConnectionListener, BSServiceConnectionEndpoint;
@protocol BSInvalidatable;

@interface FBWorkspaceDomain : NSObject <BSServiceConnectionListenerDelegate> {
    char _bootstrapConfigured;
    char _usesDefaultShellEndpoint;
    char _injectorEnabled;
    char _assertsVisibility;
    char _monitorAllSuspendableProcesses;
    char _allowsDirectConnections;
    long long _selfAssertRuntime;
    NSString *_identifier;
    NSString *_machName;
    NSDictionary *_preregisteredWorkspaces;
    NSString *_defaultWorkspace;
    BSServiceConnectionEndpoint *_nullEndpoint;
    id<BSInvalidatable> _registration;
    BSServiceConnectionListener *_listener;
    id<BSInvalidatable> _activation;
    NSArray *_fgLaunchAttributes;
    NSArray *_fgSupportLaunchAttributes;
    NSArray *_bgUserInitiatedAttributes;
    NSArray *_bgLaunchAttributes;
    NSArray *_utLaunchAttributes;
    NSArray *_bgUtilityAttributes;
    NSArray *_bgActiveAttributes;
    NSArray *_fgSuspendedAttributes;
    NSArray *_fgUtilityAttributes;
    NSArray *_fgNonFocalAttributes;
    NSArray *_fgFocalAttributes;
    NSArray *_fgSupportSuspendedAttributes;
    NSArray *_fgSupportUtilityAttributes;
    NSArray *_fgSupportNonFocalAttributes;
    NSArray *_fgSupportFocalAttributes;
    NSArray *_injectorAttributes;
    NSString *_reconnectShmemIdentifier;
    NSSet *_reconnectableWorkspaces;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)debugDescription;
+ (id)endpoint;
+ (void)startListener;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;

@end
