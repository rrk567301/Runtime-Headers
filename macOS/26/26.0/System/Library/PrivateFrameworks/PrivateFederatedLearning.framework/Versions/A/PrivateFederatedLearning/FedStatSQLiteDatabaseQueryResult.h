@interface FedStatSQLiteDatabaseQueryResult : NSObject

@property struct sqlite3_stmt { } *queryStatement;

- (id)next;
- (void)dealloc;
- (id)initWithQueryStatement:(struct sqlite3_stmt { } *)a0;

@end
