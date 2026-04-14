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
- (id)generateSQLStringInContext:(id)a0;
- (BOOL)isIndexScoped;
- (BOOL)isIndexExpressionScoped;
- (id)governingEntity;
- (BOOL)isUpdateScoped;
- (void)setDisambiguatingEntity:(id)a0 withKeypath:(id)a1 hasToMany:(BOOL)a2;
- (BOOL)isOrScoped;
- (id)fetchIntermediate;
- (BOOL)isFunctionScoped;
- (id)fetchIntermediateForKeypathExpression:(id)a0;
- (BOOL)isTargetColumnsScoped;
- (BOOL)isHavingScoped;
- (BOOL)isWhereScoped;
- (BOOL)isUpdateColumnsScoped;
- (id)governingAlias;
- (id)governingAliasForKeypathExpression:(id)a0;
- (id)governingEntityForKeypathExpression:(id)a0;
- (BOOL)keypathExpressionIsSafeLHSForIn:(id)a0;
- (id)_lastScopedItem;
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)a0;
- (void)_promoteJoinsForSubqueryScopedKeypaths;
- (id)_generateSQLForKeyPathExpression:(id)a0 allowToMany:(BOOL)a1 inContext:(id)a2;
- (id)_generateSQLForVariableExpression:(id)a0 allowToMany:(BOOL)a1 inContext:(id)a2;

@end
