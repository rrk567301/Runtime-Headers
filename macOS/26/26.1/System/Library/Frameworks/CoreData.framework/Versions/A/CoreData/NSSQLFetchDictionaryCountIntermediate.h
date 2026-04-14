@class NSSQLFetchIntermediate;

@interface NSSQLFetchDictionaryCountIntermediate : NSSQLStatementIntermediate {
    NSSQLFetchIntermediate *_realFetch;
}

- (id)generateSQLStringInContext:(id)a0;
- (void)dealloc;
- (id)initWithFetchIntermediate:(id)a0 inScope:(id)a1;

@end
