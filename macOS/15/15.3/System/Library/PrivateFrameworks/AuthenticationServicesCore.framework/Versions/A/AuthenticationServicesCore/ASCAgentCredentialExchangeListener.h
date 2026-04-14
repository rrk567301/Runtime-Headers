@class NSXPCListener, NSString, ASCAuthorizationPresenter, NSXPCConnection, NSData, NSUUID;

@interface ASCAgentCredentialExchangeListener : NSObject <NSXPCListenerDelegate, ASCAgentCredentialExchangeListenerInterface> {
    NSXPCListener *_listener;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internalLock;
    ASCAuthorizationPresenter *_presenter;
    NSXPCConnection *_connection;
    NSData *_exportedCredentialData;
    NSString *_importerBundleID;
    NSUUID *_importerToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)exportCredentials:(id)a0 completionHandler:(id /* block */)a1;
- (void)importCredentialsWithToken:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_atLeastOneAppAvailableForImportForConnection:(id)a0;
- (void)setTokenForImport:(id)a0;

@end
