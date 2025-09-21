@class NSNumber, NSString, NSArray, NSData, NSError, NSDictionary, NSSet;

@interface PhotoAnalysis.MomentGraphService : _TtCs12_SwiftObject <PLPhotoAnalysisGenericServiceProtocol, PLPhotoAnalysisMomentGraphServiceProtocol> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ worker;
    void /* unknown type, empty encoding */ associatedWorkers;
    void /* unknown type, empty encoding */ taskScheduler;
    void /* unknown type, empty encoding */ requestOrigin;
    void /* unknown type, empty encoding */ stateHolder;
    void /* unknown type, empty encoding */ operationManager;
    void /* unknown type, empty encoding */ queryAnnotatorSessionManager;
}

- (void)cancelOperationsWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void)requestPrewarmQueryAnnotatorForOriginatorPID:(long long)a0 operationID:(NSString *)a1 reply:(void (^)(NSError *))a2;
- (void)validatePromptSuggestionsWithSuggestionUUIDs:(NSArray *)a0 operationID:(NSString *)a1 reply:(void (^)(NSData *, NSError *))a2;
- (void)requestQueryAnnotationForQuery:(NSString *)a0 originatorPID:(long long)a1 operationID:(NSString *)a2 reply:(void (^)(NSData *, NSError *))a3;
- (void)debugValidationFromQueryTemplate:(NSString *)a0 person:(NSString *)a1 city:(NSString *)a2 place:(NSString *)a3 time:(NSString *)a4 reply:(void (^)(NSString *, NSError *))a5;
- (void)fetchUnvalidatedPromptSuggestionsWithFetchLimit:(long long)a0 reply:(void (^)(NSData *, NSError *))a1;
- (void)generateContextualPromptSuggestionsWithReply:(void (^)(NSData *, NSError *))a0;
- (void)generateMagicSlotSuggestionsWithOptions:(NSDictionary *)a0 reply:(void (^)(BOOL, NSError *))a1;
- (void)generateWhimsicalPromptSuggestionsWithReply:(void (^)(NSData *, NSError *))a0;
- (void)performGraphIncrementalUpdateWithOptions:(NSDictionary *)a0 operationID:(NSString *)a1 reply:(void (^)(NSError *))a2;
- (void)performGraphRebuildWithOptions:(NSDictionary *)a0 operationID:(NSString *)a1 reply:(void (^)(NSError *))a2;
- (void)performGraphSearchEntityRankingDonationWithOperationID:(NSString *)a0 reply:(void (^)(NSError *))a1;
- (void)performLibraryUnderstandingWithOperationID:(NSString *)a0 reply:(void (^)(NSError *))a1;
- (void)performLocalMemoryEnrichmentForMemoryCategory:(long long)a0 reply:(id /* block */)a1;
- (void)performLocalMemoryEnrichmentForUUIDs:(id)a0 reply:(id /* block */)a1;
- (void)performLocalMemoryEventElectionWithElectionMode:(NSString *)a0 operationID:(NSString *)a1 reply:(void (^)(NSError *))a2;
- (void)performMemoryNodesRebuildForCategory:(long long)a0 operationID:(NSString *)a1 reply:(void (^)(NSError *))a2;
- (void)performPromptSuggestionCachingWithOperationID:(NSString *)a0 reply:(void (^)(NSError *))a1;
- (void)performPublicEventCachingTaskWithOptions:(NSDictionary *)a0 operationID:(NSString *)a1 reply:(void (^)(NSError *))a2;
- (void)requestAssetSearchKeywordsForAssetCollectionUUIDs:(NSArray *)a0 ofType:(unsigned long long)a1 operationID:(NSString *)a2 reply:(void (^)(NSDictionary *, NSError *))a3;
- (void)requestCharacterCurationInfoForCharacterUUIDs:(NSSet *)a0 operationID:(NSString *)a1 reply:(void (^)(NSData *, NSError *))a2;
- (void)requestExtendedTokenCollectionFromQueryTokensAsData:(NSData *)a0 representativeMomentUUIDByAssetUUID:(NSDictionary *)a1 personOrPetUUIDsWithNegativeFeedback:(NSSet *)a2 sharingFilter:(long long)a3 operationID:(NSString *)a4 reply:(void (^)(NSData *, NSError *))a5;
- (void)requestFilterLocationsByMomentLocationHierarchyForRecipeAsData:(NSData *)a0 operationID:(NSString *)a1 reply:(void (^)(NSData *, NSError *))a2;
- (void)requestGraphIsAvailableWithReply:(void (^)(NSNumber *, NSError *))a0;
- (void)requestGraphSearchMetadataWithOptions:(NSDictionary *)a0 operationID:(NSString *)a1 reply:(void (^)(NSDictionary *, NSError *))a2;
- (void)requestGraphStatusWithReply:(void (^)(NSDictionary *, NSError *))a0;
- (void)requestMeaningsForMomentUUIDs:(NSSet *)a0 operationID:(NSString *)a1 reply:(void (^)(NSDictionary *, NSError *))a2;
- (void)requestPersonGroundingForPersonQuery:(NSString *)a0 operationID:(NSString *)a1 reply:(void (^)(NSData *, NSError *))a2;
- (void)requestPersonalEventMomentsForQueryTokenAsData:(NSData *)a0 associatedPersonUUID:(NSString *)a1 scopedMomentUUIDs:(NSSet *)a2 momentUUIDByAssetUUID:(NSDictionary *)a3 operationID:(NSString *)a4 reply:(void (^)(NSData *, NSError *))a5;
- (void)requestPersonalTraitsForAssetUUIDs:(NSArray *)a0 momentUUIDByAssetUUID:(NSDictionary *)a1 extendedTokenCollectionAsData:(NSData *)a2 configurationAsData:(NSData *)a3 sharingFilter:(long long)a4 operationID:(NSString *)a5 reply:(void (^)(NSData *, NSError *))a6;
- (void)requestPersonalTraitsForAssetUUIDs:(NSArray *)a0 operationID:(NSString *)a1 reply:(void (^)(NSArray *, NSError *))a2;
- (void)requestPersonalTraitsForHighlightUUIDs:(NSArray *)a0 operationID:(NSString *)a1 reply:(void (^)(NSArray *, NSError *))a2;
- (void)requestPublicEventDataForAssetUUID:(NSString *)a0 operationID:(NSString *)a1 reply:(void (^)(NSArray *, NSError *))a2;
- (void)requestPublicEventDataForMomentUUID:(NSString *)a0 operationID:(NSString *)a1 reply:(void (^)(NSArray *, NSError *))a2;
- (void)requestSearchIndexKeywordsForAssetCollectionUUIDs:(NSArray *)a0 ofType:(unsigned long long)a1 operationID:(NSString *)a2 reply:(void (^)(NSDictionary *, NSError *))a3;
- (void)requestSearchableAssetUUIDsBySocialGroupForAssetCollectionUUIDs:(NSArray *)a0 ofType:(unsigned long long)a1 isFullAnalysis:(BOOL)a2 operationID:(NSString *)a3 reply:(void (^)(NSDictionary *, NSError *))a4;
- (void)requestSynonymsDictionariesWithOperationID:(NSString *)a0 reply:(void (^)(NSDictionary *, NSError *))a1;
- (void)warmupMomentGraphWorkerForDuration:(double)a0 operationID:(NSString *)a1 reply:(void (^)(NSError *))a2;

@end
