@class NSArray;

@interface MFPersistenceDatabaseConnection_macOS : EDPersistenceDatabaseConnection {
    NSArray *_searchContext;
    BOOL _databaseIsRemote;
}

@property (nonatomic) double busyStartTime;
@property (nonatomic) BOOL needsUnreadCountUpdate;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned int)_cacheSize;
- (void)vacuum;
- (unsigned int)_pageSize;
- (BOOL)performWithOptions:(unsigned long long)a0 transactionError:(id *)a1 block:(id /* block */)a2;
- (BOOL)protectedDatabaseAttached;
- (id)initWithBasePath:(id)a0 databaseName:(id)a1 isWriter:(BOOL)a2 delegate:(id)a3;
- (void)handleSQLResult:(int)a0 message:(id)a1;
- (int)configureSQLConnection;
- (BOOL)detachProtectedDatabase;
- (BOOL)attachProtectedDatabaseWithName:(id)a0;
- (BOOL)_pathIsRemote:(id)a0;
- (void)_handleDatabaseException:(id)a0;

@end
