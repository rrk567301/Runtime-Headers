@class NSDate, CKVDatabaseConnection, NSURL, CKVSettings, CKVSkitWriter, CKVFilesystemBase, NSObject, CKVIndexMaintenanceLog;
@protocol CKVDatabaseReadOnlyAccess, OS_dispatch_queue, CKVSkitReadAccess;

@interface CKVIndexManager : NSObject {
    CKVFilesystemBase *_filesystemBase;
    NSObject<OS_dispatch_queue> *_queue;
    CKVSettings *_settings;
    CKVDatabaseConnection *_readWriteDatabase;
    CKVSkitWriter *_writeOnlySkit;
    CKVIndexMaintenanceLog *_maintenanceLog;
    NSDate *_migrationStartTime;
}

@property (retain) NSObject<CKVDatabaseReadOnlyAccess> *readOnlyDatabase;
@property (retain) NSObject<CKVSkitReadAccess> *readOnlySkit;
@property (readonly, nonatomic) NSURL *databaseFileURL;
@property (readonly, nonatomic) NSURL *skitDirectoryURL;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)performMaintenance;
- (id)accessReadOnlySkit;
- (id)accessReadOnlyDatabase;
- (BOOL)destroyAllState;
- (id)initWithFilesystemBase:(id)a0 settings:(id)a1;
- (void)closeAllConnections;
- (void)resetWithFilesystemBase:(id)a0;
- (unsigned long long)submitDatabaseAndSkitTransactionBlock:(id /* block */)a0;
- (id)_maintenanceLog;
- (BOOL)destroySkit;
- (BOOL)submitSkitTransactionBlock:(id /* block */)a0;
- (BOOL)initiateMigration;
- (void)recordMigrationCompleted;
- (void)_setReadOnlyDatabaseAccess;
- (void)_setReadOnlySkitAccess;
- (BOOL)_isDatabaseCreated;
- (BOOL)_setReadWriteDatabaseAccess:(BOOL *)a0;
- (BOOL)_isDatabaseSchemaIncompatible;
- (BOOL)_destroyAllState;
- (BOOL)_setReadWriteDatabaseAccess;
- (BOOL)_isSkitDirectoryCreated;
- (BOOL)_setWriteOnlySkitAccessWithFlushThreshold:(unsigned long long)a0;
- (BOOL)_isReadOnlyDatabaseARealConnection;
- (BOOL)_isReadOnlySkitARealConnection;
- (void)_closeAllConnections;
- (BOOL)_executeDatabaseTransactionBlock:(id /* block */)a0;
- (void)_ensureDatabaseReadWriteAccess;
- (BOOL)_executeSkitTransactionBlock:(id /* block */)a0;
- (void)_ensureSkitWriteAccessWithFlushThreshold:(unsigned long long)a0;
- (unsigned long long)_executeDatabaseAndSkitTransactionBlock:(id /* block */)a0;
- (BOOL)_initiateMigration;
- (BOOL)_shouldCleanupDatabase:(id)a0;
- (BOOL)submitDatabaseTransactionBlock:(id /* block */)a0;

@end
