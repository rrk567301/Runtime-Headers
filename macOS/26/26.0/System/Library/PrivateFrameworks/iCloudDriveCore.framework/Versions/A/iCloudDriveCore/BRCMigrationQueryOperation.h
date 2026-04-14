@class NSString, BRCMigrationCursor, NSMutableArray;

@interface BRCMigrationQueryOperation : BRCSyncDownOperation {
    NSString *_migrationKey;
    BRCMigrationCursor *_continuationCursor;
    NSMutableArray *_shareIDsToFetch;
}

+ (id)allMigrationKeysOrdered;
+ (id)documentSharesMigrationKey;
+ (id)folderShareAliasesMigrationKey;
+ (id)folderSharesMigrationKey;
+ (id)refetchExistingSharesMigrationKey;

- (BOOL)shouldRetryForError:(id)a0;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void).cxx_destruct;
- (long long)__computeNextShareBatchWithMaxRank:(long long)a0 batchSize:(long long)a1;
- (void)__performQuery:(id)a0 recordFetchedBlock:(id /* block */)a1 cursorUpdatedBlock:(id /* block */)a2 desiredKeys:(id)a3 asContinuationOf:(id)a4 completion:(id /* block */)a5;
- (void)_performAfterFetchingNextShareBatch:(id /* block */)a0;
- (void)_performAfterQueryingForShareAliasesWithCompletion:(id /* block */)a0;
- (void)_performAfterQueryingForShareIDsOfFolders:(BOOL)a0 completion:(id /* block */)a1;
- (void)_performQuery:(id)a0 recordFetchedBlock:(id /* block */)a1 cursorUpdatedBlock:(id /* block */)a2 desiredKeys:(id)a3 completion:(id /* block */)a4;
- (BOOL)_saveFetchedRecords:(id)a0 cursor:(id)a1 error:(id *)a2;
- (void)_updatedContinuationCursor:(id)a0 parentOperation:(id)a1 fetchedRecords:(id)a2 alreadyOnServerTruth:(BOOL)a3 reply:(id /* block */)a4;
- (id)initWithServerZone:(id)a0 migrationKey:(id)a1 continuationCursor:(id)a2 sessionContext:(id)a3;

@end
