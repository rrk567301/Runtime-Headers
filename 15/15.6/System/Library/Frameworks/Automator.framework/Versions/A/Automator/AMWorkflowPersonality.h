@class NSString, NSArray, AMWorkflowMetaData, AMTemplateChooserItem, AMPluginHeaderViewController, NSDictionary, NSImage;

@interface AMWorkflowPersonality : NSObject {
    NSDictionary *_settingsDictionary;
    AMTemplateChooserItem *_templateChooserItem;
}

@property (class, readonly, nonatomic) AMWorkflowPersonality *generalWorkflowPersonality;
@property (class, readonly, nonatomic) AMWorkflowPersonality *applicationWorkflowPersonality;
@property (class, readonly, nonatomic) NSArray *workflowPersonalities;

@property (readonly, nonatomic) NSDictionary *settingsDictionary;
@property (readonly, nonatomic) NSDictionary *personalitySettingsDictionary;
@property (readonly, nonatomic) char isPluginType;
@property (readonly, nonatomic) char hasHeaderView;
@property (readonly, copy, nonatomic) NSString *workflowTypeIdentifier;
@property (readonly, copy, nonatomic) NSString *documentType;
@property (readonly, copy, nonatomic) NSString *libraryDirectoryPathComponent;
@property (readonly, copy, nonatomic) NSString *displayLabel;
@property (readonly, copy, nonatomic) NSString *extension;
@property (readonly, copy, nonatomic) NSString *headerInputType;
@property (readonly, copy, nonatomic) NSString *disableWarningDefaultsKey;
@property (readonly, copy, nonatomic) NSString *unlocalizedWorkflowType;
@property (readonly, nonatomic) NSImage *imageRepresentation;
@property (readonly, nonatomic) char showInTitlebar;
@property (readonly, copy, nonatomic) NSString *installationAccessoryViewNibName;
@property (readonly, nonatomic) NSString *headerViewString;
@property (readonly, nonatomic) Class workflowMetaDataClass;
@property (readonly, nonatomic) char allowsRenaming;
@property (readonly, nonatomic) char allowsRevealInAutomatorOnInstallation;
@property (readonly, nonatomic) AMWorkflowMetaData *defaultWorkflowMetaData;
@property (readonly, nonatomic) AMPluginHeaderViewController *pluginHeaderViewController;
@property (readonly, nonatomic) NSArray *templateChooserItems;

+ (void)_instantiateWorkflowPersonalitiesIfNeeded;
+ (id)workflowPersonalitiesByIdentifier;
+ (id)workflowPersonalityForTypeIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)_createDefaultPersonalitySettingsDictionary;
- (char)canSaveWorkflow:(id)a0 atURL:(id)a1 forInstallation:(char)a2 error:(id *)a3;
- (char)finishSavingWorkflow:(id)a0 forOperation:(unsigned long long)a1 atURL:(id)a2 error:(id *)a3;
- (id)infoPlistForWorkflowMetaData:(id)a0 error:(id *)a1;
- (id)infoStringForCompleteInstallationWithMetaData:(id)a0;
- (id)infoStringForInitialInstallationWithMetaData:(id)a0;
- (char)installationCompleteForWorkflowReturningShowCompleted:(id)a0 atURL:(id)a1;
- (id)parentDirectoryURLCreatingIfNecessary:(char)a0 error:(id *)a1;
- (char)shouldShowInTemplates;
- (id)templateDescription;
- (char)updateFileWrapper:(id)a0 forWorkflowMetaData:(id)a1 documentType:(id)a2 error:(id *)a3;

@end
