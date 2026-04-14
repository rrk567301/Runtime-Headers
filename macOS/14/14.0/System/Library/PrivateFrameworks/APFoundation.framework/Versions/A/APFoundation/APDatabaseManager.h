@class APUnfairLock;

@interface APDatabaseManager : NSObject

@property (nonatomic) struct sqlite3 { } *database;
@property (retain, nonatomic) APUnfairLock *lock;

+ (id)sharedInstance;
+ (BOOL)_deviceUnlockedSinceBoot;

- (id)init;
- (void).cxx_destruct;
- (void)beginTransaction;
- (void)commitTransaction;
- (id)_currentVersion;
- (BOOL)setUp;
- (BOOL)_updateVersion;
- (BOOL)executeQuery:(id)a0 withParameters:(id)a1;
- (BOOL)_bindParameters:(id)a0 toStatement:(struct sqlite3_stmt { } *)a1;
- (void)_closeConnectionAndDeleteDBWithName:(id)a0;
- (BOOL)_executeQueryFromString:(id)a0;
- (void)_openDBConnectionCanRepeat:(BOOL)a0 dataBaseName:(id)a1;
- (void)_updateToVersion1;
- (BOOL)_updateVersionToCurrent;
- (long long)executeInsertQuery:(id)a0 withParameters:(id)a1;
- (id)executeSelectQuery:(id)a0 forClass:(Class)a1 withParameters:(id)a2;
- (id)executeSelectQuery:(id)a0 forClass:(Class)a1 withParameters:(id)a2 groupedByColumn:(id)a3;
- (id)executeSelectStringsQuery:(id)a0 withParameters:(id)a1;

@end
