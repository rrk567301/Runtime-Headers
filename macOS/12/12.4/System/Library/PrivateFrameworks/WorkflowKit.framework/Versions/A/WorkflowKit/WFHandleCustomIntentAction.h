@class INIntentDescriptor, NSString, WFIntentDynamicResolver, NSArray, INIntentResponseCodableDescription, NSDictionary, WFIntentDynamicResolutionRequest, INIntentCodableDescription, INSchema;

@interface WFHandleCustomIntentAction : WFHandleIntentAction <WFCustomIntentDynamicEnumerationDataSource, WFDynamicResolveParameterDataSource, WFIntentDynamicResolverDataSource> {
    INIntentCodableDescription *_codableDescription;
    INIntentResponseCodableDescription *_responseCodableDescription;
    NSString *_localizedName;
    NSString *_localizedKeyParameterDisplayName;
    NSDictionary *_descriptionDictionary;
    NSArray *_parameterDefinitions;
    id _parameterSummaryDefinition;
    NSDictionary *_inputDictionary;
    NSDictionary *_outputDictionary;
    INIntentDescriptor *_intentDescriptor;
}

@property (readonly, nonatomic) INSchema *schema;
@property (readonly, copy, nonatomic) NSString *appIdentifier;
@property (readonly, nonatomic) WFIntentDynamicResolver *dynamicResolver;
@property (retain, nonatomic) WFIntentDynamicResolutionRequest *lastDynamicResolutionRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)name;
- (void).cxx_destruct;
- (id)localizedName;
- (id)resolver;
- (id)descriptionDictionary;
- (id)inputDictionary;
- (id)outputDictionary;
- (long long)intentCategory;
- (id)intentDescription;
- (id)codableDescription;
- (BOOL)isDiscontinued;
- (id)parameterDefinitions;
- (id)slots;
- (id)serializedParametersForDonatedIntent:(id)a0 allowDroppingUnconfigurableValues:(BOOL)a1;
- (BOOL)populatesInputFromInputParameter;
- (void)initializeParameters;
- (id)enumeration:(id)a0 localizedLabelForPossibleState:(id)a1;
- (void)loadPossibleStatesForEnumeration:(id)a0 searchTerm:(id)a1 completionHandler:(id /* block */)a2;
- (void)loadDefaultSerializedRepresentationForEnumeration:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)enumerationAllowsMultipleValues:(id)a0;
- (id)localizedKeyParameterDisplayName;
- (id)generatedIntentWithIdentifier:(id)a0 input:(id)a1 processedParameters:(id)a2 error:(id *)a3;
- (id)generatedResourceNodes;
- (id)parameterKeysIgnoredForParameterSummary;
- (id)intentDescriptor;
- (void)parameterDefaultSerializedRepresentationDidChange:(id)a0;
- (id)requiredResourcesForIntentAvailableResource;
- (void)startExecutingIntent:(id)a0;
- (id)actionForAppIdentifier:(id)a0;
- (void)dynamicResolveParameterDidEndResolutionSession:(id)a0;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2 stringLocalizer:(id)a3;
- (id)titleForINShortcut:(id)a0;
- (void)setIntentDescriptor:(id)a0;
- (BOOL)intentDescriptorIsSyncedFromOtherDevices;
- (id)copyWithSerializedParameters:(id)a0;
- (id)createStateForParameter:(id)a0 fromSerializedRepresentation:(id)a1;
- (BOOL)shouldInsertExpandingParameterForParameter:(id)a0;
- (void)configureResourcesForParameter:(id)a0;
- (void)generateSkeletonIntentForDynamicResolver:(id)a0 withCompletionBlock:(id /* block */)a1;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2 schema:(id)a3 resolvedIntentDescriptor:(id)a4 stringLocalizer:(id)a5;
- (id)parametersByIntentSlotName;
- (void)setupParameter:(id)a0;
- (id)responseCodableDescription;
- (id)createBundleAccessGrant;
- (id)parameterSummaryDefinition;
- (id)prettyErrorForIntentsExtensionError:(id)a0;
- (void)setUpResolverIfNeededForParameter:(id)a0 withCompletionBlock:(id /* block */)a1;
- (id)localizedConfigurationPromptDialogForPamameter:(id)a0;
- (void)resolveOptionsForUserInput:(id)a0 forDynamicResolveParameter:(id)a1 completion:(id /* block */)a2;
- (void)localizedDisambiguationPromptForItems:(id)a0 intent:(id)a1 dynamicResolveParameter:(id)a2 completion:(id /* block */)a3;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2 schema:(id)a3 className:(id)a4 bundleIdentifier:(id)a5 stringLocalizer:(id)a6;

@end
