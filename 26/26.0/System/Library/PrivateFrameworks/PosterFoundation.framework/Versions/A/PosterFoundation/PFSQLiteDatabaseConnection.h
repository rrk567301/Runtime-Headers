@class NSString, NSHashTable, NSObject, NSCache;
@protocol OS_os_log, OS_dispatch_queue;

@interface PFSQLiteDatabaseConnection : NSObject <BSInvalidatable> {
    NSString *_sqliteDatabasePath;
    struct sqlite3 { } *_queue_dbConnection;
    NSCache *_queue_queryCache;
    NSHashTable *_queue_observers;
}

@property (retain) NSObject<OS_os_log> *loggingCategory;
@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) BOOL isReadonly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)executeQuery:(id)a0 error:(out id *)a1;
- (id)lastErrorMessage;
- (void)dealloc;
- (void)invalidate;
- (id)initWithFileURL:(id)a0 dataProtectionClass:(unsigned long long)a1;
- (void)removeObserver:(id)a0;
- (id)initWithInMemoryDatabase;
- (id)init;
- (void)addObserver:(id)a0;
- (id)prepareStatement:(id)a0;
- (BOOL)truncateDatabaseAndReturnError:(out id *)a0;
- (void).cxx_destruct;
- (id)tableNames;
- (id)dataDumpResultOfAllTablesWithError:(out id *)a0;
- (id)dataDumpResultOfQuery:(id)a0 error:(out id *)a1;
- (id)dataDumpResultOfTable:(id)a0 error:(out id *)a1;
- (BOOL)executeQuery:(id)a0 bindings:(id)a1 resultRowHandler:(id /* block */)a2 error:(out id *)a3;
- (BOOL)executeQuery:(id)a0 resultRowHandler:(id /* block */)a1 error:(out id *)a2;
- (id)initWithFileURL:(id)a0 options:(int)a1 dataProtectionClass:(unsigned long long)a2 error:(out id *)a3;

@end
