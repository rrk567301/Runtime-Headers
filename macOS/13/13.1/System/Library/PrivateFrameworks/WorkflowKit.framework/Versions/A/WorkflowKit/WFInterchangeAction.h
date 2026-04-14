@class NSArray, INAppDescriptor, ICAction;

@interface WFInterchangeAction : WFAction {
    INAppDescriptor *_appDescriptor;
}

@property (retain, nonatomic) NSArray *contentClasses;
@property (readonly, nonatomic) BOOL requiresCallback;
@property (readonly, nonatomic) ICAction *interchangeAction;

- (id)name;
- (id)description;
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
- (id)inputParameterKey;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (BOOL)skipsProcessingHiddenParameters;
- (id)parameterSummary;
- (id)inputContentClasses;
- (BOOL)inputsMultipleItems;
- (id)outputContentClasses;
- (id)subcategoryForCategory:(id)a0;
- (void)performActionWithInput:(id)a0 parameters:(id)a1 userInterface:(id)a2 successHandler:(id /* block */)a3 errorHandler:(id /* block */)a4;
- (BOOL)outputsMultipleItems;
- (BOOL)inputPassthrough;
- (BOOL)inputRequired;
- (id)specifiedInputContentClasses;
- (id)specifiedOutputContentClasses;
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
