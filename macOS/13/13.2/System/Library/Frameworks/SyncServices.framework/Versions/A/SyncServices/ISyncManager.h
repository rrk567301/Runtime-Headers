@interface ISyncManager : NSObject

+ (void)initialize;
+ (id)sharedManager;
+ (void)clearThreadISyncRecordSnapshotTable;
+ (id)getThreadISyncRecordSnapshotTable;
+ (void)setSyncServerName:(id)a0 dataDirectoryPath:(id)a1;
+ (void)setDataReferencesDirectory:(id)a0;
+ (unsigned long long)dataWrapperThresholdSize;

- (BOOL)isEnabled;
- (void)addRequestMode:(id)a0;
- (void)removeRequestMode:(id)a0;
- (id)requestModes;
- (id)clientWithIdentifier:(id)a0;
- (void)unregisterClient:(id)a0;
- (void)resetSyncData;
- (id)syncDatesForClientsEarlierThanDate:(bycopy id)a0;
- (void)resetClientsWithLastSyncDatesEarlierThanDate:(bycopy id)a0 purgeTruth:(bycopy BOOL)a1 andVacuum:(bycopy BOOL)a2;
- (void)unregisterSchemaWithName:(id)a0;
- (id)registerClientWithIdentifier:(id)a0 description:(id)a1;
- (id)registerClientWithIdentifier:(id)a0 descriptionFilePath:(id)a1;
- (void)registerSchemaWithDescriptionFilePath:(id)a0;
- (BOOL)registerSchemaWithBundlePath:(id)a0;
- (void)clientWithIdentifier:(id)a0 needsSyncing:(BOOL)a1;
- (id)syncDisabledReason;
- (id)snapshotOfRecordsInTruthWithEntityNames:(id)a0 usingIdentifiersForClient:(id)a1;

@end
