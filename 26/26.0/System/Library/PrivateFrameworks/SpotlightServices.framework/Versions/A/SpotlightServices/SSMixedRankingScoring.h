@interface SSMixedRankingScoring : NSObject

+ (void)applyRuntimeScoringConfig:(id)a0;
+ (id)attributeEvaluatorWithQuery:(id)a0;
+ (void)determineRuntimeScoringConfig:(id)a0;
+ (void)prepareResultFieldsIfNeeded:(id)a0 appDetails:(id)a1;
+ (void)scoreResult:(id)a0 withEvaluator:(id)a1 quParsedEvaluator:(id)a2 config:(id)a3;
+ (void)sortResults:(id)a0 config:(id)a1;
+ (BOOL)_isBroaderFileEquivalentBundle:(id)a0;
+ (float)_getTimeDecayedEngagementsScore:(id)a0 launchStrings:(id)a1 launchDates:(id)a2 withEvaluator:(id)a3 config:(id)a4;
+ (BOOL)_isDocumentEquivalentBundle:(id)a0;
+ (void)_populateResultTextScores:(id)a0 withEvaluator:(id)a1 config:(id)a2;
+ (id)_scoreFuzzyL3:(id)a0 withEvaluator:(id)a1 config:(id)a2;
+ (float)_scoreL3:(id)a0 text:(id)a1 withEvaluator:(id)a2 config:(id)a3;
+ (float)_scoreResultContext:(id)a0 config:(id)a1;
+ (float)_scoreResultEngagement:(id)a0 withEvaluator:(id)a1 config:(id)a2;
+ (double)_scoreResultFreshness:(id)a0 config:(id)a1;
+ (float)_scoreResultText:(id)a0 withEvaluator:(id)a1 quParsedEvaluator:(id)a2 config:(id)a3;
+ (float)_scoreResultTextServer:(id)a0 withEvaluator:(id)a1;
+ (float)_scoreResultTextTopicality:(id)a0 withEvaluator:(id)a1 quParsedEvaluator:(id)a2 config:(id)a3;
+ (float)_scoreResultType:(id)a0 config:(id)a1;
+ (float)_scoreResultTypeServerTopHit:(id)a0 config:(id)a1;
+ (float)_scoreSuggestion:(id)a0;
+ (long long)compareMRResults:(id)a0 r2:(id)a1;
+ (long long)compareMRResultsByRecency:(id)a0 r2:(id)a1;
+ (long long)compareMRResultsByScoreFreshness:(id)a0 r2:(id)a1;
+ (id)rankerFeaturesGenericRedact;
+ (id)rankerFeaturesIndexes;
+ (id)rankerFeaturesToRedact;
+ (void)scoreResults:(id)a0 withEvaluator:(id)a1 quParsedEvaluator:(id)a2 config:(id)a3;
+ (void)sortUsingMRScore:(id)a0 config:(id)a1;

@end
