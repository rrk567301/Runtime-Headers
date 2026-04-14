@interface ExtensionFoundation.Service : NSObject <BSServiceConnectionListenerDelegate, ExtensionFoundation._EXServiceProtocol> {
    void /* unknown type, empty encoding */ discoveryController;
    void /* unknown type, empty encoding */ sigtermSource;
}

- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)beginExtensionsQuery:(id)a0 listenerEndpoint:(id)a1 reply:(id /* block */)a2;
- (void)extensionsWith:(id)a0 reply:(id /* block */)a1;
- (void)invalidateLaunchAssertionsForExtensionAuditToken:(struct { unsigned int x0[8]; })a0 reply:(id /* block */)a1;
- (void)photoServiceAuthorizationStatusForExtensionUUID:(id)a0 completion:(id /* block */)a1;
- (void)prepareWithLaunchConfiguration:(id)a0 reply:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;

@end
