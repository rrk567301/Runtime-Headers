@class HMFUnfairLock, NSString, NSURL;

@interface HMBSQLContext : HMFObject <HMFLogging> {
    struct sqlite3_stmt { } *_begin;
    struct sqlite3_stmt { } *_commit;
    struct sqlite3_stmt { } *_rollback;
}

@property (retain, nonatomic) HMFUnfairLock *lock;
@property (nonatomic) struct sqlite3 { } *context;
@property (nonatomic) BOOL finalized;
@property (retain, nonatomic) NSString *logIdentifier;
@property (readonly, nonatomic) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (void)finalize;
- (void).cxx_destruct;
- (void)close;
- (id)initWithURL:(id)a0;
- (id)commit;
- (id)begin;
- (void)rollback;
- (id)attributeDescriptions;
- (BOOL)prepareWithError:(id *)a0;
- (BOOL)fetchSQLite3:(struct sqlite3_stmt { } *)a0 limit:(unsigned long long)a1 error:(id *)a2 block:(id /* block */)a3;
- (long long)migrateFromSchemaVersion:(long long)a0 error:(id *)a1;
- (id)execSQLite3:(struct sqlite3_stmt { } *)a0;
- (unsigned long long)execSQLite3:(struct sqlite3_stmt { } *)a0 error:(id *)a1;
- (BOOL)fetchSQLite3:(struct sqlite3_stmt { } *)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)fetchSQLite3One:(struct sqlite3_stmt { } *)a0 error:(id *)a1 block:(id /* block */)a2;
- (BOOL)initializeNewlyCreatedDatabaseWithError:(id *)a0;
- (unsigned long long)insertSQLite3:(struct sqlite3_stmt { } *)a0 error:(id *)a1;
- (id)runSQLite3:(const char *)a0;
- (BOOL)runSQLite3:(const char *)a0 error:(id *)a1;
- (BOOL)setSchemaVersion:(long long)a0 error:(id *)a1;
- (id)sqlBlockWithActivity:(id)a0 block:(id /* block */)a1;
- (id)sqlTransactionWithActivity:(id)a0 block:(id /* block */)a1;

@end
