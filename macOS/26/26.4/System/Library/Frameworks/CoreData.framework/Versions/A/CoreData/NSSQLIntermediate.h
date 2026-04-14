@class NSSQLEntity, NSArray;

@interface NSSQLIntermediate : NSObject {
    NSSQLIntermediate *_scope;
}

@property (readonly, nonatomic) NSSQLEntity *disambiguatingEntity;
@property (readonly, nonatomic) NSArray *disambiguationKeypath;
@property (readonly, nonatomic) BOOL disambiguationKeypathHasToMany;

+ (BOOL)expressionIsBasicKeypath:(id)a0;
+ (BOOL)isSimpleKeypath:(id)a0;

- (BOOL)isUpdateColumnsScoped;
- (id)governingEntityForKeypathExpression:(id)a0;
- (BOOL)keypathExpressionIsSafeLHSForIn:(id)a0;
- (id)initWithScope:(id)a0;
- (id)fetchIntermediate;
- (void)_promoteJoinsForSubqueryScopedKeypaths;
- (void)setDisambiguatingEntity:(id)a0 withKeypath:(id)a1 hasToMany:(BOOL)a2;
- (BOOL)isWhereScoped;
- (void)_promoteJoinsForSubqueryScopedKeypath:(id)a0;
- (id)_lastScopedItem;
- (BOOL)isOrScoped;
- (id)generateSQLStringInContext:(id)a0;
- (id)_generateSQLForKeyPathExpression:(id)a0 allowToMany:(BOOL)a1 inContext:(id)a2;
- (id)governingEntity;
- (BOOL)isUpdateScoped;
- (id)fetchIntermediateForKeypathExpression:(id)a0;
- (id)governingAlias;
- (BOOL)isTargetColumnsScoped;
- (id)_generateSQLForVariableExpression:(id)a0 allowToMany:(BOOL)a1 inContext:(id)a2;
- (id)governingAliasForKeypathExpression:(id)a0;
- (BOOL)isFunctionScoped;
- (BOOL)isHavingScoped;
- (BOOL)isIndexExpressionScoped;
- (BOOL)isIndexScoped;

@end
