@class NSThread, NSConditionLock, ISDDataManager, NSMutableArray;

@interface ISDAdminDatabase : ISDDatabase {
    struct sqlite3_stmt { } *_getAllClientsStatement;
    struct sqlite3_stmt { } *_insertClientStatement;
    struct sqlite3_stmt { } *_removeClientStatement;
    struct sqlite3_stmt { } *_getSyncGenerationStatement;
    struct sqlite3_stmt { } *_setSyncGenerationStatement;
    struct sqlite3_stmt { } *_getSyncStateStatement;
    struct sqlite3_stmt { } *_setSyncStateStatement;
    struct sqlite3_stmt { } *_removeSyncStateForClientStatement;
    struct sqlite3_stmt { } *_removeSyncStateForEntityStatement;
    struct sqlite3_stmt { } *_getEarliestGenerationsForEntitiesStatement;
    struct sqlite3_stmt { } *_getMostRecentSyncDatesForClientsStatement;
    struct sqlite3_stmt { } *_recordSyncModesStatement;
    struct sqlite3_stmt { } *_recordSyncPlanStatement;
    struct sqlite3_stmt { } *_getTableNamesStatement;
    struct sqlite3_stmt { } *_purgeSyncDetailStatement;
    struct sqlite3_stmt { } *_getSyncPlanBeforeDateStatement;
    struct sqlite3_stmt { } *_purgeClientSyncModesStatement;
    NSThread *_threadWithLock;
    NSConditionLock *_transactionLock;
    ISDDataManager *_dataManager;
    NSMutableArray *_dataObjectsToConfigureWithDataManager;
}

+ (BOOL)createDatabaseAtPath:(id)a0;

- (void)finalize;
- (void)dealloc;
- (id)init;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (void)beginTransaction;
- (void)commitTransaction;
- (void)rollbackTransaction;
- (void)closeDatabase;
- (void)commitTransaction:(BOOL)a0;
- (void)setDataManager:(id)a0;
- (void)initializeIVars;
- (void)ensureRecentTablesPresent;
- (void)finalizeStatements;
- (void)executeSQLToUpdateOrInsertSyncState:(id)a0;
- (void)executeSQLToRemoveSyncStatesForClient:(id)a0;
- (id)executeSQLToFetchSyncStatesForClient:(id)a0;
- (void)rollbackTransaction:(BOOL)a0;
- (unsigned long long)executeSQLToFetchSyncGeneration;
- (id)executeSQLToFetchClientsByIdentifier;
- (void)executeSQLToUpdateOrInsertClient:(id)a0;
- (void)updateClient:(id)a0;
- (void)executeSQLToRemoveClient:(id)a0;
- (void)executeSQLToRemoveSyncStatesForEntity:(id)a0;
- (void)executeSQLToUpdateSyncGeneration:(unsigned long long)a0;
- (int)expectedSyncMode:(id)a0;
- (void)recordClientSyncModes:(id)a0 forClient:(id)a1 inSyncPlan:(id)a2;
- (id)initWithDatabaseAtPath:(id)a0 dataManager:(id)a1;
- (BOOL)_releaseAdminDBLockIfNecessary;
- (void)readClients:(id *)a0 syncGeneration:(unsigned int *)a1;
- (void)updateSyncState:(id)a0;
- (void)removeSyncStateForEntity:(id)a0;
- (void)setSyncGeneration:(unsigned long long)a0;
- (void)freeEarliestSyncGenerationsForEntityNamesMapping:(struct _EarliestSyncGenerationForEntityNamesMap { id x0; unsigned int x1; struct _EarliestSyncGenerationForEntityNamesMap *x2; } *)a0;
- (id)createSyncDatesForClientsEarlierThanDate:(id)a0;
- (struct _EarliestSyncGenerationForEntityNamesMap { id x0; unsigned int x1; struct _EarliestSyncGenerationForEntityNamesMap *x2; } *)earliestSyncGenerationMappings;
- (void)recordSyncPlanInformation:(id)a0;
- (void)purgeSyncPlanDetailBefore:(id)a0;

@end
