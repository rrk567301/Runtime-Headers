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
+ (void)reloadRankingParametersFromTrial;
+ (void)prepareTopHitsParametersForLanguage:(id)a0;
+ (void)determineTopHitsForSafariSection:(id)a0 forQuery:(id)a1;
+ (void)moveSafariTopHitsToTopOfSection:(id)a0;
+ (id)getCoreDuetValues;
+ (void)extractThresholdABValues:(id)a0 forLanguage:(id)a1;
+ (id)keyForIntervalType:(long long)a0;
+ (void)reloadTopHitsParametersFromTrial;
+ (void)reloadCommittedSearchParametersFromTrial;
+ (void)reloadSuggestionsRankingThresholds;
+ (void)reloadRecencyThresholds;
+ (void)reloadLocaleSpecificMatchingParameters;
+ (void)fetchDuetValues;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithQuery:(id)a0;
- (id)suggestionResultScoreWithFeatures:(id)a0 options:(id)a1;
- (void)sendTTRLogsWithSections:(id)a0 searchString:(id)a1 queryKind:(unsigned long long)a2 isCommittedSearch:(BOOL)a3 parsecCameLaterThanSRT:(BOOL)a4;
- (id)initWithPreferredTopHitGroups:(id)a0 rankingConfiguration:(id)a1 searchString:(id)a2;
- (id)rankSectionsUsingBundleIDToSectionMapping:(id)a0 withRanker:(id)a1 preferredBundleIds:(id)a2 isScopedSearch:(BOOL)a3 queryId:(unsigned long long)a4 isCJK:(BOOL)a5 isBullseyeNonCommittedSearch:(BOOL)a6 isBullseyeCommittedSearch:(BOOL)a7 isPeopleSearch:(BOOL)a8;
- (BOOL)sectionContainsSomeStaleNonAppleApps:(id)a0 compareToItem:(id)a1;
- (BOOL)sectionsContainsShortcutResult:(id)a0 shortcutResult:(id)a1;
- (BOOL)sectionContainsOnlyStaleApps:(id)a0;
- (BOOL)sectionsContainsOnlyOneAppSection:(id)a0;
- (id)makeTopHitSectionUsingSections:(id)a0 withItemRanker:(id)a1 sectionHeader:(id)a2 shortcutResult:(id)a3 isBullseyeNonCommittedSearch:(BOOL)a4 isBullseyeCommittedSearch:(BOOL)a5 parsecEnabled:(BOOL)a6 maxNumAppsInTopHitSection:(unsigned long long)a7;
- (id)applyTopSectionPolicy:(id)a0 withTopHitSection:(id)a1 isPeopleSearch:(BOOL)a2 queryKind:(unsigned long long)a3 correction:(id)a4 queryLength:(unsigned long long)a5 ranker:(id)a6;
- (BOOL)sectionDoesNotContainMoreRecentlyUsedApps:(id)a0 lastUsedDate:(id)a1;
- (void)applyTopHitRankingPolicyToSection:(id)a0 topResultSection:(id)a1 maxTopHitCount:(long long)a2 isShortcut:(BOOL)a3;
- (id)removeBlockListedSectionsForMapping:(id)a0 withRankingConfiguration:(id)a1;
- (double)roundedValueForScore:(double)a0;
- (void)updateServerScoresUsingBlockOrder:(id)a0 bundleFeatures:(id)a1;
- (void)addCEPValuesForTTR;
- (void)finalizeLog;
- (id)relativeRankWithAbsRank:(id)a0 numberValues:(unsigned long long)a1;
- (BOOL)sectionContainsOnlyStaleNonAppleApps:(id)a0;
- (id)removeBlockListedSectionsForMapping:(id)a0;
- (long long)compareDate:(id)a0 withDate:(id)a1;
- (void)refineSectionShowingVisibleResultsWithBetterTextMatches:(id)a0;

@end
