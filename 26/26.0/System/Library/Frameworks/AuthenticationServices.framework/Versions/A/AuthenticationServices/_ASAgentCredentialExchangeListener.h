@class NSXPCListener, NSString, NSError, _ASAgentCredentialExchangeOperation;

@interface _ASAgentCredentialExchangeListener : NSObject <ASAgentCredentialExchangeViewServiceInterface, NSXPCListenerDelegate, ASAgentCredentialExchangeExporterInterface, ASAgentCredentialExchangeImporterInterface> {
    NSXPCListener *_listener;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internalLock;
    _ASAgentCredentialExchangeOperation *_currentOperation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)cancelCurrentOperation;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_atLeastOneAppAvailableForImportForConnection:(id)a0;
- (void)_highestCommonVersionNumber:(NSString *)a0 credentialProviderBundleIdentifier:(NSString *)a1 importerBundleIdentifier:(NSString *)a2 completionHandler:(void (^)(NSString *, NSError *))a3;
- (void)_setSelectedImporterBundleIdentifierForCurrentOperation:(id)a0;
- (void)_setUpExporterConnection:(id)a0 forOperation:(id)a1;
- (void)_setUpImporterConnection:(id)a0 forOperation:(id)a1;
- (void)_setUpViewServiceConnection:(id)a0 forOperation:(id)a1;
- (void)_showErrorAlert:(unsigned long long)a0;
- (void)continueExportWithCredentials:(id)a0 completionHandler:(id /* block */)a1;
- (void)didSelectImporterBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getExportedCredentialData:(id /* block */)a0;
- (void)importCredentialsWithToken:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestExportForCredentialProvider:(id)a0 completionHandler:(id /* block */)a1;
- (void)setTokenForImport:(id)a0;

@end
