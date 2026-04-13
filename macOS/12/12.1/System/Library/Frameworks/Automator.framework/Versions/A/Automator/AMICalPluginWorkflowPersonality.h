@interface AMICalPluginWorkflowPersonality : AMApplicationWorkflowPersonality

- (id)imageRepresentation;
- (id)personalitySettingsDictionary;
- (id)infoStringForCompleteInstallationWithMetaData:(id)a0;
- (BOOL)finishSavingWorkflow:(id)a0 forOperation:(unsigned long long)a1 atURL:(id)a2 error:(id *)a3;

@end
