@interface CXDatabaseStatement : NSObject

@property (nonatomic) struct sqlite3_stmt { } *statement;
@property (nonatomic) struct sqlite3 { } *database;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (char)bind:(id)a0 error:(id *)a1;
- (char)bindInt64:(long long)a0 atIndex:(int)a1 error:(id *)a2;
- (char)bindText:(const char *)a0 ofLength:(int)a1 atIndex:(int)a2 error:(id *)a3;
- (char)executeWithError:(id *)a0;
- (char)executeWithExpectedColumnCount:(long long)a0 resultRowHandler:(id /* block */)a1 error:(id *)a2;
- (id)initWithSQL:(id)a0 database:(id)a1 error:(id *)a2;
- (char)processResultsWithExpectedColumnCount:(long long)a0 resultRowHandler:(id /* block */)a1 error:(id *)a2;

@end
