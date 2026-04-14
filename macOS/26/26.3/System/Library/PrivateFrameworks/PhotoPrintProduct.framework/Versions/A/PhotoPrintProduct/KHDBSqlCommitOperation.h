@class KHDBDatabaseManager;

@interface KHDBSqlCommitOperation : NSOperation

@property (readonly, retain, nonatomic) KHDBDatabaseManager *dbMgr;
@property (nonatomic) BOOL beginNewTransaction;

- (void)run;
- (id)description;
- (void)main;
- (void)dealloc;
- (id)initWithDatabaseMgr:(id)a0 beginNewTransaction:(BOOL)a1;

@end
