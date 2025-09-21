@interface CCSQLitePreparedStatement : NSObject <CCDatabaseValueRow> {
    struct sqlite3_stmt { } *_stmt;
    unsigned long long _count;
}

- (struct sqlite3_stmt { } *)stmt;
- (unsigned long long)columnCount;
- (void)dealloc;
- (id)dataValueAtColumnIndex:(unsigned long long)a0;
- (id)stringValueAtColumnIndex:(unsigned long long)a0;
- (id)init;
- (id)initWithStmt:(struct sqlite3_stmt { } *)a0;
- (id)numberValueAtColumnIndex:(unsigned long long)a0;

@end
