@class HDSQLiteDatabase, NSString;

@interface HDSQLiteStatement : NSObject {
    NSString *_sql;
}

@property (readonly, nonatomic) HDSQLiteDatabase *database;

- (id)initWithSQL:(id)a0 database:(id)a1;
- (BOOL)enumerateStatementWithError:(id *)a0 bindingHandler:(id /* block */)a1 block:(id /* block */)a2;
- (BOOL)performStatementWithError:(id *)a0 bindingHandler:(id /* block */)a1;
- (void)finish;
- (id)description;
- (void).cxx_destruct;

@end
