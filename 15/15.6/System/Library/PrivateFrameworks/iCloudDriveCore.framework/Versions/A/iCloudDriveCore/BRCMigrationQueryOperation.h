@class NSString, CKQueryCursor, NSMutableArray;

@interface BRCMigrationQueryOperation : BRCSyncDownOperation {
    NSString *_migrationKey;
    CKQueryCursor *_continuationCursor;
    NSMutableArray *_shareIDsToFetch;
}

+ (id)allMigrationKeysOrdered;
+ (id)documentSharesMigrationKey;
+ (id)folderShareAliasesMigrationKey;
+ (id)folderSharesMigrationKey;

- (void).cxx_destruct;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (char)shouldRetryForError:(id)a0;
- (void)_performAfterQueryingForShareAliasesWithCompletion:(id /* block */)a0;
- (void)_performAfterQueryingForShareIDsOfFolders:(char)a0 completion:(id /* block */)a1;
- (void)_performQuery:(id)a0 recordFetchedBlock:(id /* block */)a1 cursorUpdatedBlock:(id /* block */)a2 desiredKeys:(id)a3 completion:(id /* block */)a4;
- (char)_saveFetchedRecords:(id)a0 cursor:(id)a1 error:(id *)a2;
- (char)_updatedContinuationCursor:(id)a0 fetchedRecords:(id)a1 error:(id *)a2;
- (id)initWithServerZone:(id)a0 migrationKey:(id)a1 continuationCursor:(id)a2 sessionContext:(id)a3;

@end
