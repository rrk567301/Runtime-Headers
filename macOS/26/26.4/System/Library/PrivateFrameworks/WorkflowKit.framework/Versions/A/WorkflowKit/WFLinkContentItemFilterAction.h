@class LNQueryMetadata, NSString, WFActionAuxiliaryButton, LNPropertyQuery, LNMetadataProvider, NSDictionary, LNFullyQualifiedActionIdentifier, LNEntityMetadata, INAppIntentDescriptor;

@interface WFLinkContentItemFilterAction : WFContentItemFilterAction <WFLinkActionProtocol> {
    NSDictionary *_outputDictionary;
    LNMetadataProvider *_metadataProvider;
    NSDictionary *_propertiesByPropertyIdentifier;
}

@property (nonatomic, readonly) LNPropertyQuery *propertyQuery;
@property (nonatomic, readonly) WFActionAuxiliaryButton *swift_auxiliaryButton;
@property (nonatomic, readonly) NSString *spotlightQuery;
@property (readonly, nonatomic) INAppIntentDescriptor *appIntentDescriptor;
@property (retain, nonatomic) LNFullyQualifiedActionIdentifier *fullyQualifiedLinkActionIdentifier;
@property (readonly, copy, nonatomic) LNQueryMetadata *queryMetadata;
@property (readonly, copy, nonatomic) LNEntityMetadata *entityMetadata;
@property (readonly, nonatomic, getter=isFetchingUniqueEntity) BOOL fetchingUniqueEntity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)metadataProvider;
- (void).cxx_destruct;
- (id)localizedNameWithContext:(id)a0;
- (id)outputDictionary;
- (id)displayableAppDescriptor;
- (void)finishRunningWithError:(id)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)parameterDefinitions;
- (id)backingActionIdentifiers;
- (void)configureParameter:(id)a0;
- (id)entityMetadataForIdentifier:(id)a0;
- (void)initializeParameters;
- (id)localizedDefaultOutputNameWithContext:(id)a0;
- (id)localizedDescriptionResultWithContext:(id)a0;
- (id)localizedDescriptionSummaryWithContext:(id)a0;
- (id)localizedKeywordsWithContext:(id)a0;
- (BOOL)outputsMultipleItems;
- (id)parameterSummary;
- (BOOL)visibleForUse:(long long)a0;
- (id)copyWithSerializedParameters:(id)a0;
- (void)serializeAppIntentDescriptorIfNecessary;
- (void)finishRunningWithOutput:(id)a0 randomSortOrder:(BOOL)a1 error:(id)a2;
- (id)initWithIdentifier:(id)a0 queryMetadata:(id)a1 entityMetadata:(id)a2 definition:(id)a3 serializedParameters:(id)a4 appIntentDescriptor:(id)a5 fullyQualifiedActionIdentifier:(id)a6;
- (BOOL)isApprovedForPublicShortcutsDrawer;
- (id)linkValueTypes;
- (id)localizedCategoryWithContext:(id)a0;
- (id)propertiesByPropertyIdentifier;
- (void)showChronoControlIfPossibleWithCompletionHandler:(id /* block */)a0;
- (id)sortingOptionsWithRandomSortOrder:(BOOL *)a0;

@end
