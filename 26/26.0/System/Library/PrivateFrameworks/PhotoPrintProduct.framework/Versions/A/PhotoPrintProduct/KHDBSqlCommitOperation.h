@class KHDBDatabaseManager;

@interface KHDBSqlCommitOperation : NSOperation

@property (readonly, retain, nonatomic) KHDBDatabaseManager *dbMgr;
@property (nonatomic) BOOL beginNewTransaction;

- (void)main;
- (void)dealloc;
- (void)run;
- (id)description;
- (id)initWithDatabaseMgr:(id)a0 beginNewTransaction:(BOOL)a1;

@end
