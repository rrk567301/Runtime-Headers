@class PPClientFeedbackHelper, _PASLock;

@interface PPXPCNamedEntityStore : PPNamedEntityStore {
    PPClientFeedbackHelper *_clientFeedbackHelper;
    _PASLock *_monitoringSessionsLock;
}

- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 deletedCount:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)clearWithError:(id *)a0 deletedCount:(unsigned long long *)a1;
- (void)registerFeedback:(id)a0 completion:(id /* block */)a1;
- (BOOL)flushDonationsWithError:(id *)a0;
- (BOOL)iterRankedNamedEntitiesWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)cloudSyncWithError:(id *)a0;
- (BOOL)removeMapItemForPlaceName:(id)a0 error:(id *)a1;
- (BOOL)iterNamedEntityRecordsWithQuery:(id)a0 error:(id *)a1 block:(id /* block */)a2;
- (id)rankedNamedEntitiesWithQuery:(id)a0 error:(id *)a1;
- (id)_init;
- (void)unloadMonitoringDelegate:(id)a0;
- (void)_sendResetToAllDelegatesForQuery:(id)a0;
- (BOOL)removeMapItemsBeforeCutoffDate:(id)a0 error:(id *)a1;
- (BOOL)donateNamedEntities:(id)a0 source:(id)a1 algorithm:(unsigned long long)a2 cloudSync:(BOOL)a3 sentimentScore:(double)a4 error:(id *)a5;
- (BOOL)donateLocationNamedEntities:(id)a0 bundleId:(id)a1 groupId:(id)a2 error:(id *)a3;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 groupId:(id)a1 olderThan:(id)a2 deletedCount:(unsigned long long *)a3 error:(id *)a4;
- (void)setClientIdentifier:(id)a0;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 groupIds:(id)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (id)clientIdentifier;
- (BOOL)deleteAllNamedEntitiesFromSourcesWithBundleId:(id)a0 documentIds:(id)a1 deletedCount:(unsigned long long *)a2 error:(id *)a3;
- (id)_monitoringHelperForQuery:(id)a0 createIfNeeded:(BOOL)a1;
- (BOOL)loadNamedEntityRecordsAndMonitorChangesWithDelegate:(id)a0 error:(id *)a1;
- (id)namedEntityRecordsWithQuery:(id)a0 error:(id *)a1;
- (void)_sendChangesToDelegatesForQuery:(id)a0;
- (void).cxx_destruct;
- (void)_loadNamedEntityRecordsForQuery:(id)a0 withDelegate:(id)a1;
- (id)mapItemForPlaceName:(id)a0 error:(id *)a1;
- (id)_lastCallDateForQuery:(id)a0;
- (void)_setLastCallDateForQuery:(id)a0;
- (BOOL)loadNamedEntityRecordsAndMonitorChangesWithDelegate:(id)a0 query:(id)a1 error:(id *)a2;
- (id /* block */)_recordGeneratorForQuery:(id)a0;
- (BOOL)donateMapItem:(id)a0 forPlaceName:(id)a1 error:(id *)a2;

@end
