@class WBSSQLiteDatabase, NSURL, NSObject;
@protocol OS_dispatch_queue, WBSSQLiteStoreDelegate;

@interface WBSSQLiteStore : NSObject {
    long long _databaseLockingPolicy;
    long long _protectionType;
    int _databaseCoordinationLockFileDescriptor;
    char _fallBackToMemoryStoreIfError;
}

@property (readonly, nonatomic) WBSSQLiteDatabase *database;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *databaseQueue;
@property (readonly, nonatomic) NSURL *databaseURL;
@property (weak, nonatomic) id<WBSSQLiteStoreDelegate> delegate;
@property (readonly, nonatomic) char isOpen;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)closeWithCompletionHandler:(id /* block */)a0;
- (int)_createFreshDatabaseSchema;
- (int)_setDatabaseSchemaVersion:(int)a0;
- (void)_closeDatabase;
- (int)_currentSchemaVersion;
- (int)_migrateToCurrentSchemaVersionIfNecessary;
- (int)_migrateToSchemaVersion:(int)a0;
- (void)openAndCheckIntegrity:(char)a0 createIfNeeded:(char)a1 fallBackToMemoryStoreIfError:(char)a2 lockingPolicy:(long long)a3 completionHandler:(id /* block */)a4;
- (void)savePendingChangesBeforeTermination;
- (char)_acquireDatabaseCoordinationLockForDatabaseURL:(id)a0;
- (char)_confirmDatabaseIntegrityIsOK;
- (id)_databaseCoordinationLockURLForDatabaseURL:(id)a0;
- (void)_databaseWillClose;
- (void)_handleOpenFailureWithStatus:(long long)a0 completionHandler:(id /* block */)a1;
- (char)_isDatabaseLocked;
- (void)_openDatabase:(id)a0 createIfNeeded:(char)a1 checkIntegrity:(char)a2 completionHandler:(id /* block */)a3;
- (void)_releaseDatabaseCoordinationLock;
- (id)initWithURL:(id)a0 protectionType:(long long)a1;

@end
