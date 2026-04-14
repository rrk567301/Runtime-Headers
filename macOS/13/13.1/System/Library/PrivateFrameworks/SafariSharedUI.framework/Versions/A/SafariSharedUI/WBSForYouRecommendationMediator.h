@class UABestAppSuggestionManager, WBSForYouPerSitePreferenceManager, NSArray, NSString, WBSForYouDataSourceWeightManager, UABestAppSuggestion, NSCache, CKContextClient, NSObject, WBSFoundInRecommendationManager, WBSForYouTopicManager;
@protocol OS_dispatch_queue;

@interface WBSForYouRecommendationMediator : NSObject <UABestAppSuggestionManagerDelegate> {
    WBSForYouTopicManager *_topicManager;
    WBSFoundInRecommendationManager *_foundInManager;
    WBSForYouDataSourceWeightManager *_dataSourceWeightManager;
    WBSForYouPerSitePreferenceManager *_perSitePreferenceManager;
    UABestAppSuggestionManager *_appSuggestionManager;
    UABestAppSuggestion *_currentAppSuggestion;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSCache *_messagesMetadataCache;
    CKContextClient *_contextClient;
    id /* block */ _historyProvider;
}

@property (readonly, copy, nonatomic) NSArray *dataSources;
@property (nonatomic) BOOL ignoreMinimumNumberOfRecommendationsPerTopic;
@property (nonatomic) BOOL suppressHistoryDeduplication;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_titleForRecommendationSource:(unsigned long long)a0;
+ (id)_titleForRecommendationTopicSource:(unsigned long long)a0;
+ (double)scoreForRecommendation:(id)a0 weightManager:(id)a1 simplifiedURLStringToLastVisitedDateMap:(id)a2;
+ (void)_rankRecommendationsInPlace:(id)a0 history:(id)a1 weightManager:(id)a2 suppressHistoryDeduplication:(BOOL)a3;
+ (id)_adjustedTopicsWithTopics:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)bestAppSuggestionChanged:(id)a0;
- (id)analyticsMetadataForRecommendation:(id)a0;
- (void)updatedTopicsWithCompletionHandler:(id /* block */)a0;
- (id)initWithContextClient:(id)a0 historyProvider:(id /* block */)a1;
- (void)retrieveHandoffRecommendationWithCompletionHandler:(id /* block */)a0;
- (void)downvoteSource:(unsigned long long)a0;
- (void)banURLsOfSameDomainAsURL:(id)a0;
- (void)clearDataSourceWeights;
- (void)beginListeningForURLSuggestionChanges;
- (id)recommendationFromDictionary:(id)a0;
- (void)stopListeningForURLSuggestionChanges;
- (void)updatedRecommendationsForTopics:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)loadLinkPresentationMetadataForMessageWithGUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchImageForRecommendation:(id)a0 completionHandler:(id /* block */)a1;
- (void)_didUpdateFoundInSuggestions:(id)a0;
- (void)banURLsOfSameDomainAsURL:(id)a0 postingChangeNotificationWhenDone:(BOOL)a1;
- (void)_createPreferenceManagerIfNecessary;
- (void)obtainMessagesImagesWherePossibleForRecommendations:(id)a0 completionHandler:(id /* block */)a1;
- (void)_fetchImagesForRecommendations:(id)a0 recommendationsDispatchGroup:(id)a1;
- (void)_retrieveFoundInRecommendationsWithCompletionHandler:(id /* block */)a0;
- (void)_createAppSuggestionsManagerIfNecessary;
- (void)_beginListeningForHandoffActivity;
- (void)_endListeningForHandoffActivity;
- (void)downvoteSource:(unsigned long long)a0 postingChangeNotificationWhenDone:(BOOL)a1;
- (id)_dataSourceWeightManager;

@end
