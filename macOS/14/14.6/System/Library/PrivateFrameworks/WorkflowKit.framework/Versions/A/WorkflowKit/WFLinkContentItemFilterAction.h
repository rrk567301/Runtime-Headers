@class INAppIntentDescriptor, LNFullyQualifiedActionIdentifier, NSString, NSDictionary, LNQueryMetadata, LNMetadataProvider, LNEntityMetadata;

@interface WFLinkContentItemFilterAction : WFContentItemFilterAction <WFLinkActionProtocol> {
    NSDictionary *_outputDictionary;
    LNMetadataProvider *_metadataProvider;
    NSDictionary *_propertiesByPropertyIdentifier;
}

@property (readonly, nonatomic) INAppIntentDescriptor *appIntentDescriptor;
@property (readonly, copy, nonatomic) LNQueryMetadata *queryMetadata;
@property (readonly, copy, nonatomic) LNEntityMetadata *entityMetadata;
@property (readonly, nonatomic) LNFullyQualifiedActionIdentifier *fullyQualifiedLinkActionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)name;
- (void).cxx_destruct;
- (id)outputDictionary;
- (id)displayableAppDescriptor;
- (id)metadataProvider;
- (id)propertyQuery;
- (void)finishRunningWithError:(id)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)descriptionSummary;
- (id)localizedSubcategoryForCategory:(id)a0;
- (id)copyWithSerializedParameters:(id)a0;
- (id)createStateForParameter:(id)a0 fromSerializedRepresentation:(id)a1;
- (id)entityMetadataForIdentifier:(id)a0;
- (void)finishRunningWithOutput:(id)a0 randomSortOrder:(BOOL)a1 error:(id)a2;
- (id)initWithIdentifier:(id)a0 queryMetadata:(id)a1 entityMetadata:(id)a2 definition:(id)a3 serializedParameters:(id)a4 appIntentDescriptor:(id)a5 fullyQualifiedActionIdentifier:(id)a6;
- (BOOL)isInMemoryFindAction;
- (id)linkValueTypes;
- (id)localizedKeywords;
- (id)propertiesByPropertyIdentifier;
- (id)sortingOptionsWithRandomSortOrder:(BOOL *)a0;

@end
