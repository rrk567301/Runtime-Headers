@class NSSQLFetchIntermediate;

@interface NSSQLFetchDictionaryCountIntermediate : NSSQLStatementIntermediate {
    NSSQLFetchIntermediate *_realFetch;
}

- (id)initWithFetchIntermediate:(id)a0 inScope:(id)a1;
- (void)dealloc;
- (id)generateSQLStringInContext:(id)a0;

@end
