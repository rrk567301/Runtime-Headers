@class WBSSQLiteDatabase, NSMutableDictionary;

@interface WBSSQLiteStatementCache : NSObject {
    WBSSQLiteDatabase *_database;
    NSMutableDictionary *_statements;
}

- (id)initWithDatabase:(id)a0;
- (void)dealloc;
- (id)_createStatementForQuery:(id)a0 error:(id *)a1;
- (void)invalidate;
- (void)setCachedStatement:(id)a0 forQuery:(id)a1;
- (id)init;
- (id)cachedStatementForQuery:(id)a0;
- (id)statementForQuery:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
