@class NSURL, NSString, _MSVSQLConnection;

@interface MSVSQLDatabase : NSObject <MSVSQLExecutable> {
    _MSVSQLConnection *_connection;
}

@property (copy, nonatomic) NSURL *databaseURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerFunctionNamed:(id)a0 arguments:(long long)a1 options:(unsigned long long)a2 block:(id /* block */)a3;
- (id)markdownTableForStatement:(id)a0;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (BOOL)executeStatementString:(id)a0 error:(id *)a1;
- (id)markdownTableForTableNamed:(id)a0;
- (void)unregisterFunctionNamed:(id)a0 arguments:(long long)a1;
- (BOOL)executeStatement:(id)a0 error:(id *)a1;
- (id)transactionWithName:(id)a0 error:(id *)a1;
- (void)_installArraySupport;
- (id)statementWithString:(id)a0 error:(id *)a1;
- (id)initWithMemoryNamed:(id)a0;
- (id)initWithMemory;
- (id)markdownTableForSQL:(id)a0;
- (void).cxx_destruct;
- (void)registerAggregateFunctionNamed:(id)a0 arguments:(long long)a1 options:(unsigned long long)a2 start:(id /* block */)a3 add:(id /* block */)a4 remove:(id /* block */)a5 value:(id /* block */)a6;
- (id)resultsForStatement:(id)a0;

@end
