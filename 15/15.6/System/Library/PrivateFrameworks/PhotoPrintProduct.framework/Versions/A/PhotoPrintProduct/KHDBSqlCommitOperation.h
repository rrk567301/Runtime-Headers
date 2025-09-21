@class KHDBDatabaseManager;

@interface KHDBSqlCommitOperation : NSOperation

@property (readonly, retain, nonatomic) KHDBDatabaseManager *dbMgr;
@property (nonatomic) char beginNewTransaction;

- (void)dealloc;
- (id)description;
- (void)run;
- (void)main;
- (id)initWithDatabaseMgr:(id)a0 beginNewTransaction:(char)a1;

@end
