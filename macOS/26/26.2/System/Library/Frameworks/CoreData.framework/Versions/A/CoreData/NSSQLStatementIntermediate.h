@class NSSQLEntity, NSString, NSSQLWhereIntermediate, NSSQLOrderIntermediate, NSSQLLimitIntermediate;

@interface NSSQLStatementIntermediate : NSSQLIntermediate {
    NSSQLEntity *_governingEntity;
    NSString *_governingAlias;
    NSString *_correlationToken;
    NSSQLWhereIntermediate *_whereClause;
    NSSQLLimitIntermediate *_limitClause;
    NSSQLOrderIntermediate *_orderIntermediate;
}

- (id)governingAliasForKeypathExpression:(id)a0;
- (id)governingEntity;
- (void)setGoverningEntity:(id)a0;
- (id)initWithEntity:(id)a0 alias:(id)a1 inScope:(id)a2;
- (id)governingAlias;
- (BOOL)keypathExpressionIsSafeLHSForIn:(id)a0;
- (void)setGoverningAlias:(id)a0;
- (id)governingEntityForKeypathExpression:(id)a0;
- (void)dealloc;

@end
