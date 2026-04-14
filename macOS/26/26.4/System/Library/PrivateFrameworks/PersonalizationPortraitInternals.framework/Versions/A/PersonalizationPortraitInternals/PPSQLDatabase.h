@class NSRecursiveLock, NSString, NSCondition, PPSQLDatabaseHandlePool;

@interface PPSQLDatabase : NSObject <_PASDatabaseMigrationProtocol> {
    NSRecursiveLock *_writeLock;
    PPSQLDatabaseHandlePool *_handlePool;
    NSCondition *_handlePoolCond;
    NSString *_path;
    NSString *_parentDirectory;
    unsigned char _migrationCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)nonMigratingToolsInstance;
+ (id)createTempTableContainingRowsFromQuery:(id)a0 descriptiveTableName:(id)a1 txnWitness:(id)a2 bind:(id /* block */)a3;
+ (id)nonMigratingToolsInstanceWithParentDirectory:(id)a0;
+ (void)dropViewWithName:(id)a0 txnWitness:(id)a1;
+ (id)tableNameForTable:(unsigned char)a0;
+ (void)dropTableWithName:(id)a0 txnWitness:(id)a1;
+ (id)createTempViewContainingRowsFromQuery:(id)a0 descriptiveTableName:(id)a1 txnWitness:(id)a2;

- (BOOL)isInMemory;
- (id)migrations;
- (BOOL)migrateToVersion:(unsigned int)a0;
- (BOOL)_isCorruptionMarkerPresent;
- (void)writeTransactionWithClient:(unsigned char)a0 block:(id /* block */)a1;
- (BOOL)vacuumDatabaseWithShouldContinueBlock:(id /* block */)a0;
- (unsigned long long)maxSchemaVersion;
- (id)checkWithError:(id *)a0;
- (unsigned char)migration_ConvertLocationDescriptionsToLowercase;
- (void)_releaseReadOnlyHandle:(id)a0 client:(unsigned char)a1;
- (id)parentDirectory;
- (id)_initWithPath:(id)a0 performMigrations:(BOOL)a1;
- (BOOL)optimizeDatabaseWithShouldContinueBlock:(id /* block */)a0;
- (BOOL)unmigrate;
- (id)_acquireReadOnlyHandleWithClient:(unsigned char)a0;
- (id)_nullableHandleWithClient:(unsigned char)a0;
- (id)_initInStandardParentDirectoryWithPerformMigrations:(BOOL)a0;
- (BOOL)_prepareDatabaseHandleForMigration;
- (void).cxx_destruct;
- (id)_openFreshHandleForClient:(unsigned char)a0;
- (id)sourceStats:(unsigned long long)a0 forTableWithName:(id)a1 txnWitness:(id)a2;
- (BOOL)_handleCorruption;
- (id)initWithTemporaryInMemoryDatabaseAndPerformMigrations:(BOOL)a0;
- (id)stats;
- (id)databaseHandle;
- (void)_disableQueryLoggingForHandle:(id)a0;
- (id)initWithParentDirectory:(id)a0 performMigrations:(BOOL)a1;
- (id)init;
- (void)_enableQueryLoggingForHandle:(id)a0;
- (id)_allTables;
- (BOOL)_removeCorruptionMarker;
- (id)sourceStats:(unsigned long long)a0;
- (id)handleWithClient:(unsigned char)a0;
- (BOOL)writeTransactionWithClient:(unsigned char)a0 timeoutInSeconds:(double)a1 block:(id /* block */)a2;
- (void)readTransactionWithClient:(unsigned char)a0 block:(id /* block */)a1;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int *)a0;

@end
