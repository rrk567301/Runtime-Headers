@class NSXPCListener, NSString, NSMutableDictionary, NSXPCConnection;
@protocol _EXExtensionViewControllerFactory;

@interface _EXRunningUIExtension : _EXRunningExtension <NSViewServiceDelegate, NSXPCListenerDelegate, _EXInternalExtensionXPCProtocol, _EXExtensionSceneProviding, _EXExtensionViewControllerFactory>

@property (readonly) NSString *viewControllerClassName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSXPCConnection *xpcConnection;
@property (readonly) NSMutableDictionary *sessions;
@property (retain) NSXPCListener *serviceListener;
@property (retain) NSXPCListener *internalListener;
@property (retain) id<_EXExtensionViewControllerFactory> viewControllerFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (BOOL)viewServiceDidCreateViewController:(id)a0 extensionIdentifier:(id)a1 error:(id *)a2;
- (id)viewControllerClassName;
- (void)addSession:(id)a0;
- (id)scenes;
- (id)configurationForSceneNamed:(id)a0;
- (id)makeViewControllerWithSceneConfiguration:(id)a0;
- (void)requestHostUserInterfaceSessionForSession:(id)a0 reply:(id /* block */)a1;
- (id)sessionForIdentifier:(id)a0;
- (int)startWithArguments:(const char **)a0 count:(int)a1;

@end
