@class TRIDatabase;

@interface TRIBackgroundMLTaskDatabase : NSObject {
    TRIDatabase *_db;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (struct _PASDBTransactionCompletion_ { char x0; })readTransactionWithFailableBlock:(id /* block */)a0;
- (struct _PASDBTransactionCompletion_ { char x0; })writeTransactionWithFailableBlock:(id /* block */)a0;
- (char)_enumerateTaskRecordsMatchingWhereClause:(id)a0 bind:(id /* block */)a1 transaction:(id)a2 block:(id /* block */)a3;
- (char)activateDeployment:(id)a0 withFactorPackSetId:(id)a1 targetingRuleIndex:(id)a2 usingTransaction:(id)a3;
- (struct { unsigned long long x0; })addBackgroundMLTaskWithTaskDeployment:(id)a0 pluginId:(id)a1 status:(long long)a2 endDate:(id)a3 artifact:(id)a4;
- (char)deactivateDeployment:(id)a0 usingTransaction:(id)a1;
- (char)deactivateTaskDeployment:(id)a0 deactivatedFactorPackSetId:(id *)a1 usingTransaction:(id)a2;
- (char)enumerateActiveTasksNotInList:(id)a0 usingTransaction:(id)a1 withBlock:(id /* block */)a2;
- (char)enumerateActiveTasksWithBlock:(id /* block */)a0;
- (char)enumerateActiveTasksWithTransaction:(id)a0 block:(id /* block */)a1;
- (char)enumerateTaskRecordsMatchingTaskId:(id)a0 transaction:(id)a1 block:(id /* block */)a2;
- (char)enumerateTaskRecordsWithBlock:(id /* block */)a0;
- (char)enumerateTaskRecordsWithTransaction:(id)a0 block:(id /* block */)a1;
- (struct { unsigned long long x0; })removeRecordWithDeployment:(id)a0;
- (char)setActiveFactorPackSetId:(id)a0 activeTargetingRuleIndex:(id)a1 forTaskDeployment:(id)a2 usingTransaction:(id)a3;
- (char)setStatus:(long long)a0 forTaskDeployment:(id)a1 usingTransaction:(id)a2;
- (char)setTargetedFactorPackSetId:(id)a0 targetedTargetingRuleIndex:(id)a1 forTaskDeployment:(id)a2 usingTransaction:(id)a3;
- (char)targetTaskDeployment:(id)a0 toFactorPackSetId:(id)a1 targetingRuleIndex:(id)a2 usingTransaction:(id)a3;
- (id)taskRecordWithTaskDeployment:(id)a0;

@end
