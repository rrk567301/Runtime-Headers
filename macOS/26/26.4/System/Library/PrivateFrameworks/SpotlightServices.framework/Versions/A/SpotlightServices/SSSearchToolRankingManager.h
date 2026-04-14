@interface SSSearchToolRankingManager : NSObject

+ (id)processSections:(id)a0 queryContext:(id)a1;
+ (void)calculateLikelihoodForResults:(id)a0 queryContext:(id)a1 isQUInferredIntent:(id)a2 isEventSearchIntent:(BOOL)a3 rankByL2ModelScore:(BOOL)a4;
+ (void)calculateTopicalityForL1ScoringV2:(id)a0 queryContext:(id)a1 name:(id)a2 eventSearchIntent:(BOOL)a3;
+ (float)computeThresholdWithScale:(float)a0 bias:(float)a1 cutoffOffset:(float)a2;
+ (void)deduplicateResults:(id)a0;
+ (float)defaultDenseScoreForRankingItem:(id)a0 queryContext:(id)a1;
+ (void)donateResultsToBiomeForTTRWithData:(id)a0 queryString:(id)a1;
+ (id)getEventIntentFallbackTokens;
+ (id)getL2ModelManager;
+ (id)getLogNameForItem:(id)a0;
+ (id)getPQAL3ModelManager;
+ (void)normalizeTopicalityForResult:(id)a0 queryContext:(id)a1;
+ (id)populateResultsForBiomeForTTRWithResult:(id)a0 queryContext:(id)a1;
+ (void)postRankingFilterResults:(id)a0 queryContext:(id)a1;
+ (void)rankSection:(id)a0 queryContext:(id)a1;
+ (BOOL)shouldBoostItemForBundleAndEntityMatch:(id)a0 queryContext:(id)a1;
+ (BOOL)shouldPreRankingFilterEventResult:(id)a0 queryContext:(id)a1 matchQUIntent:(BOOL)a2 hasEventTypeFromQU:(BOOL)a3;
+ (BOOL)shouldPreRankingFilterResult:(id)a0 queryContext:(id)a1 matchQUIntent:(BOOL)a2 intentAndResultWithStartDueDate:(BOOL)a3 seenMailMessageHeaders:(id)a4 seenEventMailMessageHeaders:(id)a5;
+ (void)sortResults:(id)a0 isQUIntent:(id)a1 isQUInferredIntent:(id)a2 queryContext:(id)a3 eventSearchIntent:(BOOL)a4 maxTopicalityPerBundle:(id)a5 preExtractionBoost:(BOOL)a6;

@end
