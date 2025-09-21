@interface WFFindMyFriendsIntentMigration : WFWorkflowMigration

+ (id)classNameConversion;
+ (id)launchIdConversion;
+ (id)parameterConversion;
+ (char)workflowNeedsMigration:(id)a0 fromClientVersion:(id)a1;

- (void)migrateWorkflow;
- (char)convertParametersAndUpdateIntent:(id *)a0;
- (char)updateBundleIdentifierForIntent:(id)a0;
- (char)updateClassNameForIntent:(id)a0;

@end
