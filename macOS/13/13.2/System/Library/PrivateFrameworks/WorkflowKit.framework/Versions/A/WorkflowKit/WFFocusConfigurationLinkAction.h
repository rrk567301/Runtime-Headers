@class DNDModeConfigurationService;

@interface WFFocusConfigurationLinkAction : WFLinkAction

@property (retain, nonatomic) DNDModeConfigurationService *configurationService;

+ (id)genericRuntimeError;

- (id)name;
- (void).cxx_destruct;
- (id)localizedAppName;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)parameterDefinitions;
- (id)contentDestinationWithError:(id *)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (BOOL)requiresRemoteExecution;
- (id)parameterSummary;
- (id)descriptionSummary;
- (id)localizedSubcategoryForCategory:(id)a0;
- (void)wasAddedToWorkflowByUser:(id)a0;
- (unsigned long long)parameterCollapsingBehavior;
- (BOOL)shouldAskForValuesWhileProcessingParameterStates;
- (void)willBeginProcessingParameterStates;
- (BOOL)shouldStripSensitiveContentFromParameterSerialization;
- (id)selectedFocusIdentifier;
- (id)dndApplicationIdentifier;
- (void)createAndCommitFocusConfigurationToDND;
- (id)currentFocusConfiguration;
- (void)setFocusConfigurationEnablementStatus:(BOOL)a0;
- (void)enableFocusConfiguration;
- (void)disableFocusConfiguration;
- (void)toggleFocusConfiguration;
- (void)clearFocusConfiguration;
- (void)updateParameterStatesFromCurrentDNDConfiguration;
- (BOOL)isRunningInsideFocusConfigurationExtension;

@end
