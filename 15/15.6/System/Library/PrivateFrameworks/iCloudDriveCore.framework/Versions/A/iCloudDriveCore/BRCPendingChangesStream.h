@class BRCServerZone, CKServerChangeToken, NSString, NSURL, NSError, BRCClientZone, BRCSafeDBHolder;

@interface BRCPendingChangesStream : NSObject {
    NSURL *_databaseURL;
    NSError *_error;
    BRCSafeDBHolder *_dbSafeHolder;
    CKServerChangeToken *_startingChangeToken;
    BRCClientZone *_clientZone;
    BRCServerZone *_serverZone;
    NSString *_label;
    char _hasBeenCreated;
    char _dbHasOpened;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)lastError;
- (void)_openDB;
- (void)destroyDatabase;
- (void)_closeChangeStream;
- (void)_closeDatabaseAndDestroy:(char)a0;
- (void)_createSchemaIfNecessary;
- (void)_dbBecameCorrupted:(id)a0 withDescription:(id)a1;
- (char)_dropExistingTablesWithDB:(id)a0;
- (char)_finishedFetchingRecordMetadata:(id)a0 withDB:(id)a1;
- (id)_getChangesStreamSafeDBHolder;
- (id)_initDeltaSyncWithChangeToken:(id)a0 serverZone:(id)a1;
- (long long)_recordTypeFromRecordID:(id)a0 isShare:(char)a1 isDelete:(char)a2;
- (char)_saveSubResourceRecord:(id)a0 withDB:(id)a1;
- (void)_wasClosed;
- (long long)copyBlockingSaveRecordsToNeedingFetchIgnoringRecords:(id)a0;
- (char)dumpTablesToContext:(id)a0 includeAllItems:(char)a1 error:(id *)a2;
- (char)enumerateRecordsNeedingMetadataFetchWithBlock:(id /* block */)a0;
- (char)enumerateRecordsNeedingXattrFetchWithBlock:(id /* block */)a0;
- (char)enumerateRecordsOfType:(long long)a0 block:(id /* block */)a1;
- (void)fetchQueryCursor:(id /* block */)a0;
- (void)fetchTokenState:(id /* block */)a0;
- (void)finishedFetchingXattrSignatures:(id)a0;
- (char)hasBeenCreated;
- (char)hasFetchRecordByID:(id)a0;
- (char)hasRecordDeletes;
- (char)hasRecordIDBlockedOnSubResources:(id)a0;
- (char)hasRecordIDsToDeserialize;
- (char)hasSubResourceRecords;
- (char)hasXattrsToFetch;
- (id)initForListingWithParent:(id)a0 serverZone:(id)a1;
- (id)initWithServerZone:(id)a0;
- (char)saveEditedRecords:(id)a0 deletedRecordIDs:(id)a1 deletedShareIDs:(id)a2 subResourceEditedRecords:(id)a3 serverChangeToken:(id)a4 clientChangeToken:(long long)a5;
- (char)saveEditedRecords:(id)a0 subResourceEditedRecords:(id)a1 queryCursor:(id)a2;
- (char)saveSubResourceRecords:(id)a0 afterSavingMainTableItems:(id)a1 queryCursor:(id)a2;
- (char)unblockRecord:(id)a0 waitingOnRecord:(id)a1;
- (void)unblockRecordSavesWaitingOnRecordID:(id)a0;

@end
