@class NSString, NSURL, NSHashTable, NSObject;
@protocol OS_os_log;

@interface EFSQLConnection : NSObject <EFLoggable> {
    NSHashTable *_preparedStatements;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) struct sqlite3 { } *sqlDB;
@property (readonly, nonatomic) char isOpen;
@property (readonly, nonatomic) NSURL *url;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)isSuccessResultCode:(int)a0 forStep:(char)a1 error:(id *)a2;
+ (char)setFileProtection:(id)a0 forDatabaseAtURL:(id)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (void)close;
- (id)initWithURL:(id)a0;
- (char)openWithError:(id *)a0;
- (void)flush;
- (id)initWithInMemoryDatabase;
- (char)executeStatementString:(id)a0 error:(id *)a1;
- (char)commitTransactionWithError:(id *)a0;
- (char)rollbackTransactionWithError:(id *)a0;
- (char)_isSuccessResultCode:(int)a0 sqlDB:(struct sqlite3 { } *)a1 error:(id *)a2;
- (char)beginTransaction:(long long)a0 error:(id *)a1;
- (char)finalizeStatementsWithError:(id *)a0;
- (id)initWithSQLDB:(struct sqlite3 { } *)a0;
- (char)openWithFlags:(int)a0 error:(id *)a1;
- (id)preparedStatementForQueryString:(id)a0 transactionLabel:(id)a1 queryLogger:(id)a2;
- (id)test_resultsForQueryString:(id)a0;

@end
