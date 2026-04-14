@class NSObject, NSXPCConnection;
@protocol OS_os_activity;

@interface _ASAgentCredentialExchangeListenerProxy : NSObject <ASAgentCredentialExchangeViewServiceInterface, ASAgentCredentialExchangeExporterInterface, ASAgentCredentialExchangeImporterInterface> {
    NSXPCConnection *_connection;
    NSObject<OS_os_activity> *_activity;
    unsigned long long _mode;
}

- (void)invalidate;
- (void)cancelCurrentOperation;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)_setUpConnection:(id)a0;
- (id)initForMode:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)_reconnectIfNecessary;
- (void)continueExportWithCredentials:(id)a0 completionHandler:(id /* block */)a1;
- (void)didSelectImporterBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)getExportedCredentialData:(id /* block */)a0;
- (void)importCredentialsWithToken:(id)a0 completionHandler:(id /* block */)a1;
- (id)initForMode:(unsigned long long)a0 endpoint:(id)a1;
- (void)requestExportForCredentialProvider:(id)a0 completionHandler:(id /* block */)a1;
- (void)setTokenForImport:(id)a0;

@end
