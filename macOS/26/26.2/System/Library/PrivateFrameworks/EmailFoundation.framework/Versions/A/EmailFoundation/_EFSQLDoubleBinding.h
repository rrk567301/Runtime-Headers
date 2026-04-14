@interface _EFSQLDoubleBinding : EFSQLBinding

@property (readonly, nonatomic) double doubleValue;

- (void)bindTo:(struct sqlite3_stmt { } *)a0 withSQLIndex:(int)a1;
- (id)initWithDouble:(double)a0;

@end
