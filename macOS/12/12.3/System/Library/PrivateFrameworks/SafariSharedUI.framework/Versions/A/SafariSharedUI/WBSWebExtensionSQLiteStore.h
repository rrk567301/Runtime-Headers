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
@property (readonly, nonatomic) BOOL useInMemoryDatabase;

+ (void)deleteStorageForComposedIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (id)_urlForExtensionStorageFolderWithIdentifier:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_vacuum;
- (id)_deleteDatabase;
- (int)_createFreshDatabaseSchema;
- (int)_migrateToCurrentSchemaVersionIfNeeded;
- (BOOL)_isDatabaseOpen;
- (int)_setDatabaseSchemaVersion:(int)a0;
- (void)deleteDatabaseWithCompletionHandler:(id /* block */)a0;
- (id)initWithComposedIdentifier:(id)a0 usesInMemoryDatabase:(BOOL)a1;
- (BOOL)_openDatabaseIfNecessaryReturningErrorMessage:(id *)a0;
- (id)_deleteDatabaseIfEmpty;
- (int)_resetDatabaseSchema;
- (BOOL)_isDatabaseEmpty;
- (void)rollbackToSavepoint:(id)a0 completionHandler:(id /* block */)a1;
- (void)commitSavepoint:(id)a0 completionHandler:(id /* block */)a1;
- (void)createSavepointWithCompletionHandler:(id /* block */)a0;
- (id)_savepointNameFromUUID:(id)a0;
- (id)_openDatabase:(id)a0 deleteDatabaseFileOnError:(BOOL)a1;
- (id)_deleteDatabaseFileAtURL:(id)a0 reopenDatabase:(BOOL)a1;
- (id)_handleSchemaVersioningWithDeleteDatabaseFileOnError:(BOOL)a0;
- (void)_deleteExtensionStorageFolderIfEmpty;

@end
