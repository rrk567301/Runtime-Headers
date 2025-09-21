@class NSSQLGroupByIntermediate, NSMutableArray, NSMutableDictionary, NSSQLSelectIntermediate, NSSQLHavingIntermediate, NSSQLOffsetIntermediate;

@interface NSSQLFetchIntermediate : NSSQLStatementIntermediate {
    NSSQLSelectIntermediate *_selectClause;
    NSSQLGroupByIntermediate *_groupByClause;
    NSSQLHavingIntermediate *_havingClause;
    NSSQLOffsetIntermediate *_offsetClause;
    NSMutableArray *_groupByKeypaths;
    char _isDictionaryCountFetch;
    NSMutableArray *_joinIntermediates;
    NSMutableDictionary *_joinKeypaths;
}

- (void)dealloc;
- (id)fetchIntermediate;
- (id)fetchIntermediateForKeypathExpression:(id)a0;
- (id)generateSQLStringInContext:(id)a0;
- (id)initWithScope:(id)a0;
- (char)isFunctionScoped;
- (id)selectIntermediate;

@end
