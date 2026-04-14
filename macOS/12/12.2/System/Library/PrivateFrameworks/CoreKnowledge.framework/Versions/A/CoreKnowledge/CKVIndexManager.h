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
- (unsigned long long)submitDatabaseAndSkitTransactionBlock:(id /* block */)a0;
- (id)accessReadOnlyDatabase;
- (BOOL)destroyAllState;
- (void)resetWithFilesystemBase:(id)a0;
- (void)closeAllConnections;
- (id)initWithFilesystemBase:(id)a0 settings:(id)a1;
- (BOOL)submitSkitTransactionBlock:(id /* block */)a0;
- (BOOL)destroySkit;
- (void)recordMigrationCompleted;
- (BOOL)initiateMigration;
- (id)_maintenanceLog;
- (void)_setReadOnlyDatabaseAccess;
- (BOOL)_setReadWriteDatabaseAccess;
- (void)_ensureDatabaseReadWriteAccess;
- (void)_setReadOnlySkitAccess;
- (BOOL)_setWriteOnlySkitAccessWithFlushThreshold:(unsigned long long)a0;
- (void)_ensureSkitWriteAccessWithFlushThreshold:(unsigned long long)a0;
- (void)_closeAllConnections;
- (BOOL)_isDatabaseCreated;
- (BOOL)_isSkitDirectoryCreated;
- (BOOL)_isReadOnlyDatabaseARealConnection;
- (BOOL)_isReadOnlySkitARealConnection;
- (BOOL)submitDatabaseTransactionBlock:(id /* block */)a0;
- (BOOL)_executeDatabaseTransactionBlock:(id /* block */)a0;
- (BOOL)_executeSkitTransactionBlock:(id /* block */)a0;
- (BOOL)_destroyAllState;
- (unsigned long long)_executeDatabaseAndSkitTransactionBlock:(id /* block */)a0;
- (BOOL)_isDatabaseSchemaIncompatible;
- (BOOL)_initiateMigration;
- (BOOL)_shouldCleanupDatabase:(id)a0;

@end
