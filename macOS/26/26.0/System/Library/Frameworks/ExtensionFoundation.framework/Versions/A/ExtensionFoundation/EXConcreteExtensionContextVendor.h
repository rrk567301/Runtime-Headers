@class NSString, NSMutableDictionary;

@interface EXConcreteExtensionContextVendor : _NSExtensionContextVendor <NSXPCListenerDelegate, EXExtensionContextVending>

@property (retain, setter=_setExtensionServiceConnections:) NSMutableDictionary *_extensionServiceConnections;
@property (retain, setter=_setExtensionContexts:) NSMutableDictionary *_extensionContexts;
@property (retain, setter=_setExtensionPrincipalObjects:) NSMutableDictionary *_extensionPrincipalObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_extensionDictionary;
+ (id)_expirationConcurrentQueue;
+ (id)_extensionMainStoryboard;
+ (void)_startListening;
+ (Class)_extensionContextClass;
+ (id)_completionConcurrentQueue;
+ (Class)_extensionPrincipalClass;
+ (void)_startListening:(BOOL)a0;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (BOOL)_shouldCreatePrincipalObject;
- (void)_removeExtensionContext:(id)a0;
- (id)_extensionContextForUUID:(id)a0;
- (void)_hostDidEnterBackgroundForContextUUID:(id)a0 completion:(id /* block */)a1;
- (void)_setPrincipalObject:(id)a0 forUUID:(id)a1;
- (void)_hostWillResignActiveForContextUUID:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)_tearDownContextWithUUID:(id)a0;
- (void)_hostWillEnterForegroundForContextUUID:(id)a0 completion:(id /* block */)a1;
- (void)_beginRequestWithExtensionItems:(id)a0 listenerEndpoint:(id)a1 withContextUUID:(id)a2 completion:(id /* block */)a3;
- (void)_hostDidBecomeActiveForContextUUID:(id)a0 completion:(id /* block */)a1;
- (void)_addExtensionContext:(id)a0;
- (void).cxx_destruct;
- (void)_onGlobalStateQueueOnly_setPrincipalObject:(id)a0 forUUID:(id)a1;

@end
