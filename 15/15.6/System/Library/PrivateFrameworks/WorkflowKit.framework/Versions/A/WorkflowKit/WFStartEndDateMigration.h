@interface WFStartEndDateMigration : WFWorkflowMigration

+ (char)workflowNeedsMigration:(id)a0 fromClientVersion:(id)a1;

- (void)migrateWorkflow;

@end
