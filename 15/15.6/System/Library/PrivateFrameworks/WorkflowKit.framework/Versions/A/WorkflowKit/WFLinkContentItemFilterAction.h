@class LNQueryMetadata, NSString, WFActionAuxiliaryButton, LNPropertyQuery, LNMetadataProvider, NSDictionary, LNEntityMetadata, LNFullyQualifiedActionIdentifier, INAppIntentDescriptor;

@interface WFLinkContentItemFilterAction : WFContentItemFilterAction <WFLinkActionProtocol> {
    NSDictionary *_outputDictionary;
    LNMetadataProvider *_metadataProvider;
    NSDictionary *_propertiesByPropertyIdentifier;
}

@property (nonatomic, readonly) LNPropertyQuery *propertyQuery;
@property (nonatomic, readonly) WFActionAuxiliaryButton *swift_auxiliaryButton;
@property (readonly, nonatomic) INAppIntentDescriptor *appIntentDescriptor;
@property (readonly, copy, nonatomic) LNQueryMetadata *queryMetadata;
@property (readonly, copy, nonatomic) LNEntityMetadata *entityMetadata;
@property (readonly, nonatomic, getter=isFetchingUniqueEntity) char fetchingUniqueEntity;
@property (readonly, nonatomic) LNFullyQualifiedActionIdentifier *fullyQualifiedLinkActionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)localizedNameWithContext:(id)a0;
- (id)outputDictionary;
- (id)displayableAppDescriptor;
- (id)metadataProvider;
- (void)finishRunningWithError:(id)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)parameterDefinitions;
- (void)initializeParameters;
- (id)localizedDefaultOutputNameWithContext:(id)a0;
- (id)localizedDescriptionResultWithContext:(id)a0;
- (id)localizedDescriptionSummaryWithContext:(id)a0;
- (id)localizedKeywordsWithContext:(id)a0;
- (char)outputsMultipleItems;
- (id)parameterSummary;
- (char)visibleForUse:(long long)a0;
- (id)copyWithSerializedParameters:(id)a0;
- (id)backingActionIdentifiers;
- (void)configureParameter:(id)a0;
- (id)entityMetadataForIdentifier:(id)a0;
- (void)finishRunningWithOutput:(id)a0 randomSortOrder:(char)a1 error:(id)a2;
- (id)initWithIdentifier:(id)a0 queryMetadata:(id)a1 entityMetadata:(id)a2 definition:(id)a3 serializedParameters:(id)a4 appIntentDescriptor:(id)a5 fullyQualifiedActionIdentifier:(id)a6;
- (char)isApprovedForPublicShortcutsDrawer;
- (char)isInMemoryFindAction;
- (id)linkValueTypes;
- (id)localizedCategoryWithContext:(id)a0;
- (id)propertiesByPropertyIdentifier;
- (void)serializeAppIntentDescriptorIfNecessary;
- (void)showChronoControlIfPossibleWithCompletionHandler:(id /* block */)a0;
- (id)sortingOptionsWithRandomSortOrder:(char *)a0;

@end
