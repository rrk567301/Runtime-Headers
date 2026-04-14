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
+ (void)boost;
+ (void)handleFoundItems:(id)a0;
+ (void)unboost;
+ (BOOL)isQuerySupported:(unsigned long long)a0;
+ (void)_displayNamePreferenceUpdated:(id)a0;
+ (void)_createApplicationsQuery;
+ (id)getAppleApps;
+ (void)readFlatFileForFastRetrievalAfterColdStart;
+ (void)handleQueryDidFinish;
+ (void)handleChangedItems:(id)a0;
+ (void)handleRemovedItems:(id)a0;
+ (void)updateWithNewResults:(id)a0;
+ (void)setApplicationBundleIdentifierForAppResult:(id)a0;
+ (void)writeAppsToFlatFileForColdStart;
+ (id)appToFastPathMapping;
+ (id)appToPathMapping;
+ (BOOL)isNonHomeDirectoryFilePath:(id)a0;
+ (BOOL)isNonRootVolumePrefResultWithFilePath:(id)a0 bundleID:(id)a1 contentType:(id)a2 groupID:(id)a3;
+ (void)loadFastAppsCache;
+ (id)getOrUpdateAppBundleIDList:(BOOL)a0;
+ (BOOL)isAppInExcludedList:(id)a0;
+ (BOOL)isAppleExternalApp:(id)a0;
+ (id)_applicationQueryUpdateDisplayNamesForResult:(id)a0 withAttributes:(id)a1;
+ (id)appResultForPath:(id)a0;
+ (BOOL)isNonRootVolumeNonHomeDirectoryContactResultWithFilePath:(id)a0 contentType:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (void)setRankingQueries:(id)a0;
- (void)startWithFuzzyValue:(BOOL)a0;
- (void)_sendFastFilteredResults;
- (void)prepareQuery:(BOOL)a0;
- (void)_sendFilteredResponseOfKind:(int)a0;
- (void)_registerForApplicationResultsUpdateNotification;
- (void)_unregisterForApplicationResultsUpdateNotification;
- (void)_applicationResultsDidUpdateNotification:(id)a0;
- (id)filterResultsBasedOnDisplayName:(id)a0;
- (void)_sendResponse:(id)a0;
- (unsigned __int128)calculateScoreForResult:(id)a0 withTextQuery:(id)a1;
- (BOOL)isCopyrightApple:(id)a0;
- (id)ranker;
- (BOOL)isApplicationQuery;

@end
