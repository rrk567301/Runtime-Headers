@class EFSQLConnection, NSString, EDPersistenceDatabaseJournal, NSObject;
@protocol OS_os_log, EDPersistenceDatabaseConnectionDelegate;

@interface EDPersistenceDatabaseConnection : NSObject <EFLoggable> {
    char _isWriter;
    NSString *_protectedDatabaseName;
    NSString *_journalDatabaseName;
    EDPersistenceDatabaseJournal *_journal;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, weak, nonatomic) id<EDPersistenceDatabaseConnectionDelegate> delegate;
@property (readonly, nonatomic) EFSQLConnection *sqlConnection;
@property (readonly, nonatomic) NSString *basePath;
@property (readonly, nonatomic) NSString *fullPath;
@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic) char protectedDatabaseAttached;
@property (readonly, nonatomic) char journalDatabaseAttached;
@property (copy, nonatomic) NSString *transactionLabel;
@property (nonatomic) char hadIOError;
@property (readonly, nonatomic) struct sqlite3 { } *sqlDB;
@property (readonly, nonatomic) char isWriter;
@property (readonly, nonatomic) long long lastInsertedDatabaseID;
@property (readonly, nonatomic) long long transactionGeneration;
@property (readonly, nonatomic) unsigned long long rowsChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)open;
- (char)tableExists:(id)a0;
- (id)SQLQueryLogger;
- (char)attachJournalDatabase:(id)a0 withName:(id)a1;
- (char)attachJournalDatabase:(id)a0 withName:(id)a1 error:(id *)a2;
- (char)attachProtectedDatabaseWithName:(id)a0;
- (char)attachProtectedDatabaseWithName:(id)a0 error:(id *)a1;
- (char)attachProtectedDatabaseWithName:(id)a0 url:(id)a1 error:(id *)a2;
- (char)checkForConnectionErrorWithMessage:(id)a0;
- (void)clearLastInsertedDatabaseID;
- (char)columnExists:(id)a0 inTable:(id)a1 database:(id)a2 type:(unsigned long long *)a3;
- (char)columnExists:(id)a0 inTable:(id)a1 type:(unsigned long long *)a2;
- (int)configureSQLConnection;
- (unsigned long long)countForSelectStatement:(id)a0;
- (id)databaseIDsForSelectStatement:(id)a0;
- (char)databaseIsAttached:(id)a0;
- (char)detachJournalDatabase;
- (void)detachProtectedDatabase;
- (char)executeDeleteStatement:(id)a0 error:(id *)a1;
- (char)executeDeleteStatement:(id)a0 rowsChanged:(unsigned long long *)a1;
- (char)executeInsertStatement:(id)a0 error:(id *)a1;
- (char)executeInsertStatement:(id)a0 rowsChanged:(unsigned long long *)a1;
- (char)executeSelectStatement:(id)a0 withBlock:(id /* block */)a1 error:(id *)a2;
- (char)executeStatementString:(id)a0 errorMessage:(id)a1;
- (char)executeUpdateStatement:(id)a0 error:(id *)a1;
- (char)executeUpdateStatement:(id)a0 rowsChanged:(unsigned long long *)a1;
- (char)executeUpsertStatement:(id)a0 error:(id *)a1;
- (char)executeUpsertStatement:(id)a0 rowsChanged:(unsigned long long *)a1;
- (void)handleError:(id)a0 message:(id)a1;
- (void)handleSQLResult:(int)a0 message:(id)a1;
- (id)initForInMemoryDatabaseIsWriter:(char)a0 delegate:(id)a1;
- (id)initWithBasePath:(id)a0 databaseName:(id)a1 isWriter:(char)a2 delegate:(id)a3;
- (id)initWithSQLDB:(struct sqlite3 { } *)a0 isWriter:(char)a1 delegate:(id)a2;
- (void)performBlockAfterTransaction:(id /* block */)a0;
- (char)performWithOptions:(unsigned long long)a0 transactionError:(id *)a1 block:(id /* block */)a2;
- (id)preparedStatementForQueryString:(id)a0;
- (void)setIsWriter:(char)a0;
- (char)tableExists:(id)a0 inDatabase:(id)a1;
- (long long)transactionTypeForWriting;

@end
