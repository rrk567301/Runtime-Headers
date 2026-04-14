@class CNContactStore, NSXPCConnection, BMSource, NSDictionary, NSObject, _PSSuggesterConfiguration;
@protocol OS_dispatch_queue;

@interface _PSSuggester : NSObject {
    NSXPCConnection *_connection;
    NSXPCConnection *_userConnection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_feedbackQueue;
    BMSource *_feedbackSource;
    CNContactStore *_contactStore;
    NSDictionary *_appBundleIdToShareExtensionMapping;
    NSObject<OS_dispatch_queue> *_peopleSuggestionQueue;
    NSObject<OS_dispatch_queue> *_appExtensionQueue;
}

@property (readonly, nonatomic) _PSSuggesterConfiguration *configuration;

+ (id)suggesterWithDaemonUsingMaxSuggestionCount:(long long)a0;
+ (id)suggesterWithDaemon;
+ (void)initializePSSuggesterCacheWithMaxSuggestionCount:(id)a0;

- (id)_dateFormatter;
- (id)contactStore;
- (void)showNotificationToFileARadarForUserStudyParticipants;
- (void)provideFeedbackForMessagesZkwSuggestions:(id)a0;
- (id)rankedSiriNLContactSuggestionsFromContext:(id)a0 maxSuggestions:(id)a1 interactionId:(id)a2;
- (BOOL)interactionAvailableForHandle:(id)a0 interactionStoreDB:(id)a1;
- (id)candidatesForShareSheetRankingCompute;
- (id)photosContactInferencesSuggestionsWithPredictionContext:(id)a0;
- (id)shareInformationForPhotoId:(id)a0 dateInterval:(id)a1;
- (void)dealloc;
- (id)initWithConfiguration:(id)a0 feedbackRecording:(BOOL)a1;
- (void)provideFeedbackForSuggestions:(id)a0;
- (id)rankedFamilySuggestions;
- (id)hourOfDayProbabilitiesToInteractWithContacts:(id)a0;
- (void)asyncShareExtensionSuggestionsFromContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)generatePSRTelemetry:(id)a0;
- (id)rankedZKWSuggestionsFromContext:(id)a0;
- (id)rankedAutocompleteSuggestionsFromContext:(id)a0 candidates:(id)a1;
- (id)candidatesForShareSheetRanking;
- (id)rankedNameSuggestionsFromContext:(id)a0 name:(id)a1;
- (void)provideSuggestLessFeedbackForShareSheetSuggestion:(id)a0;
- (id)suggestInteractionsFromContext:(id)a0;
- (id)init;
- (void)writeFeedbackForContactsAutocompleteSuggestions:(id)a0;
- (id)_stringFromValue:(id)a0;
- (void)asyncSuggestInteractionsFromContext:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (id)_getUserDaemonXPCConnection;
- (id)photosRelationshipSuggestionsWithPredictionContext:(id)a0;
- (id)interactionCountForHandle:(id)a0 fetchLimit:(unsigned long long)a1 interactionStoreDB:(id)a2;
- (void)deleteInteractionsMatchingSuggestLessFeedback:(id)a0;
- (void)provideFeedbackForContactsAutocompleteSuggestions:(id)a0;
- (id)hourOfDayProbabilitiesToInteractWithContact:(id)a0;
- (id)appExtensionSuggestionsFromContext:(id)a0;
- (void)_recordFeedbackToInteractionStoreWithFeedback:(id)a0 mechanism:(long long)a1;
- (id)autocompleteSearchResultsWithPredictionContext:(id)a0;
- (void)asyncShareExtensionSuggestionsFromContext:(id)a0 timeout:(double)a1 completionHandler:(id /* block */)a2;
- (void)asyncSuggestInteractionsFromContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)familyRecommendationSuggestionsWithPredictionContext:(id)a0;
- (id)rankedGlobalSuggestionsFromContext:(id)a0 contactsOnly:(BOOL)a1;
- (BOOL)interactionAvailableForHandle:(id)a0;
- (void)deleteUIInteractionsMatchingSuggestLessFeedback:(id)a0;
- (id)initWithDaemonUsingConfiguration:(id)a0;
- (id)shareExtensionSuggestionsFromContext:(id)a0;
- (id)shareInformationForPhotoId:(id)a0 dateInterval:(id)a1 interactionStoreDB:(id)a2;
- (id)getCachedSuggestionsFetchingIfNeeded:(BOOL)a0;
- (id)initWithConfiguration:(id)a0;
- (id)shareSheetInteractionsFromContext:(id)a0 maximumNumberOfSuggestions:(long long)a1;
- (BOOL)isTransportBundleIDSupported:(id)a0;
- (BOOL)reportShareSheetTimeoutWithError:(id *)a0;
- (id)shareSheetInteractionsFromContext:(id)a0;
- (void)donateCA2Biome:(id)a0;
- (id)interactionCountForHandle:(id)a0 fetchLimit:(unsigned long long)a1;
- (id)buildFilteringPredicateMatchingSuggestLessFeedback:(id)a0;
- (id)convertCoreAnalyticsEvent2BiomeEvent:(id)a0;
- (void).cxx_destruct;
- (id)relativeAppUsageProbabilitiesForCandidateBundleIds:(id)a0 daysAgo:(long long)a1;

@end
