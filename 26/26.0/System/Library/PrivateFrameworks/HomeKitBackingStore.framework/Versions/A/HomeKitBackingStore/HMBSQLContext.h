@class HMBPreparedStatementsCache, NSString, NSURL, HMFMemoryMonitor;

@interface HMBSQLContext : HMFObject <HMFMemoryObserver, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) HMFMemoryMonitor *memoryMonitor;
@property (readonly, nonatomic) HMBPreparedStatementsCache *preparedStatementsCache;
@property (nonatomic) struct sqlite3 { } *connection;
@property (nonatomic) BOOL finalized;
@property (retain, nonatomic) NSString *logIdentifier;
@property (readonly, nonatomic) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)commit;
- (void)rollback;
- (void)finalize;
- (void)memoryMonitor:(id)a0 didReceiveMemoryEvent:(long long)a1;
- (void)_configureMemoryPressureHandler;
- (id)begin;
- (BOOL)prepareWithError:(id *)a0;
- (void)_clearPreparedStatementsCache;
- (id)sqlBlockWithActivity:(id)a0 block:(id /* block */)a1;
- (BOOL)fetchSQLite3One:(struct sqlite3_stmt { } *)a0 error:(id *)a1 block:(id /* block */)a2;
- (void)dealloc;
- (BOOL)fetchSQLite3:(struct sqlite3_stmt { } *)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)setSchemaVersion:(long long)a0 error:(id *)a1;
- (unsigned long long)insertSQLite3:(struct sqlite3_stmt { } *)a0 error:(id *)a1;
- (id)attributeDescriptions;
- (BOOL)initializeNewlyCreatedDatabaseWithError:(id *)a0;
- (BOOL)runSQLite3:(const char *)a0 error:(id *)a1;
- (struct sqlite3_stmt { } *)_statementForString:(const char *)a0 error:(id *)a1;
- (BOOL)fetchSQLite3:(struct sqlite3_stmt { } *)a0 limit:(unsigned long long)a1 error:(id *)a2 block:(id /* block */)a3;
- (id)runSQLite3:(const char *)a0;
- (id)_performBlockWithContextManagedStatementForString:(const char *)a0 block:(id /* block */)a1;
- (id)initWithURL:(id)a0;
- (id)sqlTransactionWithActivity:(id)a0 block:(id /* block */)a1;
- (unsigned long long)execSQLite3:(struct sqlite3_stmt { } *)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 preparedStatementsCache:(id)a1 memoryMonitor:(id)a2;
- (void).cxx_destruct;
- (long long)migrateFromSchemaVersion:(long long)a0 error:(id *)a1;
- (id)execSQLite3:(struct sqlite3_stmt { } *)a0;

@end
