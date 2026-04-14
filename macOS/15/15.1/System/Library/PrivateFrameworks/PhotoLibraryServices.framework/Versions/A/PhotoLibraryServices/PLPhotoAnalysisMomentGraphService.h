@protocol PLPhotoAnalysisServiceProvider;

@interface PLPhotoAnalysisMomentGraphService : NSObject {
    id<PLPhotoAnalysisServiceProvider> _serviceProvider;
}

- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (id)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)a0 ofType:(unsigned long long)a1 error:(id *)a2;
- (id)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)a0 ofType:(unsigned long long)a1 error:(id *)a2;
- (void)fetchUnvalidatedPromptSuggestionsWithFetchLimit:(long long)a0 reply:(id /* block */)a1;
- (void)generateMagicSlotSuggestionsForDate:(id)a0 reply:(id /* block */)a1;
- (id)graphStatusWithError:(id *)a0;
- (void)performGraphIncrementalUpdateWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)performGraphRebuildWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)performGraphSearchEntityRankingDonationWithReply:(id /* block */)a0;
- (void)performLocalMemoryEnrichmentForMemoryCategory:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)performLocalMemoryEnrichmentForUUIDs:(id)a0 reply:(id /* block */)a1;
- (void)performLocalMemoryEventElectionWithElectionMode:(id)a0 reply:(id /* block */)a1;
- (void)performMemoryNodesRebuildForCategory:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)performPromptSuggestionCachingWithReply:(id /* block */)a0;
- (void)requestContextInfoWithConfigurationAsData:(id)a0 reply:(id /* block */)a1;
- (void)requestExtendedTokenCollectionWithQueryTokensAsData:(id)a0 representativeMomentUUIDByAssetUUID:(id)a1 personOrPetUUIDsWithNegativeFeedback:(id)a2 reply:(id /* block */)a3;
- (void)requestGraphIsAvailableWithReply:(id /* block */)a0;
- (id)requestGraphSearchMetadataWithOptions:(id)a0 error:(id *)a1;
- (void)requestLocationRetrievalResultsWithQueryTokenAsData:(id)a0 reply:(id /* block */)a1;
- (void)requestMeaningsForMomentUUIDs:(id)a0 reply:(id /* block */)a1;
- (void)requestPersonalEventAssetsForQueryTokenAsData:(id)a0 associatedPersonUUID:(id)a1 scopedAssetUUIDs:(id)a2 momentUUIDByAssetUUID:(id)a3 retrievalResultsByQueryTokenAsData:(id)a4 reply:(id /* block */)a5;
- (void)requestPersonalTraitsForAssetUUIDs:(id)a0 momentUUIDByAssetUUID:(id)a1 extendedTokenCollectionAsData:(id)a2 configurationAsData:(id)a3 reply:(id /* block */)a4;
- (void)requestPersonalTraitsForAssetUUIDs:(id)a0 reply:(id /* block */)a1;
- (void)requestPersonalTraitsForHighlightUUIDs:(id)a0 reply:(id /* block */)a1;
- (void)requestPrewarmQueryAnnotatorForOriginatorPID:(long long)a0 reply:(id /* block */)a1;
- (void)requestQueryAnnotationForQuery:(id)a0 originatorPID:(long long)a1 reply:(id /* block */)a2;
- (id)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(id)a0 ofType:(unsigned long long)a1 isFullAnalysis:(BOOL)a2 error:(id *)a3;
- (id)requestSynonymsDictionariesWithError:(id *)a0;
- (id)requestZeroKeywordsWithOptions:(id)a0 error:(id *)a1;

@end
