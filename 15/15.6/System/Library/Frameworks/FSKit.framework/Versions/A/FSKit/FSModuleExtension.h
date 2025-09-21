@class NSXPCListener, NSString, NSMutableDictionary, FSModuleConnector, FSContainerIdentifier, NSObject, NSMutableArray, LiveFSMachPort, FSResource;

@interface FSModuleExtension : _EXExtension <NSXPCListenerDelegate>

@property (readonly) char isFSSubclass;
@property (readonly) char isSimpleFSSubclass;
@property (readonly) char isNormalFS;
@property (readonly) char isSimpleFS;
@property (readonly) char supportsSimpleMaintenanceOps;
@property (readonly) char supportsServerOps;
@property (readonly) char delegateConformantFS;
@property (retain) NSObject *strongDelegate;
@property (retain) FSContainerIdentifier *instanceID;
@property (readonly) NSString *bundleID;
@property (retain) NSMutableDictionary *taskSet;
@property (readonly) NSMutableArray *connectors;
@property (readonly) NSMutableDictionary *volumes;
@property (retain) FSResource *resource;
@property (weak) FSModuleConnector *fskitdCurrentConnection;
@property (retain) LiveFSMachPort *fsMachPort;
@property (readonly, retain, nonatomic) NSXPCListener *secondaryListener;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)moduleExtensionForAppex:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (char)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (char)shouldAcceptConnection:(id)a0;
- (void)didFinishLaunching;
- (char)fskitdIsClient:(id)a0;
- (id)getFSMachPort;
- (void)sendConfigureUserClientWithReplyHandler:(id /* block */)a0;
- (void)sendIsVolumeUsed:(id)a0 bundle:(id)a1 replyHandler:(id /* block */)a2;
- (void)sendWipeResource:(id)a0 replyHandler:(id /* block */)a1;

@end
