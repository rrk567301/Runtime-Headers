@class NSArray, INAppDescriptor, ICAction;

@interface WFInterchangeAction : WFAction {
    INAppDescriptor *_appDescriptor;
}

@property (retain, nonatomic) NSArray *contentClasses;
@property (readonly, nonatomic) BOOL requiresCallback;
@property (readonly, nonatomic) ICAction *interchangeAction;

- (id)description;
- (id)name;
- (void).cxx_destruct;
- (id)keywords;
- (id)creationDate;
- (id)descriptionDictionary;
- (id)categories;
- (BOOL)isDiscoverable;
- (id)lastModifiedDate;
- (id)shortName;
- (id)appDescriptor;
- (id)app;
- (BOOL)isDiscontinued;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)requiredResources;
- (BOOL)skipsProcessingHiddenParameters;
- (id)parameterSummary;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (BOOL)inputsMultipleItems;
- (id)inputContentClasses;
- (id)outputContentClasses;
- (id)subcategoryForCategory:(id)a0;
- (BOOL)outputsMultipleItems;
- (void)performActionWithInput:(id)a0 parameters:(id)a1 userInterface:(id)a2 successHandler:(id /* block */)a3 errorHandler:(id /* block */)a4;
- (id)inputParameterKey;
- (BOOL)inputPassthrough;
- (BOOL)inputRequired;
- (id)specifiedOutputContentClasses;
- (id)specifiedInputContentClasses;
- (BOOL)appResourceRequiresAppInstall;
- (void)setAppDescriptor:(id)a0;
- (id)userInterfaceTypes;
- (BOOL)neverSuggested;
- (id)initWithInterchangeAction:(id)a0 serializedParameters:(id)a1;
- (id)initWithInterchangeAction:(id)a0 identifier:(id)a1 definition:(id)a2 serializedParameters:(id)a3;
- (BOOL)shouldSuppressCallback;
- (BOOL)callbackIsCurrentlyDisabled;
- (BOOL)mappedValueIsTrue:(id)a0 forContentMapping:(id)a1;
- (id)disabledPlatformsForInterchangeActionWithIdentifier:(id)a0;

@end
