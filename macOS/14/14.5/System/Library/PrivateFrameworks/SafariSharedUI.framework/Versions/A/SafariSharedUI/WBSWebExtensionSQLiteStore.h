@class NSString, WBSSQLiteDatabase, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface WBSWebExtensionSQLiteStore : NSObject {
    NSString *_composedIdentifier;
    WBSSQLiteDatabase *_database;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    BOOL _useInMemoryDatabase;
}

@property (readonly, nonatomic) int _currentDatabaseSchemaVersion;
@property (readonly, nonatomic) NSURL *_databaseURL;
@property (copy, nonatomic) NSString *profileServerID;
@property (readonly, nonatomic) BOOL useInMemoryDatabase;

+ (id)_urlForExtensionStorageFolderWithIdentifier:(id)a0 profileServerID:(id)a1;
+ (void)deleteStorageForComposedIdentifier:(id)a0 profileServerID:(id)a1 completionHandler:(id /* block */)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_vacuum;
- (BOOL)_isDatabaseOpen;
- (id)_deleteDatabase;
- (int)_createFreshDatabaseSchema;
- (id)_deleteDatabaseFileAtURL:(id)a0 reopenDatabase:(BOOL)a1;
- (id)_deleteDatabaseIfEmpty;
- (void)_deleteExtensionStorageFolderIfEmpty;
- (id)_handleSchemaVersioningWithDeleteDatabaseFileOnError:(BOOL)a0;
- (BOOL)_isDatabaseEmpty;
- (int)_migrateToCurrentSchemaVersionIfNeeded;
- (id)_openDatabase:(id)a0 deleteDatabaseFileOnError:(BOOL)a1;
- (BOOL)_openDatabaseIfNecessaryReturningErrorMessage:(id *)a0;
- (int)_resetDatabaseSchema;
- (id)_savepointNameFromUUID:(id)a0;
- (int)_setDatabaseSchemaVersion:(int)a0;
- (void)commitSavepoint:(id)a0 completionHandler:(id /* block */)a1;
- (void)createSavepointWithCompletionHandler:(id /* block */)a0;
- (void)deleteDatabaseWithCompletionHandler:(id /* block */)a0;
- (void)rollbackToSavepoint:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithComposedIdentifier:(id)a0 profileServerID:(id)a1 usesInMemoryDatabase:(BOOL)a2;

@end
