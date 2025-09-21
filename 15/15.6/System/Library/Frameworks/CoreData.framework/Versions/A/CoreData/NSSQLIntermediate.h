@class NSSQLEntity, NSArray;

@interface NSSQLIntermediate : NSObject {
    NSSQLIntermediate *_scope;
}

@property (readonly, nonatomic) NSSQLEntity *disambiguatingEntity;
@property (readonly, nonatomic) NSArray *disambiguationKeypath;
@property (readonly, nonatomic) char disambiguationKeypathHasToMany;

+ (char)expressionIsBasicKeypath:(id)a0;
+ (char)isSimpleKeypath:(id)a0;

- (id)governingEntity;
- (id)_lastScopedItem;
- (id)_generateSQLForKeyPathExpression:(id)a0 allowToMany:(char)a1 inContext:(id)a2;
- (id)_generateSQLForVariableExpression:(id)a0 allowToMany:(char)a1 inContext:(id)a2;
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)a0;
- (void)_promoteJoinsForSubqueryScopedKeypaths;
- (id)fetchIntermediate;
- (id)fetchIntermediateForKeypathExpression:(id)a0;
- (id)generateSQLStringInContext:(id)a0;
- (id)governingAlias;
- (id)governingAliasForKeypathExpression:(id)a0;
- (id)governingEntityForKeypathExpression:(id)a0;
- (id)initWithScope:(id)a0;
- (char)isFunctionScoped;
- (char)isHavingScoped;
- (char)isIndexExpressionScoped;
- (char)isIndexScoped;
- (char)isOrScoped;
- (char)isTargetColumnsScoped;
- (char)isUpdateColumnsScoped;
- (char)isUpdateScoped;
- (char)isWhereScoped;
- (char)keypathExpressionIsSafeLHSForIn:(id)a0;
- (void)setDisambiguatingEntity:(id)a0 withKeypath:(id)a1 hasToMany:(char)a2;

@end
