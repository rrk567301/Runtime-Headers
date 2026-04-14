@class INAppIntentDescriptor, NSDictionary, LNQueryMetadata, LNMetadataProvider, LNEntityMetadata;

@interface WFLinkContentItemFilterAction : WFContentItemFilterAction {
    NSDictionary *_outputDictionary;
    LNMetadataProvider *_metadataProvider;
    NSDictionary *_propertiesByPropertyIdentifier;
}

@property (readonly, nonatomic) INAppIntentDescriptor *appIntentDescriptor;
@property (readonly, copy, nonatomic) LNQueryMetadata *queryMetadata;
@property (readonly, copy, nonatomic) LNEntityMetadata *entityMetadata;

- (id)name;
- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)outputDictionary;
- (id)metadataProvider;
- (id)propertyQuery;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)finishRunningWithError:(id)a0;
- (id)copyWithSerializedParameters:(id)a0;
- (id)createStateForParameter:(id)a0 fromSerializedRepresentation:(id)a1;
- (id)initWithIdentifier:(id)a0 queryMetadata:(id)a1 entityMetadata:(id)a2 definition:(id)a3 serializedParameters:(id)a4 appIntentDescriptor:(id)a5;
- (id)propertiesByPropertyIdentifier;
- (BOOL)isInMemoryFindAction;
- (void)finishRunningWithOutput:(id)a0 randomSortOrder:(BOOL)a1 error:(id)a2;
- (id)sortingOptionsWithRandomSortOrder:(BOOL *)a0;
- (id)linkValueTypes;

@end
