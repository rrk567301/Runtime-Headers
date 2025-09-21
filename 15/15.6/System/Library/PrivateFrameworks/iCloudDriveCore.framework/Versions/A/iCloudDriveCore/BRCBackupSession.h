@class BRCPQLConnection, NSArray, NSURL, BRDSIDString;

@interface BRCBackupSession : NSObject {
    BRCPQLConnection *_db;
    NSURL *_homeDirectoryURL;
    BRDSIDString *_accountDSID;
    NSArray *_syncedRootURLs;
}

+ (char)fileProviderString:(id)a0 isEqualToFileProviderString:(id)a1;

- (void).cxx_destruct;
- (void)close;
- (id)_mobileDocumentsURL;
- (char)_openDBWithHomeDirectoryURL:(id)a0 error:(id *)a1;
- (char)_setupHomeDirectoryForUsername:(id)a0 error:(id *)a1;
- (void)_updateAccountIDAndSyncedRootURLs;
- (char)_urlIsInSyncedLocation:(id)a0;
- (void)dbBecameCorrupted;
- (id)fileProviderStringsForDocumentURLs:(id)a0 error:(id *)a1;
- (char)openWithUsername:(id)a0 error:(id *)a1;
- (char)urlIsInSyncedLocation:(id)a0;

@end
