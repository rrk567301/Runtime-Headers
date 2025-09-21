@interface SSTopHitNominationManager : NSObject

+ (void)finalizeTopHitsInSections:(id)a0 withTopHitSection:(id)a1;
+ (id)postProcessSectionsBasedOnTopHitSection:(id)a0 withTopHitSection:(id)a1;
+ (char)_nominateServerTopHitCandidate:(id)a0;
+ (char)_recentEngagementOvertakeCheck:(id)a0;
+ (char)_settingsCheck:(id)a0;
+ (char)_bundleExcludedForTopHit:(id)a0;
+ (id)_dropSection:(id)a0 targetSection:(id)a1 reasonString:(id)a2;
+ (char)_freshnessCheck:(id)a0;
+ (char)_hideUnderShowMoreCheck:(id)a0;
+ (char)_imporantPropertyMatch:(id)a0;
+ (char)_isLikelihoodSpecialCase:(id)a0;
+ (char)_keywordMatchCheck:(id)a0;
+ (char)_likelihoodCheck:(id)a0;
+ (float)_likelihoodThresholdForBundle:(id)a0;
+ (char)_minimumKeywordMatch:(id)a0;
+ (char)_needImportantPropertyMatch:(id)a0;
+ (char)_needQUIntentCheck:(id)a0;
+ (char)_safariCheck:(id)a0;
+ (void)_setImportantPropertiesPrefixMatched:(id)a0 value:(unsigned long long)a1;
+ (void)_setImportantPropertiesWordMatched:(id)a0 value:(unsigned long long)a1;
+ (char)_spellCorrectedAppPass:(id)a0;
+ (char)_stricterFreshnessTopicalityEngagementCheck:(id)a0;
+ (char)_topicalityCheck:(id)a0;
+ (void)clearTopHit:(id)a0;
+ (void)clearTopHitCandidate:(id)a0;
+ (void)finalizeTopHitSection:(id)a0;
+ (float)getTopHitThreshold:(id)a0;
+ (char)isTopHit:(id)a0;
+ (char)isTopHitCandidate:(id)a0;
+ (void)nominateTopHitCandidate:(id)a0;
+ (char)passLikelihoodForTopHitCandidate:(id)a0;
+ (void)setTopHitCandidate:(id)a0;
+ (void)setTopHitMustBe:(id)a0;
+ (void)setTopHitShouldBe:(id)a0;
+ (void)thresholdFilesInTopHitSection:(id)a0;
+ (void)topHitCandidacyThresholdingForAppSection:(id)a0;

@end
