@interface CCSQLitePreparedStatement : NSObject <CCDatabaseValueRow> {
    struct sqlite3_stmt { } *_stmt;
    unsigned long long _count;
}

- (struct sqlite3_stmt { } *)stmt;
- (id)init;
- (id)dataValueAtColumnIndex:(unsigned long long)a0;
- (void)dealloc;
- (id)stringValueAtColumnIndex:(unsigned long long)a0;
- (unsigned long long)columnCount;
- (id)initWithStmt:(struct sqlite3_stmt { } *)a0;
- (id)numberValueAtColumnIndex:(unsigned long long)a0;

@end
