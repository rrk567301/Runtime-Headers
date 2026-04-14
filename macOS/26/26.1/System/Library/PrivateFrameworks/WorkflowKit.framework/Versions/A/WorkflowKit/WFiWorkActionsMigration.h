@interface WFiWorkActionsMigration : WFWorkflowMigration

+ (BOOL)workflowNeedsMigration:(id)a0 fromClientVersion:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (void)migrateWorkflow;

@end
