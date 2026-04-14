@class _PASSqliteDatabase, NSString, _PASKVOHandler, NSUserDefaults;
@protocol TRIStorageManagementProtocol, TRIPaths;

@interface TRIAssetStoreDatabase : NSObject <_PASDatabaseMigrationProtocol> {
    id<TRIPaths> _paths;
    id<TRIStorageManagementProtocol> _storageManagement;
    NSString *_databasePath;
    _PASSqliteDatabase *_db;
    NSUserDefaults *_defaults;
    _PASKVOHandler *_kvoHandler;
    _Atomic BOOL _isQueryPlanLoggingEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)vacuum;
- (id)databaseHandle;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int *)a0;
- (id)migrations;
- (void)closePermanently;
- (BOOL)migrateToVersion:(unsigned int)a0;
- (id)initWithPaths:(id)a0 storageManagement:(id)a1;
- (id)initInMemoryAndPerformMigrations:(BOOL)a0;
- (id)initWithPaths:(id)a0 databasePath:(id)a1 storageManagement:(id)a2 performMigrations:(BOOL)a3;
- (BOOL)dropTableWithName:(id)a0 transaction:(id)a1;
- (void)_updateQueryPlanLogging;
- (void)_enableQueryPlanLogging;
- (void)_disableQueryPlanLogging;
- (BOOL)addReferenceToAutoAssetId:(id)a0 forLifetimeOfPath:(id)a1;
- (void)enumerateOnDiskMAReferencesWithoutCorrespondingDatabaseEntriesUsingBlock:(id /* block */)a0;
- (void)enumerateAssetIdsWithoutLiveReferencesUsingBlock:(id /* block */)a0;

@end
