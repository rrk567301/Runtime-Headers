@class NSSQLEntity, NSExpression, NSSQLFetchIntermediate, NSMutableString, NSString, NSSQLColumn, NSMutableArray;

@interface NSSQLSubqueryExpressionIntermediate : NSSQLExpressionIntermediate {
    NSExpression *_trailingKeypath;
    NSExpression *_variableExpression;
    NSSQLFetchIntermediate *_fetchIntermediate;
    NSSQLEntity *_selectFromEntity;
    NSMutableString *_selectFromCorrelationTarget;
    NSString *_selectEntityAlias;
    NSSQLEntity *_governingEntityForVariable;
    NSSQLColumn *_variableColumn;
    NSString *_variableAlias;
    NSSQLColumn *_targetColumn;
    NSString *_targetAlias;
    NSMutableArray *_keypathsToPromote;
    char _useDistinct;
    char _isCount;
    char _hasTrailingFunction;
    char _onlyTrailIsCount;
    char _subqueryHasTruePredicate;
}

- (void)dealloc;
- (id)_generateSQLForVariableExpression:(id)a0 allowToMany:(char)a1 inContext:(id)a2;
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)a0;
- (void)_promoteJoinsForSubqueryScopedKeypaths;
- (id)fetchIntermediateForKeypathExpression:(id)a0;
- (id)generateSQLStringInContext:(id)a0;
- (id)governingAliasForKeypathExpression:(id)a0;
- (id)governingEntityForKeypathExpression:(id)a0;
- (id)initWithExpression:(id)a0 trailingKeypath:(id)a1 inScope:(id)a2;
- (char)keypathExpressionIsSafeLHSForIn:(id)a0;

@end
