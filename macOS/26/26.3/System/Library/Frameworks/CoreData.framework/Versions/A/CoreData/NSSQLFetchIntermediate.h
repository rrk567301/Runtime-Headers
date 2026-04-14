@class NSSQLGroupByIntermediate, NSMutableArray, NSMutableDictionary, NSSQLSelectIntermediate, NSSQLHavingIntermediate, NSSQLOffsetIntermediate;

@interface NSSQLFetchIntermediate : NSSQLStatementIntermediate {
    NSSQLSelectIntermediate *_selectClause;
    NSSQLGroupByIntermediate *_groupByClause;
    NSSQLHavingIntermediate *_havingClause;
    NSSQLOffsetIntermediate *_offsetClause;
    NSMutableArray *_groupByKeypaths;
    BOOL _isDictionaryCountFetch;
    NSMutableArray *_joinIntermediates;
    NSMutableDictionary *_joinKeypaths;
}

- (id)fetchIntermediate;
- (id)selectIntermediate;
- (BOOL)isFunctionScoped;
- (void)dealloc;
- (id)generateSQLStringInContext:(id)a0;
- (id)initWithScope:(id)a0;
- (id)fetchIntermediateForKeypathExpression:(id)a0;

@end
