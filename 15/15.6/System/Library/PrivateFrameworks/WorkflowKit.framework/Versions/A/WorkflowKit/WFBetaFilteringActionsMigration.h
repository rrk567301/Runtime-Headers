@interface WFBetaFilteringActionsMigration : WFWorkflowMigration

+ (id)actionIdentifierMapping;
+ (char)workflowNeedsMigration:(id)a0 fromClientVersion:(id)a1;

- (void)migrateWorkflow;

@end
