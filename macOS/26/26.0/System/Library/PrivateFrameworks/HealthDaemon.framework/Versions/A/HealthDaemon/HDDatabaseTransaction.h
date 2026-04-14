@class NSMutableArray, HDDatabase, NSDictionary, HDSQLiteDatabase, HDDatabaseTransactionContext;
@protocol HDSQLiteDatabaseProvider;

@interface HDDatabaseTransaction : NSObject {
    HDDatabase *_database;
    id<HDSQLiteDatabaseProvider> _databaseProvider;
    NSMutableArray *_onCommitBlocks;
    NSMutableArray *_onRollbackBlocks;
    BOOL _isActive;
    BOOL _isOutermostTransactionUnprotected;
    BOOL _isHandlingTransactionEnd;
}

@property (readonly, copy, nonatomic) HDDatabaseTransactionContext *rootContext;
@property (nonatomic) BOOL performingMigration;
@property (readonly, nonatomic) HDDatabase *database;
@property (readonly, nonatomic) HDSQLiteDatabase *unprotectedDatabase;
@property (readonly, nonatomic) HDSQLiteDatabase *protectedDatabase;
@property (readonly, nonatomic) long long cacheScope;
@property (readonly, nonatomic) BOOL isWriteTransaction;
@property (readonly, copy, nonatomic) NSDictionary *protectedResources;

- (id)databaseForEntityProtectionClass:(long long)a0;
- (void)requestTransactionInterruption;
- (void)dealloc;
- (BOOL)performWithContext:(id)a0 error:(id *)a1 block:(id /* block */)a2 inaccessibilityHandler:(id /* block */)a3;
- (id)databaseForEntity:(id)a0;
- (id)initWithDatabase:(id)a0 provider:(id)a1 rootContext:(id)a2;
- (id)databaseForEntityClass:(Class)a0;
- (void)requireRollback;
- (void)transactionDidEndWithError:(id)a0;
- (void).cxx_destruct;
- (void)onCommit:(id /* block */)a0 orRollback:(id /* block */)a1;

@end
