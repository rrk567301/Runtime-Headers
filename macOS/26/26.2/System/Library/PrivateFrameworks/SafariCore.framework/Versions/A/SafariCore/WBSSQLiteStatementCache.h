@class WBSSQLiteDatabase, NSMutableDictionary;

@interface WBSSQLiteStatementCache : NSObject {
    WBSSQLiteDatabase *_database;
    NSMutableDictionary *_statements;
}

- (void)invalidate;
- (id)initWithDatabase:(id)a0;
- (void)setCachedStatement:(id)a0 forQuery:(id)a1;
- (id)statementForQuery:(id)a0 error:(id *)a1;
- (id)_createStatementForQuery:(id)a0 error:(id *)a1;
- (id)cachedStatementForQuery:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
