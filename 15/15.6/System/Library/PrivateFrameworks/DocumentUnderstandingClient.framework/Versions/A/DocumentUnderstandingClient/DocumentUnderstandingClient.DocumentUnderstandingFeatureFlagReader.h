@interface DocumentUnderstandingClient.DocumentUnderstandingFeatureFlagReader : NSObject

@property (class, nonatomic, readonly) char isBackboneModelEnabled;
@property (class, nonatomic, readonly) char isTopicClassificationModelEnabled;
@property (class, nonatomic, readonly) char isCategoryClassificationModelEnabled;
@property (class, nonatomic, readonly) char isFoundInModelsEnabled;
@property (class, nonatomic, readonly) char isIndexNonfileDocumentsEnabled;
@property (class, nonatomic, readonly) char isSearchAndOrganizationDocumentIngestEnabled;
@property (class, nonatomic, readonly) char isAutonamingFromMessagesEnabled;
@property (class, nonatomic, readonly) char isFoundInUseLLMEnabled;
@property (class, nonatomic, readonly) char isFoundInUseLLMMultilingualAdapterEnabled;
@property (class, nonatomic, readonly) char isFoundInUseLLMExtendedLanguagesEnabled;
@property (class, nonatomic, readonly) char isPIRGeocodingEnabled;

- (id)init;

@end
