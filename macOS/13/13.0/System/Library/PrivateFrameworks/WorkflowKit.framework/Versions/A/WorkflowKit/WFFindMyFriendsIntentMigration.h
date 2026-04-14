@interface WFFindMyFriendsIntentMigration : WFWorkflowMigration

+ (BOOL)workflowNeedsMigration:(id)a0 fromClientVersion:(id)a1;
+ (id)launchIdConversion;
+ (id)classNameConversion;
+ (id)parameterConversion;

- (void)migrateWorkflow;
- (BOOL)updateBundleIdentifierForIntent:(id)a0;
- (BOOL)updateClassNameForIntent:(id)a0;
- (BOOL)convertParametersAndUpdateIntent:(id *)a0;

@end
