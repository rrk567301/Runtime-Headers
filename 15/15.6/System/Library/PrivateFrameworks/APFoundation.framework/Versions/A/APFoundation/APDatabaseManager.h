@class NSString, APDeviceLockedTask, APUnfairLock;

@interface APDatabaseManager : NSObject

@property (nonatomic) struct sqlite3 { } *database;
@property (retain, nonatomic) APUnfairLock *lock;
@property (retain, nonatomic) APDeviceLockedTask *deviceLockedTask;
@property (retain, nonatomic) NSString *dbName;
@property (nonatomic) long long currentVersion;
@property (nonatomic) int openConnectionResult;
@property (nonatomic) char classCDataAvaliable;

+ (id)mainDatabase;

- (id)init;
- (void).cxx_destruct;
- (void)optimize;
- (char)_setUserVersion:(long long)a0;
- (char)executeQuery:(id)a0 withParameters:(id)a1;
- (char)openDatabaseConnectionWithName:(id)a0;
- (char)_bindParameters:(id)a0 toStatement:(struct sqlite3_stmt { } *)a1;
- (id)_executePragmaSelectQuery:(id)a0;
- (char)_executeQueryFromString:(id)a0;
- (char)_handleEventTablesDynamicMigrationWithQuery:(id)a0 version:(int)a1;
- (char)_isConnectionOpen;
- (char)_isConnectionValidWithErrorDescription:(id)a0;
- (void)_openDBConnectionCanRepeat:(char)a0 databasePath:(id)a1;
- (struct sqlite3_stmt { } *)_prepareStatementForQuery:(id)a0;
- (int)_runTransactionStatement:(int)a0;
- (char)_updateVersionForPath:(id)a0;
- (id)_userVersion;
- (void)closeDatabaseConnection;
- (long long)executeInsertQuery:(id)a0 withParameters:(id)a1;
- (char)executeQueryFromString:(id)a0;
- (id)executeSelectNumberQuery:(id)a0 withParameters:(id)a1;
- (id)executeSelectQuery:(id)a0 forTable:(id)a1 withParameters:(id)a2;
- (id)executeSelectQuery:(id)a0 forTable:(id)a1 withParameters:(id)a2 groupedByColumn:(id)a3;
- (id)executeSelectStringsQuery:(id)a0 withParameters:(id)a1;
- (char)executeTransactionQueryWithType:(int)a0;
- (char)executeTransactionQueryWithType:(int)a0 result:(int *)a1 transactionBody:(id /* block */)a2;
- (id)getCursorForQuery:(id)a0 parameters:(id)a1;
- (id)getTableForClass:(Class)a0;
- (void)incrementalVacuumIfNeeded;
- (char)openConnectionIfFileExistsToDatabaseWithName:(id)a0;
- (char)setUpDatabaseWithPath:(id)a0;
- (char)setUpMainDatabase;

@end
