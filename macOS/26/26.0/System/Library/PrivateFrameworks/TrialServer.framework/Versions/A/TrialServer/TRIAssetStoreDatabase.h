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

@property (readonly, nonatomic) _PASSqliteDatabase *underlyingDatabase;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)migrateToVersion:(unsigned int)a0;
- (BOOL)vacuum;
- (void)_enableQueryPlanLogging;
- (void)closePermanently;
- (BOOL)dropTableWithName:(id)a0 transaction:(id)a1;
- (id)migrations;
- (id)initWithPaths:(id)a0 storageManagement:(id)a1;
- (BOOL)enumerateAllAutoAssetReferencesWithBlock:(id /* block */)a0;
- (id)initWithPaths:(id)a0 assetStorePath:(id)a1 storageManagement:(id)a2;
- (id)init;
- (id)databaseHandle;
- (id)initInMemoryAndPerformMigrations:(BOOL)a0;
- (void)_updateQueryPlanLogging;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int *)a0;
- (void)enumerateAssetIdsWithoutLiveReferencesUsingBlock:(id /* block */)a0;
- (BOOL)addReferenceToAutoAssetId:(id)a0 forLifetimeOfPath:(id)a1;
- (void)enumerateOnDiskMAReferencesWithoutCorrespondingDatabaseEntriesUsingBlock:(id /* block */)a0;
- (void)_disableQueryPlanLogging;
- (void).cxx_destruct;
- (id)initWithPaths:(id)a0 databasePath:(id)a1 storageManagement:(id)a2 performMigrations:(BOOL)a3;

@end
