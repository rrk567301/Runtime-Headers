@class ATXRSFilter, BMBiomeScheduler, BPSSink, _PASSimpleCoalescingTimer, ATXRSRelevanceMonitor, LNMetadataProvider, ATXWidgetSuggestionAbuseGuard, ATXWidgetDescriptorCache, ATXClientModelSuggestionReceiver, NSObject, LNRelevantIntentProvider, NSString, ATXInformationFeatureWeights, CHSWidgetRelevanceService, ATXInformationFeaturizer, ATXInfoToBlendingConfidenceMapper, ATXInformationDescendingStartDateRanker;
@protocol OS_dispatch_queue;

@interface ATXRSWidgetSuggestionProducer : NSObject <ATXRSRelevanceMonitorDelegate, CHSWidgetRelevanceServiceObserver> {
    ATXWidgetDescriptorCache *_descriptorCache;
    ATXRSRelevanceMonitor *_relevanceMonitor;
    ATXRSFilter *_filter;
    ATXWidgetSuggestionAbuseGuard *_abuseGuard;
    ATXInformationFeaturizer *_featurizer;
    ATXInformationFeatureWeights *_featureWeights;
    ATXInformationDescendingStartDateRanker *_ranker;
    ATXInfoToBlendingConfidenceMapper *_confidenceMapper;
    ATXClientModelSuggestionReceiver *_suggestionReceiver;
    LNMetadataProvider *_metadataProvider;
    LNRelevantIntentProvider *_relevantIntentProvider;
    CHSWidgetRelevanceService *_widgetRelevanceService;
    NSObject<OS_dispatch_queue> *_targetQueueForBiome;
    BMBiomeScheduler *_relevantShortcutsTombstoneScheduler;
    BPSSink *_relevantShortcutsTombstoneSink;
    BMBiomeScheduler *_relevantShortcutsStreamScheduler;
    BPSSink *_relevantShortcutsStreamSink;
    NSObject<OS_dispatch_queue> *_queue;
    _PASSimpleCoalescingTimer *_coalescedRefreshRelevantShortcutsOperation;
    int _relevantShortcutRefreshToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)replacementContainerBundleIdForDonationBundleId:(id)a0;
+ (id)_clientModelIdentifier;

- (void)relevanceMonitorDidUpdateCurrentlyRelevantCandidates:(id)a0 relevantContexts:(id)a1;
- (id)_candidatesFromRelevantShortcutsFromStartDate:(id)a0;
- (id)_candidatesFromBundleIdToRelevantIntentsDict:(id)a0;
- (id)relevantShortcutCandidateFromLNRelevantIntent:(id)a0 donationBundleId:(id)a1;
- (id)_infoSuggestionFromCandidate:(id)a0 suggestionIdentifier:(id)a1;
- (id)_proactiveSuggestionsFromScoredInfoSuggestions:(id)a0;
- (BOOL)_areInfoSuggestions:(id)a0 equalToProactiveSuggestions:(id)a1;
- (id)initWithDescriptorCache:(id)a0 relevanceMonitor:(id)a1 filter:(id)a2 abuseGuard:(id)a3 featurizer:(id)a4 featureWeights:(id)a5 ranker:(id)a6 confidenceMapper:(id)a7 suggestionReceiver:(id)a8 metadataProvider:(id)a9 relevantIntentProvider:(id)a10 widgetRelevanceService:(id)a11;
- (void).cxx_destruct;
- (id)init;
- (void)_refreshRelevantShortcuts;
- (void)_coalescedRefreshRelevantShortcuts:(id)a0;
- (void)_pushSuggestionsToBlendingIfNecessary:(id)a0;
- (void)_coalescedRefreshRelevantShortcuts;
- (void)widgetRelevancesDidChangeForRelevanceService:(id)a0;

@end
