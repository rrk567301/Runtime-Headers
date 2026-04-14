@class NSString, ATXCacheReader, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface ATXClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _consumerType;
    ATXCacheReader *_cacheReader;
    NSString *_cacheBasePath;
}

@property (readonly, nonatomic) NSXPCConnection *xpcConnection;

+ (id)clientForConsumerType:(unsigned long long)a0;
+ (id)dayZeroBundleIdsAndScoresFromDayZeroParameters:(id)a0;
+ (id)clientForConsumerType:(unsigned long long)a0 cachePath:(const char *)a1;
+ (id)clientForConsumerType:(unsigned long long)a0 cacheBasePath:(id)a1;

- (BOOL)shouldPredictAppBundleId:(id)a0;
- (void)overwriteWebsitePredictionsCacheWithWebsiteString:(id)a0 contextType:(id)a1;
- (id)_getConnection;
- (id)_syncProxy;
- (id)approvedSiriKitIntents;
- (BOOL)forceCacheUpdateForConsumerSubType:(unsigned char)a0 intent:(id)a1 candidateBundleIdentifiers:(id)a2 candidateIntentTypeIdentifiers:(id)a3;
- (BOOL)shouldPredictBundleIdForShortcuts:(id)a0 action:(id)a1;
- (id)_simulatorResponse;
- (id)fetchMenuItemsForCurrentAppInFocus:(id *)a0;
- (void)sortAppsByLaunches:(id)a0 reply:(id /* block */)a1;
- (id)_minuteZeroResponse;
- (void)recentURLsWithLimit:(unsigned long long)a0 typeIdentifiersForScope:(id)a1 withCompletion:(id /* block */)a2;
- (id)fetchPreWarmedContextualActionSuggestionsWithError:(id *)a0;
- (id)getAppPredictorAssetMappingDescription;
- (id)appPredictionsForConsumerSubType:(unsigned char)a0 limit:(int)a1 personaUID:(id)a2;
- (id)atxResponseFromBlendingAppPredictionCacheForConsumerSubType:(unsigned char)a0 filterPredicate:(id)a1 limit:(int)a2;
- (id)_predicateForDenyList:(id)a0;
- (id)initWithConsumerType:(unsigned long long)a0 cacheBasePath:(id)a1;
- (void)dealloc;
- (void)logUserFeedback:(id)a0 consumerSubType:(unsigned char)a1 engagementType:(unsigned long long)a2 bundleIdentifier:(id)a3 bundleIdsShown:(id)a4 explicitlyRejectedIds:(id)a5 personaUID:(id)a6;
- (id)fetchLastExecutedActions;
- (id)appPredictionsForConsumerSubType:(unsigned char)a0 blackList:(id)a1 limit:(int)a2 runningDiagnostics:(BOOL)a3;
- (void).cxx_destruct;
- (id)_asyncProxy;
- (void)logUserFeedback:(id)a0 consumerSubType:(unsigned char)a1 engagementType:(unsigned long long)a2 bundleIdentifier:(id)a3 bundleIdsShown:(id)a4 explicitlyRejectedIds:(id)a5;
- (void)getWebsitePredictionsForContextType:(id)a0 limit:(unsigned long long)a1 reply:(id /* block */)a2;
- (id)fetchToolKitBasedFallbackActionIds:(id *)a0;
- (void)notifySpotlightInvoked:(BOOL)a0;
- (id)appPredictionsForConsumerSubType:(unsigned char)a0 limit:(int)a1;
- (id)semanticallySimilarDocumentsFromOnScreenAppEntities;
- (BOOL)shouldPredictBundleIdForShortcuts:(id)a0 action:(id)a1 forPrimaryShortcuts:(BOOL)a2;
- (id)init;

@end
