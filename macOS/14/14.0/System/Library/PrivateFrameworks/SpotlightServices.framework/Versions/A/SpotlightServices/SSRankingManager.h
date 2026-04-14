@class NSString, NSSet, NSMutableString, NSDictionary, PRSRankingConfiguration;

@interface SSRankingManager : NSObject

@property (retain) NSString *query;
@property (retain) NSSet *allowedTopHitSections;
@property BOOL isCancelled;
@property (nonatomic) BOOL bullseyeRankingEnabled;
@property (retain, nonatomic) PRSRankingConfiguration *rankingConfiguration;
@property (retain, nonatomic) NSMutableString *logValues;
@property (retain, nonatomic) NSDictionary *groupedResults;

+ (void)initialize;
+ (id)getSuggestionsRankingThresholds;
+ (void)determineTopHitsForSafariSection:(id)a0 forQuery:(id)a1;
+ (void)logSections:(id)a0 prefix:(id)a1 query:(id)a2;
+ (void)moveSafariTopHitsToTopOfSection:(id)a0;
+ (id)nominateServerTopHitForSection:(id)a0 queryString:(id)a1 language:(id)a2;
+ (void)prepareTopHitsParametersForLanguage:(id)a0;
+ (void)reloadRankingParametersFromTrial;
+ (void)fetchDuetValues;
+ (id)getTopHitItems:(id)a0;
+ (void)extractThresholdABValues:(id)a0 forLanguage:(id)a1;
+ (id)getCoreDuetValues;
+ (id)jsonStringFromDictionary:(id)a0;
+ (id)keyForIntervalType:(long long)a0;
+ (id)rankLocalBundles:(id)a0;
+ (void)rankLocalBundlesUsingL3Score:(id)a0;
+ (id)rankLocalBundlesUsingOriginalL2ScoreAndRules:(id)a0;
+ (void)reloadCommittedSearchParametersFromTrial;
+ (void)reloadLocaleSpecificMatchingParameters;
+ (void)reloadRecencyThresholds;
+ (void)reloadSuggestionsRankingThresholds;
+ (void)reloadTopHitsParametersFromTrial;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithQuery:(id)a0;
- (id)applyTopSectionPolicy:(id)a0 withTopHitSection:(id)a1 isPeopleSearch:(BOOL)a2 queryKind:(unsigned long long)a3 correction:(id)a4 queryLength:(unsigned long long)a5 ranker:(id)a6;
- (void)calculateLikelihoodAndPriorForSection:(id)a0 currentTime:(double)a1 shortcutResult:(id)a2 queryId:(unsigned long long)a3 ranker:(id)a4 nominateLocalTopHit:(BOOL)a5;
- (id)initWithPreferredTopHitGroups:(id)a0 rankingConfiguration:(id)a1 searchString:(id)a2;
- (id)makeTopHitSectionUsingSections:(id)a0 withItemRanker:(id)a1 sectionHeader:(id)a2 shortcutResult:(id)a3 isBullseyeNonCommittedSearch:(BOOL)a4 isBullseyeCommittedSearch:(BOOL)a5 parsecEnabled:(BOOL)a6 maxNumAppsInTopHitSection:(unsigned long long)a7;
- (id)nominateLocalTopHitsFromSections:(id)a0 withItemRanker:(id)a1 sectionHeader:(id)a2 maxInitiallyVisibleResults:(unsigned long long)a3 shortcutResult:(id)a4 isBullseyeNonCommittedSearch:(BOOL)a5 isBullseyeCommittedSearch:(BOOL)a6 parsecEnabled:(BOOL)a7 maxNumAppsInTopHitSection:(unsigned long long)a8 queryId:(unsigned long long)a9;
- (id)rankSectionsUsingBundleIDToSectionMapping:(id)a0 withRanker:(id)a1 preferredBundleIds:(id)a2 isScopedSearch:(BOOL)a3 queryId:(unsigned long long)a4 isCJK:(BOOL)a5 isBullseyeNonCommittedSearch:(BOOL)a6 isBullseyeCommittedSearch:(BOOL)a7 isPeopleSearch:(BOOL)a8;
- (BOOL)sectionContainsOnlyStaleApps:(id)a0;
- (BOOL)sectionContainsSomeStaleNonAppleApps:(id)a0 compareToItem:(id)a1;
- (BOOL)sectionDoesNotContainMoreRecentlyUsedApps:(id)a0 lastUsedDate:(id)a1;
- (BOOL)sectionsContainsOnlyOneAppSection:(id)a0;
- (BOOL)sectionsContainsShortcutResult:(id)a0 shortcutResult:(id)a1;
- (void)sendTTRLogsWithSections:(id)a0 searchString:(id)a1 queryKind:(unsigned long long)a2 isCommittedSearch:(BOOL)a3 parsecCameLaterThanSRT:(BOOL)a4;
- (id)CEPValuesForTTR;
- (void)addCEPValuesForTTR;
- (void)applyTopHitRankingPolicyToSection:(id)a0 topResultSection:(id)a1 maxTopHitCount:(long long)a2 isShortcut:(BOOL)a3;
- (long long)compareDate:(id)a0 withDate:(id)a1;
- (void)finalizeLog;
- (float)freshnessAdjustmentForAppResult:(id)a0 section:(id)a1 freshnessBeforeAdjustment:(float)a2 topicality:(float)a3 engagement:(float)a4 launchCount:(float)a5 launchCountTotal:(float)a6 nAppResultsWithLaunchCount:(unsigned long long)a7 launchPortion:(float *)a8;
- (BOOL)isForbiddenTempAppFile:(id)a0;
- (float)likelihoodAdjustmentForMailAndNotesResult:(float)a0 freshness:(float)a1 topicality:(float)a2 engagement:(float)a3 numQueryTokens:(unsigned long long)a4 queryLength:(unsigned long long)a5;
- (void)logPommesScoringForRankingItem:(id)a0 queryId:(unsigned long long)a1 query:(id)a2 bundleID:(id)a3 name:(id)a4 topicality:(float)a5 freshness:(float)a6 engagement:(float)a7 likelihood:(float)a8 launchPortion:(float)a9 launchCount:(float)a10 engagedInSpotlight:(BOOL)a11 exactMatchedLaunchString:(BOOL)a12 lastUsedDate:(id)a13 recentEngagementDateInSpotlight:(id)a14 recentEngagementDateOutSpotlight:(id)a15;
- (void)refineSectionShowingVisibleResultsWithBetterTextMatches:(id)a0;
- (id)relativeRankWithAbsRank:(id)a0 numberValues:(unsigned long long)a1;
- (id)removeBlockListedSectionsForMapping:(id)a0;
- (id)removeBlockListedSectionsForMapping:(id)a0 withRankingConfiguration:(id)a1;
- (double)roundedValueForScore:(double)a0;
- (BOOL)sectionContainsOnlyStaleNonAppleApps:(id)a0;
- (void)thresholdFilesInTopHitSection:(id)a0;
- (float)topicalityAdjustmentForContactsResult:(id)a0 topicalityBeforeAdjustment:(float)a1 freshness:(float)a2;
- (void)updateServerScoresUsingBlockOrder:(id)a0 bundleFeatures:(id)a1;
- (void)withinSectionTopHitNomination:(id)a0 withItemRanker:(id)a1;

@end
