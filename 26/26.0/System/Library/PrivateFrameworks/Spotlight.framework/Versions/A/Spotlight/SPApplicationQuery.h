@class NSString, NSArray, PRSRankingItemRanker, SPMetadataPattern;

@interface SPApplicationQuery : SPKQuery {
    struct __MDAppRankEvaluator { } *_appRankEvaluator;
    NSString *_filterQuery;
    NSArray *_rankingPatterns;
    PRSRankingItemRanker *_ranker;
}

@property (readonly) NSString *queryString;
@property (readonly) SPMetadataPattern *queryPattern;
@property BOOL isFuzzy;

+ (void)initialize;
+ (id)_applicationQueryUpdateDisplayNamesForResult:(id)a0 withAttributes:(id)a1;
+ (id)_convertItemFromOneness:(id)a0;
+ (void)_createApplicationsQueryWithIsUpdate:(BOOL)a0;
+ (id)_createCSQueryOnDispatchGroup:(id)a0 bundleIds:(id)a1 queryString:(id)a2 subQueryKind:(long long)a3 isUpdate:(BOOL)a4;
+ (void)_displayNamePreferenceUpdated:(id)a0;
+ (void)_handleURLIsHiddenBySystemChangeNotification:(id)a0;
+ (id)_preferencesFilters;
+ (id)appResultForPath:(id)a0;
+ (id)appToFastPathMapping;
+ (id)appToPathMapping;
+ (id)getAppDisplayNameList;
+ (id)getAppleApps;
+ (id)getAppleInternalApps;
+ (id)getAppleSystemApps;
+ (id)getFrequentlyUsedAppleInternalApps;
+ (id)getOrUpdateAppBundleIDList:(BOOL)a0;
+ (void)handleChangedItems:(id)a0 subQueryKind:(long long)a1 queryID:(long long)a2;
+ (void)handleFoundItems:(id)a0 subQueryKind:(long long)a1 queryID:(long long)a2;
+ (void)handleQueryDidFinishWithIsUpdate:(BOOL)a0;
+ (void)handleRemovedItems:(id)a0 subQueryKind:(long long)a1 queryID:(long long)a2;
+ (id)hiddenBySystemMapping;
+ (BOOL)isAppInExcludedList:(id)a0;
+ (BOOL)isAppleExternalApp:(id)a0;
+ (BOOL)isAppleInternalApp:(id)a0;
+ (BOOL)isAppleSystemApp:(id)a0;
+ (BOOL)isFrequentlyUsedAppleInternalApp:(id)a0;
+ (BOOL)isNonHomeDirectoryFilePath:(id)a0;
+ (BOOL)isNonRootVolumeNonHomeDirectoryContactResultWithFilePath:(id)a0 contentType:(id)a1;
+ (BOOL)isNonRootVolumePrefResultWithFilePath:(id)a0 bundleID:(id)a1 contentType:(id)a2 groupID:(id)a3;
+ (BOOL)isQuerySupported:(unsigned long long)a0;
+ (BOOL)isURLHiddenBySystem:(id)a0;
+ (void)loadFastAppsCache;
+ (void)readFlatFileForFastRetrievalAfterColdStart;
+ (unsigned int)searchDomain;
+ (void)setApplicationBundleIdentifierForAppResult:(id)a0;
+ (void)updateWithNewResults:(id)a0 subQueryKind:(long long)a1 queryID:(long long)a2;
+ (void)writeAppsToFlatFileForColdStartWithSubQueryKind:(long long)a0 queryID:(long long)a1;

- (void)start;
- (void)dealloc;
- (id)ranker;
- (void)cancel;
- (void)prepareQuery:(BOOL)a0;
- (void)setRankingQueries:(id)a0;
- (void).cxx_destruct;
- (void)_applicationResultsDidUpdateNotification:(id)a0;
- (void)_registerForApplicationResultsUpdateNotification;
- (void)_sendFastFilteredResults;
- (void)_sendFilteredResponseOfKind:(int)a0;
- (void)_sendResponse:(id)a0;
- (void)_unregisterForApplicationResultsUpdateNotification;
- (unsigned __int128)calculateScoreForResult:(id)a0 withTextQuery:(id)a1;
- (id)filterResultsBasedOnDisplayName:(id)a0;
- (BOOL)isApplicationQuery;
- (BOOL)isCopyrightApple:(id)a0;
- (void)startWithFuzzyValue:(BOOL)a0;

@end
