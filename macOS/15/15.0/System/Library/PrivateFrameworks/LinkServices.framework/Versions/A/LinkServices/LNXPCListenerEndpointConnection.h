@class NSXPCListenerEndpoint;

@interface LNXPCListenerEndpointConnection : LNConnection

@property (readonly, nonatomic) NSXPCListenerEndpoint *listenerEndpoint;

- (void).cxx_destruct;
- (void)connectWithOptions:(id)a0;
- (void)acquireAssertionsForConnectionOperation:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 bundleURL:(id)a1 bundleType:(id)a2 appBundleIdentifier:(id)a3 appIntentsEnabledOnly:(BOOL)a4 userIdentity:(id)a5 listenerEndpoint:(id)a6 auditToken:(struct { unsigned int x0[8]; })a7 error:(id *)a8;
- (BOOL)refreshWithOptions:(id)a0;

@end
