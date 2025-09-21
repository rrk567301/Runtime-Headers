@class TRIDatabase;

@interface TRIRolloutDatabase : NSObject {
    TRIDatabase *_db;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (struct _PASDBTransactionCompletion_ { char x0; })readTransactionWithFailableBlock:(id /* block */)a0;
- (struct _PASDBTransactionCompletion_ { char x0; })writeTransactionWithFailableBlock:(id /* block */)a0;
- (id)_dataNoCopyFromStmt:(id)a0 columnName:(const char *)a1;
- (char)_enumerateRecordsMatchingWhereClause:(id)a0 bind:(id /* block */)a1 prependingWithClause:(id)a2 usingTransaction:(id)a3 block:(id /* block */)a4;
- (char)activateDeployment:(id)a0 withFactorPackSetId:(id)a1 targetingRuleIndex:(id)a2 deactivatedDeployments:(id)a3 deactivatedFactorPackSetIds:(id)a4 deactivationStateTransitions:(id)a5 usingTransaction:(id)a6;
- (char)addNewRolloutWithRecord:(id)a0;
- (char)deactivateDeployment:(id)a0 usingTransaction:(id)a1;
- (char)deactivateDeploymentsWithRolloutId:(id)a0 deactivatedDeployment:(id *)a1 deactivatedFactorPackSetId:(id *)a2 deactivatedRampId:(id *)a3 deactivationStateTransitions:(id)a4 usingTransaction:(id)a5;
- (char)enumerateActiveRecordsWithVisibility:(unsigned int)a0 usingTransaction:(id)a1 block:(id /* block */)a2;
- (char)enumerateRecordsOverlappingNamespaces:(id)a0 usingTransaction:(id)a1 block:(id /* block */)a2;
- (char)enumerateRecordsUsingTransaction:(id)a0 block:(id /* block */)a1;
- (char)enumerateRecordsWithRolloutId:(id)a0 usingTransaction:(id)a1 block:(id /* block */)a2;
- (char)hasRecordReferencingFactorPackSetId:(id)a0 withReferenceType:(unsigned int)a1;
- (id)recordWithDeployment:(id)a0 usingTransaction:(id)a1;
- (struct { unsigned long long x0; })removeRecordWithDeployment:(id)a0;
- (struct { unsigned long long x0; })removeRecordWithDeployment:(id)a0 usingRefCounting:(char)a1;
- (char)setActiveFactorPackSetId:(id)a0 activeTargetingRuleIndex:(id)a1 forDeployment:(id)a2 usingTransaction:(id)a3;
- (char)setStatus:(long long)a0 forDeployment:(id)a1 usingTransaction:(id)a2;
- (char)setTargetedFactorPackSetId:(id)a0 targetedTargetingRuleIndex:(id)a1 forDeployment:(id)a2 usingTransaction:(id)a3;
- (char)targetDeployment:(id)a0 toFactorPackSetId:(id)a1 targetingRuleIndex:(id)a2 deallocatedDeployments:(id)a3 usingTransaction:(id)a4;

@end
