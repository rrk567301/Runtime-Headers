@class NSString, NSMutableDictionary;

@interface EXConcreteExtensionContextVendor : _NSExtensionContextVendor <NSXPCListenerDelegate, EXExtensionContextVending>

@property (retain, setter=_setExtensionServiceConnections:) NSMutableDictionary *_extensionServiceConnections;
@property (retain, setter=_setExtensionContexts:) NSMutableDictionary *_extensionContexts;
@property (retain, setter=_setExtensionPrincipalObjects:) NSMutableDictionary *_extensionPrincipalObjects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_startListening:(BOOL)a0;
+ (void)_startListening;
+ (id)_extensionMainStoryboard;
+ (id)_completionConcurrentQueue;
+ (id)_expirationConcurrentQueue;
+ (id)_extensionDictionary;
+ (Class)_extensionPrincipalClass;
+ (Class)_extensionContextClass;

- (id)_extensionContextForUUID:(id)a0;
- (void)_hostDidEnterBackgroundForContextUUID:(id)a0 completion:(id /* block */)a1;
- (void)_tearDownContextWithUUID:(id)a0;
- (void)_beginRequestWithExtensionItems:(id)a0 listenerEndpoint:(id)a1 withContextUUID:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)_hostDidBecomeActiveForContextUUID:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)_setPrincipalObject:(id)a0 forUUID:(id)a1;
- (void)_removeExtensionContext:(id)a0;
- (BOOL)_shouldCreatePrincipalObject;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_hostWillResignActiveForContextUUID:(id)a0 completion:(id /* block */)a1;
- (void)_hostWillEnterForegroundForContextUUID:(id)a0 completion:(id /* block */)a1;
- (void)_onGlobalStateQueueOnly_setPrincipalObject:(id)a0 forUUID:(id)a1;
- (void)_addExtensionContext:(id)a0;

@end
