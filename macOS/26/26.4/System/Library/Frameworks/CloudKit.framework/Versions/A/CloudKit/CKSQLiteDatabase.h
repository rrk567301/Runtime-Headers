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
+ (id)lastSuccessfulOpenDate:(const char *)a0;
+ (id)databaseInDirectory:(id)a0 registryDatabase:(id)a1 options:(unsigned long long)a2 error:(id *)a3;
+ (void)setValue:(long long)a0 forAttribute:(const char *)a1 atPath:(const char *)a2;
+ (long long)valueForAttribute:(const char *)a0 atPath:(const char *)a1;
+ (id)newInMemoryDatabase:(id *)a0;
+ (id)unarchivedObjectOfClass:(id)a0 fromDatabaseArchive:(id)a1 error:(id *)a2;
+ (void)setLastSuccessfulOpenDate:(id)a0 dbPath:(const char *)a1;
+ (void)setOpenAttemptCount:(long long)a0 dbPath:(const char *)a1;
+ (id)databaseFilePathInDirectory:(id)a0;
+ (long long)openAttemptCountAtPath:(const char *)a0;
+ (id)temporaryDatabaseDirectory;
+ (id)databaseArchiveWithObject:(id)a0 error:(id *)a1;
+ (BOOL)databaseDidDealloc:(id)a0 timeout:(double)a1;

- (id)dropTable:(id)a0;
- (unsigned long long)changeCount;
- (id)validateOpenDatabase;
- (id)createNewDatabase;
- (void)handleDatabaseBusy:(id)a0;
- (id)performDatabaseTransaction:(id /* block */)a0;
- (id)executeSQL:(id)a0;
- (id)databaseManager:(id *)a0;
- (id)tocTableGroup;
- (id)sqlErrorWithMessage:(id)a0;
- (void)assertInTransaction;
- (BOOL)isSimulatingTableGroupMigration;
- (id)openExistingDatabase;
- (void *)compiledStatementWithSQL:(id)a0 error:(id *)a1;
- (BOOL)needsValidation;
- (id)performInDatabaseTransaction:(id /* block */)a0;
- (void)addTransactionCompletionHandler:(id /* block */)a0;
- (id)databaseFilePath;
- (BOOL)isInMemoryDatabase;
- (void).cxx_destruct;
- (void)setupDatabaseConnection;
- (id)_migrateTOC;
- (id)initWithDatabaseDirectory:(id)a0 UUID:(id)a1 registryDatabase:(id)a2 options:(unsigned long long)a3;
- (id)_executeSQL:(const char *)a0;
- (id)allTableNames:(id *)a0;
- (id)deallocToken;
- (long long)lastInsertRowID;
- (id)bootstrap;
- (id)performDatabaseTransactionWithoutForeignKeyConstraints:(id /* block */)a0;
- (id)resetValidation;
- (void)closeDatabase;
- (id)description;
- (void)usingTableGroupCachePerformBlock:(id /* block */)a0;
- (void)traceSQL;
- (void)dealloc;
- (void)finalizeHandle:(void *)a0;
- (id)removeDatabaseDirectory;

@end
