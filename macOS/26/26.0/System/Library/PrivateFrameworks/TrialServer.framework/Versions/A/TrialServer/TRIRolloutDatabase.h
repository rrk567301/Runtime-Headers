@class TRIDatabase;

@interface TRIRolloutDatabase : NSObject {
    TRIDatabase *_db;
}

- (struct _PASDBTransactionCompletion_ { BOOL x0; })writeTransactionWithFailableBlock:(id /* block */)a0;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })readTransactionWithFailableBlock:(id /* block */)a0;
- (id)initWithDatabase:(id)a0;
- (BOOL)enumerateRecordsUsingTransaction:(id)a0 block:(id /* block */)a1;
- (BOOL)setActiveFactorPackSetId:(id)a0 activeTargetingRuleIndex:(id)a1 forDeployment:(id)a2 usingTransaction:(id)a3;
- (BOOL)setTargetedFactorPackSetId:(id)a0 targetedTargetingRuleIndex:(id)a1 forDeployment:(id)a2 usingTransaction:(id)a3;
- (BOOL)deactivateDeployment:(id)a0 usingTransaction:(id)a1;
- (BOOL)addNewRolloutWithRecord:(id)a0;
- (BOOL)hasRecordReferencingFactorPackSetId:(id)a0 withReferenceType:(unsigned int)a1;
- (id)init;
- (BOOL)enumerateRecordsWithRolloutId:(id)a0 usingTransaction:(id)a1 block:(id /* block */)a2;
- (BOOL)deactivateDeploymentsWithRolloutId:(id)a0 deactivatedDeployment:(id *)a1 deactivatedFactorPackSetId:(id *)a2 deactivatedRampId:(id *)a3 deactivationStateTransitions:(id)a4 usingTransaction:(id)a5;
- (BOOL)activateDeployment:(id)a0 withFactorPackSetId:(id)a1 targetingRuleIndex:(id)a2 deactivatedDeployments:(id)a3 deactivatedFactorPackSetIds:(id)a4 deactivationStateTransitions:(id)a5 usingTransaction:(id)a6;
- (BOOL)setStatus:(long long)a0 forDeployment:(id)a1 usingTransaction:(id)a2;
- (BOOL)enumerateActiveRecordsUsingTransaction:(id)a0 block:(id /* block */)a1;
- (BOOL)enumerateRecordsOverlappingNamespaces:(id)a0 usingTransaction:(id)a1 block:(id /* block */)a2;
- (id)recordWithDeployment:(id)a0 usingTransaction:(id)a1;
- (BOOL)targetDeployment:(id)a0 toFactorPackSetId:(id)a1 targetingRuleIndex:(id)a2 deallocatedDeployments:(id)a3 usingTransaction:(id)a4;
- (struct { unsigned long long x0; })removeRecordWithDeployment:(id)a0;
- (id)_dataNoCopyFromStmt:(id)a0 columnName:(const char *)a1;
- (struct { unsigned long long x0; })removeRecordWithDeployment:(id)a0 usingRefCounting:(BOOL)a1;
- (BOOL)_enumerateRecordsMatchingWhereClause:(id)a0 bind:(id /* block */)a1 prependingWithClause:(id)a2 usingTransaction:(id)a3 block:(id /* block */)a4;
- (void).cxx_destruct;

@end
