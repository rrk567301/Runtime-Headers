@class NSDictionary, _CDInteractionStore, _CDInteractionCache, _PSContactResolver;
@protocol _DKKnowledgeQuerying;

@interface _PSHeuristics : NSObject {
    NSDictionary *_config;
    NSDictionary *_configOverrides;
}

@property (retain, nonatomic) _CDInteractionCache *recencyCache;
@property (nonatomic) double pslRecencyMargin;
@property (retain, nonatomic) NSDictionary *recencyHeuristicLimitNumberOfProxiesByReason;
@property (readonly, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;
@property (readonly, nonatomic) _CDInteractionStore *interactionStore;
@property (readonly, nonatomic) _PSContactResolver *contactResolver;
@property (readonly, nonatomic) _CDInteractionCache *messageInteractionCache;

+ (id)templateForPhoneCallHeuristicFromSuggestionProxy:(id)a0;
+ (id)PSHeuristicsRecencyReasonToString:(long long)a0;

- (long long)recencyMarginInSecondsForHeuristic:(id)a0;
- (id)psr_inPhoneCallHeuristicSuggestionProxiesWithBundleIds:(id)a0 predictionContext:(id)a1 interactionsStatistics:(id)a2;
- (void)updateHeuristicParameterOverrides:(id)a0;
- (id)pastSharesOfTopDomainURLAwareSuggestionProxiesForInteractionStatistics:(id)a0;
- (id)hyperRecentViewedThreadHeuristicSuggestionProxiesForInteractionStatistics;
- (void)updateModelProperties:(id)a0;
- (id)hyperRecentCallHeuristicSuggestionProxiesForInteractionStatistics:(id)a0;
- (double)thresholdForHeuristic:(id)a0;
- (void)prepareRecencyCacheWithSupportedBundleIds:(id)a0;
- (id)proximityBoostingHeuristicWithProximityBooster:(id)a0 existingSuggestions:(id)a1;
- (id)hyperRecentHeuristicSuggestionProxiesForInteractionStatistics:(id)a0 forStatName:(id)a1 withRecencyMargin:(long long)a2 maxNumberOfSuggestions:(long long)a3;
- (id)heuristicsFromInteractionsStatistics:(id)a0 forStatsNames:(id)a1 threshold:(double)a2 maxNumberOfSuggestions:(int)a3 reason:(id)a4;
- (id)peopleAwareSuggestionProxiesForInteractionStatistics:(id)a0;
- (id)pastSharesAwareSuggestionProxiesForInteractionStatistics:(id)a0;
- (id)hyperRecentHeuristicSuggestionProxiesWithReferenceDate:(id)a0 predictionContextBundleId:(id)a1;
- (id)inPhoneCallHeuristicSuggestionProxiesWithBundleIds:(id)a0 predictionContext:(id)a1;
- (id)hyperRecentHeuristicSuggestionProxiesForInteractionStatistics:(id)a0;
- (id)peopleAwareSuggestionProxiesForDetectedFaces:(id)a0;
- (id)initWithKnowledgeStore:(id)a0 interactionStore:(id)a1 contactResolver:(id)a2 messageInteractionCache:(id)a3;
- (id)hourOfDayProbabilitiesToInteractWithContacts:(id)a0;
- (id)scenesBasedFeaturesAwareSuggestionProxiesForInteractionStatistics:(id)a0 forFeatureNames:(id)a1;
- (id)returnDocumentToSender:(id)a0;
- (id)proxiesByRecencyUsingInteractions:(id)a0 startIndex:(unsigned long long)a1 reason:(long long)a2 allowNonSupportedBundleIDs:(BOOL)a3;
- (id)initWithKnowledgeStore:(id)a0 interactionStore:(id)a1 contactResolver:(id)a2 shareSheetSupportedBundleIds:(id)a3 messageInteractionCache:(id)a4;
- (long long)maxNumberOfSuggestionSlotsForHeuristic:(id)a0;
- (id)pastSharesWithCurrentAppAwareSuggestionProxiesForInteractionStatistics:(id)a0;
- (void).cxx_destruct;
- (id)hyperRecentHeuristicIncomingSuggestionProxiesForInteractionStatistics:(id)a0;
- (id)valueForHeuristic:(id)a0 parameter:(id)a1;
- (id)recentNonSystemSuggestionsForBundleIDs:(id)a0 numberOfSuggestion:(unsigned long long)a1;

@end
