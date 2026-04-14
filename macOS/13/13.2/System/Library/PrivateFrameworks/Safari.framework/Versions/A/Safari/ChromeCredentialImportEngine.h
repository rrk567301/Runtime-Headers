@class NSString;
@protocol BrowserCredentialImporterDelegate;

@interface ChromeCredentialImportEngine : ChromeImportEngine <BrowserCredentialImportEngine> {
    NSString *_safeStorageKey;
    BOOL _shouldSendImporterRequiresMasterPassword;
    id<BrowserCredentialImporterDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)getHasImportableCredentialsWithCompletionHandler:(id /* block */)a0;
- (void)setMasterPassword:(id)a0;
- (void)setShouldSendImporterRequiresMasterPassword:(BOOL)a0;
- (void)importCredentialsWithDelegate:(id)a0;
- (void)cancelCredentialImport;
- (void)retryCredentialImport;
- (void)_importCredentials;
- (id)_encryptedCredentials;
- (id)_encryptedCredentialsWithLoginDatabaseURL:(id)a0;

@end
