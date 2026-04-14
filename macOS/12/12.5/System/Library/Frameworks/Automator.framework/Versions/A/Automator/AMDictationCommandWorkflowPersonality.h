@interface AMDictationCommandWorkflowPersonality : AMApplicationWorkflowPersonality

- (id)imageRepresentation;
- (id)personalitySettingsDictionary;
- (id)infoStringForCompleteInstallationWithMetaData:(id)a0;
- (id)pluginHeaderViewController;
- (BOOL)canSaveWorkflow:(id)a0 atURL:(id)a1 forInstallation:(BOOL)a2 error:(id *)a3;
- (BOOL)finishSavingWorkflow:(id)a0 forOperation:(unsigned long long)a1 atURL:(id)a2 error:(id *)a3;
- (id)commandPropertiesFromWorkflow:(id)a0;
- (id)syncCommandProperties:(id)a0 atURL:(id)a1;
- (void)updateWorkflowMetaDataWithCommandProperties:(id)a0 forWorkflow:(id)a1 atURL:(id)a2;

@end
