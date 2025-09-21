@class NSView, NSXPCConnection, NSError, NSXPCListenerEndpoint, _EXExtensionProcess, _EXRemoteViewController, NSUUID, NSString, NSObject, _EXHostConfiguration, NSXPCListener, _EXHostViewControllerSessionConfiguration;
@protocol OS_dispatch_queue, OS_os_activity, _EXHostViewControllerSessionDelegate;

@interface _EXHostViewControllerSession : NSObject <NSXPCListenerDelegate>

@property (retain) NSXPCConnection *sceneSessionConnection;
@property (retain) NSXPCListener *hostListener;
@property (weak) NSView *hostView;
@property unsigned long long signpost;
@property (retain) NSError *error;
@property (copy) id /* block */ readyBlock;
@property (copy) id /* block */ invalidationHandler;
@property (readonly) NSObject<OS_dispatch_queue> *internalQueue;
@property struct { struct os_activity_scope_state_s { unsigned long long opaque[2]; } state; NSObject<OS_os_activity> *osActivity; } activity;
@property (retain, nonatomic) _EXRemoteViewController *remoteViewController;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long maxState;
@property (readonly, nonatomic) _EXHostConfiguration *processConfiguration;
@property (readonly, nonatomic) _EXHostViewControllerSessionConfiguration *configuration;
@property (weak, nonatomic) id<_EXHostViewControllerSessionDelegate> delegate;
@property (retain) _EXExtensionProcess *extensionProcess;
@property BOOL detached;
@property (retain, nonatomic) NSXPCListenerEndpoint *viewBridgeEndpoint;
@property (retain, nonatomic) NSXPCListenerEndpoint *remoteViewControllerEndpoint;
@property (readonly) BOOL requiresFBSceneHosting;
@property (readonly) BOOL requiresUIKitSceneHosting;
@property (readonly) NSUUID *uuid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)sessionWithProcessConfiguration:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
+ (void)sessionWithProcess:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)makeXPCConnectionWithError:(id *)a0;
- (void)dealloc;
- (void)invalidate;
- (void)resume;
- (void).cxx_destruct;
- (id)_makeXPCConnectionWithError:(id *)a0;
- (void)_invalidateSession;
- (void)requestRemoteViewController;
- (void)_internalQueue_prepareToHost;
- (id)initWithProcessConfiguration:(id)a0 configuration:(id)a1;
- (id)initWithProcessConfiguration:(id)a0 configuration:(id)a1 detached:(BOOL)a2;
- (void)makeSceneHostViewController;
- (void)processDidInvalidate;
- (void)resumeWithReadyNotification:(id /* block */)a0;

@end
