@interface _EFSQLInt64Binding : EFSQLBinding

@property (readonly, nonatomic) long long integerValue;

- (void)bindTo:(struct sqlite3_stmt { } *)a0 withSQLIndex:(int)a1;
- (id)initWithInt64:(long long)a0;

@end
