@class NSSQLEntity, NSArray;

@interface NSSQLIntermediate : NSObject {
    NSSQLIntermediate *_scope;
}

@property (readonly, nonatomic) NSSQLEntity *disambiguatingEntity;
@property (readonly, nonatomic) NSArray *disambiguationKeypath;
@property (readonly, nonatomic) BOOL disambiguationKeypathHasToMany;

+ (BOOL)expressionIsBasicKeypath:(id)a0;
+ (BOOL)isSimpleKeypath:(id)a0;

- (BOOL)isFunctionScoped;
- (id)governingAliasForKeypathExpression:(id)a0;
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)a0;
- (id)_generateSQLForVariableExpression:(id)a0 allowToMany:(BOOL)a1 inContext:(id)a2;
- (void)_promoteJoinsForSubqueryScopedKeypaths;
- (void)setDisambiguatingEntity:(id)a0 withKeypath:(id)a1 hasToMany:(BOOL)a2;
- (BOOL)isUpdateScoped;
- (id)_lastScopedItem;
- (id)_generateSQLForKeyPathExpression:(id)a0 allowToMany:(BOOL)a1 inContext:(id)a2;
- (id)governingEntityForKeypathExpression:(id)a0;
- (BOOL)isOrScoped;
- (BOOL)isUpdateColumnsScoped;
- (id)generateSQLStringInContext:(id)a0;
- (id)initWithScope:(id)a0;
- (BOOL)isTargetColumnsScoped;
- (BOOL)isWhereScoped;
- (BOOL)keypathExpressionIsSafeLHSForIn:(id)a0;
- (id)fetchIntermediate;
- (id)fetchIntermediateForKeypathExpression:(id)a0;
- (id)governingEntity;
- (id)governingAlias;
- (BOOL)isHavingScoped;
- (BOOL)isIndexExpressionScoped;
- (BOOL)isIndexScoped;

@end
