@class NSArray;

@interface _BSSqlitePreparedCompoundStatement : BSSqlitePreparedStatement {
    NSArray *_statements;
}

- (void).cxx_destruct;
- (char)executeWithBindings:(id)a0 resultRowHandler:(id /* block */)a1 error:(out id *)a2;

@end
