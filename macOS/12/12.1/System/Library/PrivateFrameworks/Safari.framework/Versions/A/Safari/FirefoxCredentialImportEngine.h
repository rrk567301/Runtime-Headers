@class NSString;
@protocol BrowserCredentialImporterDelegate;

@interface FirefoxCredentialImportEngine : FirefoxImporter <BrowserCredentialImportEngine> {
    NSString *_masterPassword;
    BOOL _shouldSendImporterRequiresMasterPassword;
    id<BrowserCredentialImporterDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDataDirectories:(id)a0;
- (void)setShouldSendImporterRequiresMasterPassword:(BOOL)a0;
- (void)importCredentialsWithDelegate:(id)a0;
- (void)cancelCredentialImport;
- (void)setMasterPassword:(id)a0;
- (void)retryCredentialImport;
- (void)getHasImportableCredentialsWithCompletionHandler:(id /* block */)a0;
- (void)_importCredentials;
- (id)_encryptedCredentials;

@end
