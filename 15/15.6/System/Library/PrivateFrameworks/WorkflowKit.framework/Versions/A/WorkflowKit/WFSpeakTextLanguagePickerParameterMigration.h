@interface WFSpeakTextLanguagePickerParameterMigration : WFWorkflowMigration

+ (char)workflowNeedsMigration:(id)a0 fromClientVersion:(id)a1;

- (id)availableLanguageCodes;
- (void)migrateWorkflow;
- (void)migrateSpeakTextLanguageParameterInParametersDictionary:(id)a0;

@end
