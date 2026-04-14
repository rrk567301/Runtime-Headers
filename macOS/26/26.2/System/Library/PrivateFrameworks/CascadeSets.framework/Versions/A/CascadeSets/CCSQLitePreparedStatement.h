@interface CCSQLitePreparedStatement : NSObject <CCDatabaseValueRow> {
    struct sqlite3_stmt { } *_stmt;
    unsigned long long _count;
}

- (unsigned long long)columnCount;
- (struct sqlite3_stmt { } *)stmt;
- (id)dataValueAtColumnIndex:(unsigned long long)a0;
- (id)init;
- (id)stringValueAtColumnIndex:(unsigned long long)a0;
- (void)dealloc;
- (id)initWithStmt:(struct sqlite3_stmt { } *)a0;
- (id)numberValueAtColumnIndex:(unsigned long long)a0;

@end
