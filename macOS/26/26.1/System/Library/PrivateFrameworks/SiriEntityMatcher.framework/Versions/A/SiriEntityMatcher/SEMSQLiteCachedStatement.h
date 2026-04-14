@interface SEMSQLiteCachedStatement : NSObject {
    struct sqlite3_stmt { } *_stmt;
}

- (struct sqlite3_stmt { } *)stmt;
- (void)dealloc;
- (id)init;
- (id)initWithStmt:(struct sqlite3_stmt { } *)a0;

@end
