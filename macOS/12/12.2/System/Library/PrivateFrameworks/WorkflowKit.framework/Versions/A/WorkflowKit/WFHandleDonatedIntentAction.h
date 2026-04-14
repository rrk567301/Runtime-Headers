@class NSString, INIntentDescriptor, INIntent;

@interface WFHandleDonatedIntentAction : WFHandleIntentAction {
    INIntentDescriptor *_intentDescriptor;
}

@property (readonly, nonatomic) BOOL forceExecutionOnPhone;
@property (readonly, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (retain, nonatomic) INIntent *intent;

+ (id)intentActionWithShortcut:(id)a0 forceExecutionOnPhone:(BOOL)a1 groupIdentifier:(id)a2 error:(id *)a3;

- (id)name;
- (void).cxx_destruct;
- (id)localizedName;
- (id)appIdentifier;
- (long long)intentCategory;
- (id)intentDescription;
- (id)initWithIntent:(id)a0;
- (id)localizedSubtitle;
- (id)serializedParameters;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)initializeParameters;
- (id)localizedKeyParameterDisplayName;
- (id)generatedIntentWithIdentifier:(id)a0 input:(id)a1 processedParameters:(id)a2 error:(id *)a3;
- (id)intentDescriptor;
- (id)localizedDescriptionSummary;
- (id)slots;
- (id)metricsIdentifier;
- (id)initWithIntent:(id)a0 forceExecutionOnPhone:(BOOL)a1;
- (void)continueInAppWithCompletionHandler:(id /* block */)a0;
- (id)initWithInteraction:(id)a0 forceExecutionOnPhone:(BOOL)a1;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2 stringLocalizer:(id)a3;
- (id)executorWithIntent:(id)a0 groupIdentifier:(id)a1;
- (void)setIntentDescriptor:(id)a0;
- (id)parameterSummaryDefinition;

@end
