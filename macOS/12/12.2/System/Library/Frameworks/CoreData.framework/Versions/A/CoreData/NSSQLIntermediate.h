@class NSSQLEntity, NSArray;

@interface NSSQLIntermediate : NSObject {
    NSSQLIntermediate *_scope;
}

@property (readonly, nonatomic) NSSQLEntity *disambiguatingEntity;
@property (readonly, nonatomic) NSArray *disambiguationKeypath;
@property (readonly, nonatomic) BOOL disambiguationKeypathHasToMany;

+ (BOOL)expressionIsBasicKeypath:(id)a0;
+ (BOOL)isSimpleKeypath:(id)a0;

- (id)initWithScope:(id)a0;
- (BOOL)isWhereScoped;
- (id)generateSQLStringInContext:(id)a0;
- (BOOL)isIndexScoped;
- (BOOL)isIndexExpressionScoped;
- (id)governingEntity;
- (id)governingAlias;
- (BOOL)isUpdateScoped;
- (BOOL)isOrScoped;
- (void)setDisambiguatingEntity:(id)a0 withKeypath:(id)a1 hasToMany:(BOOL)a2;
- (BOOL)isFunctionScoped;
- (void)_promoteJoinsForSubqueryScopedKeypaths;
- (id)fetchIntermediateForKeypathExpression:(id)a0;
- (id)fetchIntermediate;
- (BOOL)isTargetColumnsScoped;
- (BOOL)isHavingScoped;
- (BOOL)isUpdateColumnsScoped;
- (id)governingEntityForKeypathExpression:(id)a0;
- (id)governingAliasForKeypathExpression:(id)a0;
- (BOOL)keypathExpressionIsSafeLHSForIn:(id)a0;
- (id)_lastScopedItem;
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)a0;
- (id)_generateSQLForKeyPathExpression:(id)a0 allowToMany:(BOOL)a1 inContext:(id)a2;
- (id)_generateSQLForVariableExpression:(id)a0 allowToMany:(BOOL)a1 inContext:(id)a2;

@end
