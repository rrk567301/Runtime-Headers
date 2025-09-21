@interface AMFolderActionWorkflowPersonality : AMWorkflowPersonality

- (id)imageRepresentation;
- (char)canSaveWorkflow:(id)a0 atURL:(id)a1 forInstallation:(char)a2 error:(id *)a3;
- (char)finishSavingWorkflow:(id)a0 forOperation:(unsigned long long)a1 atURL:(id)a2 error:(id *)a3;
- (id)infoPlistForWorkflowMetaData:(id)a0 error:(id *)a1;
- (id)infoStringForCompleteInstallationWithMetaData:(id)a0;
- (id)personalitySettingsDictionary;
- (id)pluginHeaderViewController;

@end
