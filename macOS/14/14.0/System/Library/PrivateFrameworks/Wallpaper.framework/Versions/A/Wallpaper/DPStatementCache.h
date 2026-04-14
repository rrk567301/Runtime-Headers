@class NSMapTable;

@interface DPStatementCache : NSObject {
    NSMapTable *_statements;
}

- (void)dealloc;
- (void)finalize;
- (id)init;
- (void).cxx_destruct;
- (struct sqlite3_stmt { } *)statementWithString:(id)a0 database:(struct sqlite3 { } *)a1 result:(int *)a2;

@end
