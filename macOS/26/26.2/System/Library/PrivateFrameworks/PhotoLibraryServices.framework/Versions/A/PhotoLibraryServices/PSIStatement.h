@interface PSIStatement : NSObject

@property (readonly) struct sqlite3_stmt { } *stmt;

- (id)initWithSQLite3Stmt:(struct sqlite3_stmt { } *)a0;
- (void)bindDouble:(double)a0 atIndex:(unsigned long long)a1;
- (void)finalizze;
- (long long)int64AtColumn:(unsigned long long)a0;
- (void)bindInt64:(long long)a0 atIndex:(unsigned long long)a1;
- (id)textAtColumn:(unsigned long long)a0;
- (double)doubleAtColumn:(unsigned long long)a0;
- (void)bindText:(id)a0 atIndex:(unsigned long long)a1;
- (void)dealloc;

@end
