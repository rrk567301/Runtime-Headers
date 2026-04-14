@class KHDBDatabaseManager;

@interface KHDBSqlCommitOperation : NSOperation

@property (readonly, retain, nonatomic) KHDBDatabaseManager *dbMgr;
@property (nonatomic) BOOL beginNewTransaction;

- (void)run;
- (void)dealloc;
- (id)description;
- (void)main;
- (id)initWithDatabaseMgr:(id)a0 beginNewTransaction:(BOOL)a1;

@end
