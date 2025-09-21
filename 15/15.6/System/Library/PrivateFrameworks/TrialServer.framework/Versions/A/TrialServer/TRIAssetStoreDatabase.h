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

- (id)init;
- (void).cxx_destruct;
- (char)vacuum;
- (void)closePermanently;
- (id)databaseHandle;
- (id)migrations;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int *)a0;
- (char)migrateToVersion:(unsigned int)a0;
- (id)initWithPaths:(id)a0 databasePath:(id)a1 storageManagement:(id)a2 performMigrations:(char)a3;
- (void)_disableQueryPlanLogging;
- (void)_enableQueryPlanLogging;
- (void)_updateQueryPlanLogging;
- (char)addReferenceToAutoAssetId:(id)a0 forLifetimeOfPath:(id)a1;
- (char)dropTableWithName:(id)a0 transaction:(id)a1;
- (char)enumerateAllAutoAssetReferencesWithBlock:(id /* block */)a0;
- (void)enumerateAssetIdsWithoutLiveReferencesUsingBlock:(id /* block */)a0;
- (void)enumerateOnDiskMAReferencesWithoutCorrespondingDatabaseEntriesUsingBlock:(id /* block */)a0;
- (id)initInMemoryAndPerformMigrations:(char)a0;
- (id)initWithPaths:(id)a0 assetStorePath:(id)a1 storageManagement:(id)a2;
- (id)initWithPaths:(id)a0 storageManagement:(id)a1;

@end
