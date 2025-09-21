@class NSArray, INAppDescriptor, ICAction;

@interface WFInterchangeAction : WFAction {
    INAppDescriptor *_appDescriptor;
}

@property (retain, nonatomic) NSArray *contentClasses;
@property (readonly, nonatomic) char requiresCallback;
@property (readonly, nonatomic) ICAction *interchangeAction;

- (id)description;
- (void).cxx_destruct;
- (id)localizedNameWithContext:(id)a0;
- (id)appDescriptor;
- (id)app;
- (char)isDiscontinued;
- (id)requiredResources;
- (void)runAsynchronouslyWithInput:(id)a0;
- (char)skipsProcessingHiddenParameters;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (id)inputContentClasses;
- (id)inputParameterKey;
- (char)inputPassthrough;
- (char)inputRequired;
- (char)inputsMultipleItems;
- (id)localizedKeywordsWithContext:(id)a0;
- (id)outputContentClasses;
- (char)outputsMultipleItems;
- (id)parameterSummary;
- (void)performActionWithInput:(id)a0 parameters:(id)a1 userInterface:(id)a2 successHandler:(id /* block */)a3 errorHandler:(id /* block */)a4;
- (char)visibleForUse:(long long)a0;
- (id)appDescriptorFromICApp:(id)a0;
- (char)appResourceRequiresAppInstall;
- (char)callbackIsCurrentlyDisabled;
- (id)descriptionDefinition;
- (id)disabledPlatformsForInterchangeActionWithIdentifier:(id)a0;
- (id)initWithInterchangeAction:(id)a0 identifier:(id)a1 definition:(id)a2 serializedParameters:(id)a3;
- (id)localizedCategoryWithContext:(id)a0;
- (char)mappedValueIsTrue:(id)a0 forContentMapping:(id)a1;
- (char)neverSuggested;
- (void)setAppDescriptor:(id)a0;
- (char)shouldSuppressCallback;
- (id)specifiedInputContentClasses;
- (id)specifiedOutputContentClasses;
- (id)userInterfaceTypes;

@end
