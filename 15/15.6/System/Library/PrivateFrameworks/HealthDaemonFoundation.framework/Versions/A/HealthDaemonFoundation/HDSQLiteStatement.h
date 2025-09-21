@class HDSQLiteDatabase, NSString;

@interface HDSQLiteStatement : NSObject {
    NSString *_sql;
}

@property (readonly, nonatomic) HDSQLiteDatabase *database;

- (id)description;
- (void).cxx_destruct;
- (void)finish;
- (char)enumerateStatementWithError:(id *)a0 bindingHandler:(id /* block */)a1 block:(id /* block */)a2;
- (id)initWithSQL:(id)a0 database:(id)a1;
- (char)performStatementWithError:(id *)a0 bindingHandler:(id /* block */)a1;

@end
