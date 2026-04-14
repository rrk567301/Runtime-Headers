@class NSUUID, NSString, CKSQLiteDatabaseManagerTimer, CKSQLiteTOCTableGroup, NSMutableArray, NSObject, NSMapTable;
@protocol OS_dispatch_group;

@interface CKSQLiteDatabase : NSObject {
    struct { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } lock; _Atomic unsigned long long accessThread; } _serializer;
    struct sqlite3 { } *_db;
    CKSQLiteTOCTableGroup *_tocTableGroup;
    unsigned long long _transactionNestCount;
    NSMutableArray *_transactionCompletionHandlers;
    NSObject<OS_dispatch_group> *_databaseGroup;
    CKSQLiteDatabase *_registryDatabase;
}

@property (readonly, nonatomic) NSMapTable *tableGroupCache;
@property (nonatomic) BOOL isEmpty;
@property (retain, nonatomic) CKSQLiteDatabaseManagerTimer *databaseManagerTimer;
@property (retain, nonatomic) NSObject *databaseManagerData;
@property (readonly, copy, nonatomic) NSString *databaseDirectory;
@property (readonly, nonatomic) BOOL databaseWasCreated;
@property (nonatomic) BOOL removeWhenClosed;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) NSUUID *uuid;

+ (void)initialize;
+ (id)unarchivedObjectOfClass:(id)a0 fromDatabaseArchive:(id)a1 error:(id *)a2;
+ (id)newInMemoryDatabase:(id *)a0;
+ (id)databaseArchiveWithObject:(id)a0 error:(id *)a1;
+ (id)databaseInDirectory:(id)a0 registryDatabase:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
+ (id)databaseFilePathInDirectory:(id)a0;
+ (BOOL)databaseDidDealloc:(id)a0 timeout:(double)a1;
+ (id)temporaryDatabaseDirectory;

- (unsigned long long)changeCount;
- (id)executeSQL:(id)a0;
- (void)closeDatabase;
- (id)_migrateTOC;
- (BOOL)isSimulatingTableGroupMigration;
- (id)deallocToken;
- (id)performDatabaseTransactionWithoutForeignKeyConstraints:(id /* block */)a0;
- (BOOL)isInMemoryDatabase;
- (id)openExistingDatabase;
- (void)addTransactionCompletionHandler:(id /* block */)a0;
- (void)setupDatabaseConnection;
- (id)databaseFilePath;
- (void)finalizeHandle:(void *)a0;
- (void)assertInTransaction;
- (void)handleDatabaseBusy:(id)a0;
- (id)removeDatabaseDirectory;
- (void)traceSQL;
- (id)allTableNames:(id *)a0;
- (void)usingTableGroupCachePerformBlock:(id /* block */)a0;
- (id)createNewDatabase;
- (void).cxx_destruct;
- (id)performInDatabaseTransaction:(id /* block */)a0;
- (id)initWithDatabaseDirectory:(id)a0 UUID:(id)a1 registryDatabase:(id)a2 options:(unsigned long long)a3;
- (long long)lastInsertRowID;
- (id)description;
- (void *)compiledStatementWithSQL:(id)a0 error:(id *)a1;
- (id)performDatabaseTransaction:(id /* block */)a0;
- (id)_executeSQL:(const char *)a0;
- (id)dropTable:(id)a0;
- (id)validateOpenDatabase;
- (id)bootstrap;
- (id)sqlErrorWithMessage:(id)a0;
- (id)resetValidation;
- (id)tocTableGroup;
- (BOOL)needsValidation;
- (void)dealloc;
- (id)databaseManager:(id *)a0;

@end
