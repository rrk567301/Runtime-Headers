@interface SEMSQLiteCachedStatement : NSObject {
    struct sqlite3_stmt { } *_stmt;
}

- (id)init;
- (struct sqlite3_stmt { } *)stmt;
- (void)dealloc;
- (id)initWithStmt:(struct sqlite3_stmt { } *)a0;

@end
