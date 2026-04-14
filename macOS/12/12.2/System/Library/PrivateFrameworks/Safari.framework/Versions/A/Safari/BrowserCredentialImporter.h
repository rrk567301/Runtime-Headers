@class NSDictionary, NSString, BrowserDataImportPasswordRequestPanelController;
@protocol BrowserCredentialImportEngine;

@interface BrowserCredentialImporter : BrowserDataImporter <BrowserCredentialImporterDelegate> {
    id<BrowserCredentialImportEngine> _importerProxy;
    BrowserDataImportPasswordRequestPanelController *_passwordRequestPanelController;
    BOOL _didRequestDecryptionKey;
    unsigned long long _numberOfSuccessfullyImportedCredentials;
    unsigned long long _numberOfConflictingCredentials;
}

@property (retain, nonatomic) NSDictionary *allPasswordCredentialsByProtectionSpace;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_credentialPersistence;
+ (long long)importCredential:(id)a0 withExistingKeychainCredentials:(id)a1;

- (void).cxx_destruct;
- (void)_showPasswordRequestPanelController;
- (void)_showKeychainPasswordRequest;
- (void)importerRequiresMasterPassword;
- (void)importerDidImportCredential:(id)a0;
- (void)importerDidFinishImportingCredentials;
- (void)importerDidFailToImportCredentials;
- (void)importCredentialsUsingImporterProxy:(id)a0;
- (void)retryAfterObtainingDecryptionKey;

@end
