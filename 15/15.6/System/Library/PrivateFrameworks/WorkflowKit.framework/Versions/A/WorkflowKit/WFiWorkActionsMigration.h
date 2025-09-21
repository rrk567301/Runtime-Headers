@interface WFiWorkActionsMigration : WFWorkflowMigration

+ (char)workflowNeedsMigration:(id)a0 fromClientVersion:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)migrateWorkflow;

@end
