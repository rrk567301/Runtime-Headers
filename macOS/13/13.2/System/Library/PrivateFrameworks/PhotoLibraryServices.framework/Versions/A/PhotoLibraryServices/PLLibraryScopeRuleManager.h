@class PLLibraryScopeRuleEvaluator, PLManagedAssetRuleInterpreter, PLLibraryScope;

@interface PLLibraryScopeRuleManager : NSObject

@property (retain, nonatomic) PLLibraryScope *libraryScope;
@property (retain, nonatomic) PLLibraryScopeRuleEvaluator *ruleEvaluator;
@property (retain, nonatomic) PLManagedAssetRuleInterpreter *interpreter;

- (void).cxx_destruct;
- (id)initWithLibraryScope:(id)a0;
- (BOOL)evaluateAssetObjectIDs:(id)a0 withResultEnumerationBlock:(id /* block */)a1;
- (BOOL)evaluateAssetObjectIDs:(id)a0 simulate:(BOOL)a1 withResultEnumerationBlock:(id /* block */)a2;
- (BOOL)evaluateAssetObjectIDs:(id)a0 simulate:(BOOL)a1 predicateToFetchAssetsToEvaluate:(id)a2 withResultEnumerationBlock:(id /* block */)a3;
- (BOOL)evaluateFaceObjectIDs:(id)a0 withResultEnumerationBlock:(id /* block */)a1;
- (BOOL)evaluateFaceObjectIDs:(id)a0 simulate:(BOOL)a1 withResultEnumerationBlock:(id /* block */)a2;
- (id)_personUUIDsUsedInRules;
- (id)_fetchAssetObjectIDsContainedInMomentsToPropagateForMomentIdByAssetId:(id)a0 inManagedObjectContext:(id)a1;
- (id)_fetchAssetObjectIDsContainedInMomentObjectIDs:(id)a0 excludingAssetObjectIDs:(id)a1 inManagedObjectContext:(id)a2 predicateToFetchAssetsToEvaluate:(id)a3;
- (BOOL)_shouldTryToPropagateResultsToMomentWithInclusiveMatchedConditions:(id)a0;
- (id)_predicateToIncludeAssetsSuggestedByCamera;
- (id)_predicateToIncludeAssetsCapturedByCamera;

@end
