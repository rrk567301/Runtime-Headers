@interface WFLanguagePickerMicrosoftToSystemMigration : WFWorkflowMigration

+ (BOOL)workflowNeedsMigration:(id)a0 fromClientVersion:(id)a1;

- (void)migrateWorkflow;
- (id)localeIdentifierFromUnmigratedValue:(id)a0;
- (id)languagesSupportedByTranslation;
- (id)localizedLanguageDisplayNamesToLocaleIdentifiers;
- (id)localeIdentifierFromSerializedLocaleDisplayName:(id)a0;
- (id)localeIdentifierFromLegacySerializedParameterValue:(id)a0;

@end
