@class NSString, _EXDiscoveryController, NSObject;
@protocol OS_dispatch_source;

@interface _EXService : NSObject <NSXPCListenerDelegate, _EXServiceProtocol, LSObserverDelegate>

@property (class, readonly) BOOL currentProcessIsService;

@property (readonly) _EXDiscoveryController *discoveryController;
@property (readonly) NSObject<OS_dispatch_source> *sigtermSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedService;
+ (void)runAsXPCService;
+ (BOOL)currentProcessIsService;

- (id)_init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)extensionsWithQuery:(id)a0 reply:(id /* block */)a1;
- (void)beginExtensionsQuery:(id)a0 listenerEndpoint:(id)a1 reply:(id /* block */)a2;
- (void)prepareWithLaunchConfiguration:(id)a0 reply:(id /* block */)a1;
- (void)photoServiceAuthorizationStatusForExtensionUUID:(id)a0 completion:(id /* block */)a1;
- (void)getServiceConfigForExtension:(id)a0 overlay:(id *)a1 subservices:(id *)a2;
- (BOOL)registerServiceForClientConnection:(id)a0 extension:(id)a1 error:(id *)a2;
- (id)launchWithConfiguration:(id)a0 clientConnection:(id)a1 error:(id *)a2;

@end
