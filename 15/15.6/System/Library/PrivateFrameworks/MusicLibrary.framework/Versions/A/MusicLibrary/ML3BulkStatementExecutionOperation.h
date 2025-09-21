@interface ML3BulkStatementExecutionOperation : ML3DatabaseOperation

- (unsigned long long)type;
- (char)_execute:(id *)a0;
- (char)_executeStatements:(id)a0 onConnection:(id)a1 withError:(id *)a2;

@end
