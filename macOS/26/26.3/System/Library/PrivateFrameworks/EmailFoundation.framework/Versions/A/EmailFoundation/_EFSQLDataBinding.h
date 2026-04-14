@class NSData;

@interface _EFSQLDataBinding : EFSQLBinding

@property (readonly, copy, nonatomic) NSData *dataValue;

- (void)bindTo:(struct sqlite3_stmt { } *)a0 withSQLIndex:(int)a1;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
